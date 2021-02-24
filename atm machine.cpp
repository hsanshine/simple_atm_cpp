#include <iostream>
using namespace std;

void showMenu() {
	cout << "******* MENU *******" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit Money" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Quit" << endl;
	cout << "******* ******* *******" << endl;

}
int main()
{
	// functionalities check balance, deposit, withdraw, show menu
	int option;
	double balance = 0;
	do
	{
		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls"); //we can delete the menu after the user makes their choice.
		switch (option)
		{
		case 1:
			cout << "Balance is: " << balance << " $" << endl<<endl;
			break;
		case 2: 
			double depositAmount;
			cout << "Deposit Amount: ";
			cin >> depositAmount;

			if (depositAmount > 0) {
				balance = balance + depositAmount;
				cout << "new balance is " << balance << " $ " << endl << endl;
				break;
			}
			else {
				cout << "Invalid deposit amount!" << endl<<endl;
			}
			
		case 3:
			double withdrawAmount;
			cout << "Withdraw Amount: ";
			cin >> withdrawAmount;

			if (withdrawAmount > 0) {
				if (withdrawAmount <= balance) {
					balance = balance - withdrawAmount;
					cout << "new balance is " << balance << " $ " << endl;
				}
				else {
					cout << "Insufficient funds on account."<<endl<<endl;
				}
				
				break;
			}
			else {
				cout << "Invalid withdraw amount!" << endl<<endl;
			}

			break;
		case 4:
			cout << "Thank you for using our bank." << endl << endl;
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}

	} while (option!=4);
	
	
	system("pause>0");

}