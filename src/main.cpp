/*
 * main.cpp
 *
 *  Created on: 21 Nov 2026
 *      Author: Prasad
 */

#include <iostream>
#include  <vector>
#include "../include/BankAccount.h"


int main(){
	std::vector<BankAccount> accounts;
	//BankAccount BA;
	int option;
	do{
		std::cout << "--------------------------------------\n";
		std::cout << "============= Swiss Bank =============" << "\n";
		std::cout << "1. Create Account" << "\n";
		std::cout << "2. Display Account" << "\n";
		std::cout << "3. Deposit" << "\n";
		std::cout << "4. Withdraw" << "\n";
		std::cout << "5. Exit" << "\n";
		std::cout << "--------------------------------------\n";
		std::cout << "Selected Choice:";
		std::cin>>option;
		std::cout << "--------------------------------------\n";
		switch(option){
			case 1: {
				BankAccount newAccount;
				newAccount.createAccount();
				accounts.push_back(newAccount);
				break;
			}

			case 2:{
				std::string enteredAccNo;
				bool found = false;

				std::cout << "Enter Account Number: ";
				std::cin >> enteredAccNo;

				for(BankAccount &account : accounts){
					if(enteredAccNo == account.getAccountNo()){
						account.displayAccountDetails();
						found = true;
						break;
					}
				}

				if(!found){
					std::cout << "Account Not Found \n";
				}
				break;
			}

			case 3:{
				std::string enteredAccNo;
				bool found = false;

				std::cout << "Enter the Account No: ";
				std::cin >> enteredAccNo;

				for(BankAccount &account: accounts){
					if(enteredAccNo == account.getAccountNo()){
						account.depositMoney();
						found = true;
						break;
					}
				}
				
				if(!found){
					std::cout << "Account Not Found \n";
				}
				break;
			}

			case 4:{
				std::string enteredAccNo;
				bool found = false;

				std::cout << "Enter the Account No: ";
				std::cin >> enteredAccNo;

				for(BankAccount &account: accounts){
					if(enteredAccNo == account.getAccountNo()){
						account.withdrawMoney();
						found = true;
						break;
					}
				}
				
				if(!found){
					std::cout << "Account Not Found \n";
				}
				break;
			}

			case 5:
				std::cout<<"Exit \n";
				return 0;

			default:
				std::cout << "Please Select the Valid Choice \n";
				break;
		}

	}while(option != 5);
	return 0;
}


