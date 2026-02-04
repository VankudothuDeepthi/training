#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // hidden data

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);

    cout << acc.getBalance() << endl;
    return 0;
}
