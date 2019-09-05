#include "pch.h"
#include <iostream>
#include "passenger.h"


using namespace std;

namespace AirlineRes
{
	void passenger::p_detail()//function declaration and definition
	{	
		select_flight();//function call	
		cout << "\nEnter Date Of Journey(MMDDYYYY)." << "Please enter a valid date." << endl;
		cin >> bookTicket::doj;
		cout << "\n\n\nEnter passenger details";
		cout << "\nFirst Name: ";
		cin >> f_name;
		cout << "Last Name: ";
		cin >> l_name;
		cout << "Age: ";
		cin >> age;
		cout << "Email Id: ";
		cin >> email;
		cout << "Contact no.(6 digits): ";
		cin >> contact_no;
		cout << "Enter your address: " << endl;
		cout << "City: ";
		cin >> city;
		cout << "State: ";
		cin >> state;
		cout << "Zip code: ";
		cin >> z1;
		sprintf_s(zip, "%d", z1);
	}

	int passenger::gender_check()//to get gender of passenger
	{
		cout << "\nGender:\nMale-press:1  \nFemale-press:2 \n> ";
		cin >> gender;
		if (gender > 2 || gender < 1)//condition
		{
			cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
			return gender_check();//function call
		}
		return gender;
	}


	void passenger::dispTicketInfo()//function to display ticket details
	{
		cout << endl;
		cout << "Ticket number: " << ticketNumber << endl;
		cout << "Route: " << route << endl;
		cout << "Airline: " << airline << endl;
		cout << "Name: " << f_name << " " << l_name << endl;
		cout << "Date of Journey: " << doj << endl;
		cout << "Departure Time: " << departureTime << endl;
		cout << "Arrival Time: " << arrivalTime << endl;
		cout << "Ticket Price: " << price << endl;

		if (seatNumber == 0)
			cout << "Seat not yet reserved" << endl;
		else
			cout << "Seat No.: " << seatNumber << endl;
		
		cout <<  endl;
	}

	void passenger::dispPassengerInfo()//function to display passenger details
	{
		cout << "Name: " << f_name << " " << l_name << endl;
		cout << "email ID: " << email << endl;
		cout << "Address: " << endl;
		cout << city << ", " << state << ", " << zip << endl;
		cout << "Contact No.:" << contact_no << endl;
		if (gender == 1)
			cout << "Gender:  Male" <<  endl;
		else
			cout << "Gender:  Female" << endl;
		cout << "Age:" << age << endl;
	}

	void passenger::reserve_a_seat() // function to reserve a seat
	{
		int selection;

		cout << endl;
		cout << "Select a Seat type" << endl;
		cout << "------------------" << endl;
		cout << "1. Window Seat" << endl;
		cout << "2. Aisle Seat" << endl;
		cout << "3. Other Seat" << endl;
		cout << endl;
		cout << "\n Please enter your choice:";
		cout << "---> ";

		cin >> selection;

		switch (selection) // switch case
		{
		case 1://window seat

			cout << "\nSeats Available:" << endl;
			v1 = rand() % 50;         // v1 in the range 0 to 49
			v2 = rand() % 50;         // v2 in the range 0 to 49
			v3 = rand() % 50;         // v3 in the range 0 to 49
			
			sprintf_s(s1, "%d", v1);			
			sprintf_s(s2, "%d", v2);			
			sprintf_s(s3, "%d", v3);

			cout << "1. " << s1 << endl;
			cout << "2. " << s2<< endl;
			cout << "3. " << s3 << endl;
			cout << endl;
			cout << "\n Please enter your choice:";
			cout << "---> ";

			cin >> chosen;

			switch (chosen)
			{
				case 1:
					cout << "You selected  " << s1 << endl;
					seatNumber = v1;
				break;
				case 2:
					cout << "You selected  " << s2 << endl;
					seatNumber = v2;
				break;
				case 3:
					cout << "You selected  " << s3 << endl;
					seatNumber = v3;					
				break;
				default:
					cerr << "Unknown command." << endl;
				break;
			}
		break;
		case 2://condition
			cout << "\nSeats Available:" << endl;
			v1 = rand() % 30;         // v1 in the range 0 to 29
			v2 = rand() % 30;         // v2 in the range 0 to 29
			v3 = rand() % 30;         // v3 in the range 0 to 29
			
			sprintf_s(s1, "%d", v1);			
			sprintf_s(s2, "%d", v2);			
			sprintf_s(s3, "%d", v3);

			cout << "1. " << s1 << endl;
			cout << "2. " << s2 << endl;
			cout << "3. " << s3 << endl;
			cout << endl;
			cout << "\n Please enter your choice:";
			cout << "---> ";

			cin >> chosen;

			switch (chosen)
			{
			case 1:
				cout << "You selected  " << s1 << endl;
				seatNumber = v1;
				break;
			case 2:
				cout << "You selected  " << s2 << endl;
				seatNumber = v2;
				break;
			case 3:
				cout << "You selected  " << s3 << endl;
				seatNumber = v3;
				break;
			default:
				cerr << "Unknown command." << endl;
				break;
			}
		break;
		case 3://condition
			cout << "\nSeats Available:" << endl;
			v1 = rand() % 20;         // v1 in the range 0 to 19
			v2 = rand() % 20;         // v2 in the range 0 to 19
			v3 = rand() % 20;         // v3 in the range 0 to 19
			
			sprintf_s(s1, "%d", v1);			
			sprintf_s(s2, "%d", v2);			
			sprintf_s(s3, "%d", v3);

			cout << "1. " << s1 << endl;
			cout << "2. " << s2 << endl;
			cout << "3. " << s3 << endl;
			cout << endl;
			cout << "\n Please enter your choice:";
			cout << "---> ";

			cin >> chosen;

			switch (chosen)
			{
			case 1:
				cout << "You selected  " << s1 << endl;
				seatNumber = v1;
				break;
			case 2:
				cout << "You selected  " << s2 << endl;
				seatNumber = v2;
				break;
			case 3:
				cout << "You selected  " << s3 << endl;
				seatNumber = v3;
				break;
			default:
				cerr << "Unknown command." << endl;
				break;
			}
		break;		
		default://condition
			cout << "Wrong input entered.\nTry again" << endl;
			return reserve_a_seat();
			break;
		}
	}
}
