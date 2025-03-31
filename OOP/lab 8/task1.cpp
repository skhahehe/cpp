#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    string accountHolder;
public:
    BankAccount(string holder, double initial_balance) {
        setAccountHolder(holder);
        balance = initial_balance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }
    void withdraw(double amount) {
       if (amount <= 0){
        cout<<"Invalid input .The amount can not be Negative \n";
       }
       
        else if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
    string getAccountHolder() {
        return accountHolder;
    }
    void setAccountHolder(string holder) {
        if (!holder.empty()) {
            accountHolder = holder;
        } else {
            cout << "Invalid account holder name" << endl;
        }
    }
};

int main() {
    BankAccount account("Jamil", 2500);
    account.deposit(1500);
    account.withdraw(800);
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: " << account.getBalance() << endl;
    
    account.setAccountHolder("saad hassan");
    cout << "Updated Account Holder: " << account.getAccountHolder() << endl;
    
    return 0;
}
