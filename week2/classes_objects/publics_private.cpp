#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(5000);

    cout << acc.getBalance() << endl;
    return 0;
}
