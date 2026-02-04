#include <iostream>
#include <sqlite3.h>

int main() {
    sqlite3* db = nullptr;
    sqlite3_stmt* stmt = nullptr;

    
    if (sqlite3_open("school.db", &db) != SQLITE_OK) {
        std::cerr << "Failed to open database\n";
        return 1;
    }

    
    const char* create_sql =
        "CREATE TABLE IF NOT EXISTS students ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "name TEXT, "
        "age INTEGER);";

    sqlite3_prepare_v2(db, create_sql, -1, &stmt, nullptr);
    sqlite3_step(stmt);          // SQLITE_DONE
    sqlite3_finalize(stmt);

    
    const char* insert_sql =
        "INSERT INTO students (name, age) VALUES (?, ?);";

    sqlite3_prepare_v2(db, insert_sql, -1, &stmt, nullptr);
    sqlite3_bind_text(stmt, 1, "Deepthi", -1, SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt, 2, 20);
    sqlite3_step(stmt);          // SQLITE_DONE
    sqlite3_finalize(stmt);

    
    const char* select_sql =
        "SELECT id, name, age FROM students;";

    sqlite3_prepare_v2(db, select_sql, -1, &stmt, nullptr);

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char* name =
            reinterpret_cast<const char*>(
                sqlite3_column_text(stmt, 1));
        int age = sqlite3_column_int(stmt, 2);

        std::cout << id << " | "
                  << name << " | "
                  << age << std::endl;
    }

    sqlite3_finalize(stmt);

    
    const char* update_sql =
        "UPDATE students SET age = ? WHERE id = ?;";

    sqlite3_prepare_v2(db, update_sql, -1, &stmt, nullptr);
    sqlite3_bind_int(stmt, 1, 21);
    sqlite3_bind_int(stmt, 2, 1);
    sqlite3_step(stmt);          // SQLITE_DONE
    sqlite3_finalize(stmt);

    
    const char* delete_sql =
        "DELETE FROM students WHERE id = ?;";

    sqlite3_prepare_v2(db, delete_sql, -1, &stmt, nullptr);
    sqlite3_bind_int(stmt, 1, 1);
    sqlite3_step(stmt);          // SQLITE_DONE
    sqlite3_finalize(stmt);

    
    sqlite3_close(db);

    return 0;
}

