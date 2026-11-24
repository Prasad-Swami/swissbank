#include <string>
class BankAccount{
private:
    std::string accountNo;
    std::string customerName;
    double balance = 0;
    inline static int counter = 20260000;
    bool accountCreated = false;
public:
    void createAccount();
    void displayAccountDetails();
    double getBalance();
    void depositMoney();
    void withdrawMoney();
};