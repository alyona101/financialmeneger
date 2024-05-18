#include <iostream>
#include <string>

using namespace std;

class Wallet {
public:
    
    Wallet(string wallet_name, double initial_balance) : name(wallet_name), balance(initial_balance) {}

    
    void AddBalance(double amount) {
        balance += amount;
    }

    
    void PrintBalance() {
        cout << "�������� ��������: " << name << endl;
        cout << "������ ��������: " << balance << endl;
    }

private:
    string name; 
    double balance;  
};

int main() {

    setlocale(LC_ALL, "ru");
    
    Wallet MyWallet("MyWallet", 0);

    MyWallet.PrintBalance();

    return 0;
}
