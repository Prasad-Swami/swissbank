#include <iostream>
#include "BankAccount.h"

void BankAccount::createAccount(){
    if(accountCreated){
        std::cout << "Account is Alredy created \n";
        return;
    }
    std::cout<<"Welcome to Swiss Bank, Create you new Account" << "\n";
    std::cout << "Enter your Name: ";
    std::cin >> std::ws;
    std::getline(std::cin, customerName);
    std::cout << "Your Account Number: ";
    accountNo = std::to_string(++counter);
    std::cout << accountNo << std::endl; 
    accountCreated = true;
}

double BankAccount::getBalance(){
    return balance;
}

void BankAccount::displayAccountDetails(){
    if(!accountCreated){
        std::cout << "Account Status unable to found \n ";
        return;
    }
    std::cout << "Account Holder Name: " << customerName << "\n";
    std::cout << "Account Number: " << accountNo << "\n";
    std::cout << "Available Balance: " << getBalance() << "\n";
}

void BankAccount::depositMoney(){
    if(!accountCreated){
        std::cout << "Requested to create Account, before proceeding \n";
        return;
    }
    double depositeAmt;
    std::cout << "Deposite the Amount Here \n";
    std::cin >> depositeAmt;
    if(depositeAmt > 0){
        balance += depositeAmt;
        std::cout << "The Current Balance: " << getBalance() << "\n";
    }else{
        std::cout << "Invalid Input Balance \n";
    }
}

void BankAccount::withdrawMoney(){
    if(!accountCreated){
        std::cout << "Account Status unable to found \n";
        return;
    }
    double withdrawAmt;
    std::cout << "Enter the Amount to Withdraw \n";
    std::cin >> withdrawAmt;
    if(withdrawAmt > 0 && withdrawAmt <= balance){
        balance -= withdrawAmt;
        std::cout << "The Deducted Amount is: " << withdrawAmt << "\n";
        std::cout << "Available Balance is: " << getBalance() << "\n";
    }else{
        std::cout << "Invalid Amount" << "\n";
    }
}

std::string BankAccount::getAccountNo(){
    return accountNo;
}