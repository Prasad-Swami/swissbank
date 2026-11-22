#include <iostream>
#include "BankAccount.h"

void BankAccount::createAccount(){
    std::cout<<"Welcome to Swiss Bank, Create you new Account" << "\n";
    std::cout << "Enter your Name: ";
    std::getline(std::cin, customerName);
    std::cout << "Your Account Number: ";
    accountNo = ++counter;
    std::cout << accountNo << std::endl; 
}

double BankAccount::getBalance(){
    return balance;
}

void BankAccount::displayAccountDetails(){
    std::cout << "Account Holder Name: " << customerName << "\n";
    std::cout << "Account Number: " << accountNo << "\n";
    std::cout << "Available Balance: " << getBalance() << "\n";
}

