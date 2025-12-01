#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance = balance + amount;
    }
};
class SavingsAccount : public BankAccount {
public:
    void interest() {
        double i = balance * 0.05;
        cout << "Balance: " << balance << endl;
        cout << "Interest (5%): " << i << endl;
    }
};

int main() {
    SavingsAccount s;
    s.deposit(1000);
    s.interest();
    return 0;
}

