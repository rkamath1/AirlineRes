#include "pch.h"
#include <iostream>
#include "payment.h"

using namespace std;

namespace AirlineRes
{
	void payment::pay_detail()//function declaration and definition for payment method
	{
		cout << "\n\n\nHow would you like to pay?:\n";
		cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)" << endl;
		cout << "\n\nEnter your choice: >" ;
		cin >> choice1;
		switch (choice1)//switch case
		{
		case 1://condition
			cout << "\nEnter card no.: ";
			cin >> card;
			cout << "\nEnter expiry date: ";
			cin >> date;
			cout << "\nEnter PIN: ";
			cin >> cvv;
			cout << "\nTransaction Successful\n";
			break;
		case 2://condition
			cout << "\nEnter card no.: ";
			cin >> card;
			cout << "\nEnter expiry date: ";
			cin >> date;
			cout << "\nEnter CVV No.: ";
			cin >> cvv;
			cout << "\nTransaction Successful\n";
			break;
		case 3://condition
			cout << "Banks Available: \1.Wells Fargo(1) \2.Bank of America(2) \3.Chase(3)";
			cout << "\nSelect your bank: >";
			cin >> bank;
			switch (bank)
			{
			case 1:
				cout << "\nYou selected: Wells Fargo" <<  endl;
				break;
			case 2:
				cout << "\nYou selected: Bank Of America" << endl;
				break;
			case 3:
				cout << "\nYou selected: Chase"<< endl;
				break;
			default:
				cerr << "\nWrong input" << endl;
				break;
			}
			cout << "\nEnter user id: ";
			cin >> user_id;
			cout << "\nEnter password: ";
			cin >> password;
			cout << "\nTransaction Successful\n";
			break;
		default://condition
			cout << "\nWrong input entered.\nTry again\n\n";
			return pay_detail();
		}
	}
}