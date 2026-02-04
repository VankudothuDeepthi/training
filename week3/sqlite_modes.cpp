#include <sqlite3.h>
#include <iostream>
using namespace std;

void execute(sqlite3* db, const char* sql) {
    char* errMsg = nullptr;
    int rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        cout << "SQL Error: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}

int main() {
    sqlite3* db;

    /* =====================================================
       1. DEFAULT MODE – Rollback Journal (DELETE)
       ===================================================== */
    cout << "Opening database in default rollback journal mode...\n";
    sqlite3_open_v2("example.db", &db,
                    SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE,
                    nullptr);

    execute(db, "PRAGMA journal_mode=DELETE;");
    execute(db, "CREATE TABLE IF NOT EXISTS users(id INTEGER, name TEXT);");
    execute(db, "INSERT INTO users VALUES(1, 'Alice');");

    sqlite3_close(db);

    /* =====================================================
       2. WAL MODE – Write-Ahead Logging
       ===================================================== */
    cout << "Opening database in WAL mode...\n";
    sqlite3_open_v2("example.db", &db,
                    SQLITE_OPEN_READWRITE,
                    nullptr);

    execute(db, "PRAGMA journal_mode=WAL;");
    execute(db, "INSERT INTO users VALUES(2, 'Bob');");

    sqlite3_close(db);

    /* =====================================================
       3. READ-ONLY MODE
       ===================================================== */
    cout << "Opening database in READ-ONLY mode...\n";
    sqlite3_open_v2("example.db", &db,
                    SQLITE_OPEN_READONLY,
                    nullptr);

    // This will FAIL because DB is read-only
    execute(db, "INSERT INTO users VALUES(3, 'Charlie');");

    sqlite3_close(db);

    /* =====================================================
       4. IN-MEMORY DATABASE MODE
       ===================================================== */
    cout << "Opening in-memory SQLite database...\n";
    sqlite3_open(":memory:", &db);

    execute(db, "CREATE TABLE temp(id INTEGER, value TEXT);");
    execute(db, "INSERT INTO temp VALUES(1, 'Temporary Data');");

    sqlite3_close(db);

    cout << "\nProgram completed successfully.\n";
    return 0;
}
