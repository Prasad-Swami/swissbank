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

void BankAccount::depositeMoney(){
    std::cout << "Deposite the Amount Here \n";
    std::cin >> depositeAmt;
    if(depositeAmt > 0){
        balance += depositeAmt;
        std::cout << "The Current Balance: " << getBalance() << "\n";
    }else{
        std::cout << "Invalid Input Balance \n";
    }
}

double BankAccount::withdrawMoney(){
    std::cout << "Enter the Amount to Withdraw \n";
    std::cin >> withdrawAmt;
    if(withdrawAmt > 0 && withdrawAmt < balance){
        balance -= withdrawAmt;
        std::cout << "The Deducted Amount is: " << withdrawAmt << "\n";
        std::cout << "Available Balance is: " << getBalance() << "\n";
    }else{
        std::cout << "Invalid Amount" << "\n";
    }
}