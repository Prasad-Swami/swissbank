/*
 * main.cpp
 *
 *  Created on: 21 Nov 2026
 *      Author: Prasad
 */

#include <iostream>
#include "../include/BankAccount.h"

int main(){
	BankAccount BA;
	int option;
	// BA.createAccount();
	// BA.displayAccountDetails();
	do{
		std::cout << "============= Swiss Bank =============" << "\n";
		std::cout << "1. Create Account" << "\n";
		std::cout << "2. Display Account" << "\n";
		std::cout << "3. Deposit" << "\n";
		std::cout << "4. Withdraw" << "\n";
		std::cout << "5. Exit" << "\n";
		std::cin>>option;
		switch(option){
			case 1:
				BA.createAccount();
				break;

			case 2:
				BA.displayAccountDetails();
				break;

			case 3:
				BA.depositeMoney();
				break;

			case 4:
				BA.withdrawMoney();
				break;

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


