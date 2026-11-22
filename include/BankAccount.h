#include <string>
class BankAccount{
private:
    int accountNo;
    std::string customerName;
    double balance = 0;
public:
    void createAccount();
    void displayAccountDetails();
    double getBalance();
};