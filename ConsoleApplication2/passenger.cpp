#include "pch.h"
#include <iostream>
#include "passenger.h"


using namespace std;

namespace AirlineRes
{
	void passenger::setSeatNumber(int seatNo)
	{
		seatNumber = seatNo;
	}
	int passenger::getSeatNumber()
	{
		return seatNumber;
	}

	void passenger::p_detail()//function declaration and definition
	{	
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

	int passenger::getTicket()
	{
		int choice = select_flight();
		if (choice > 0 && choice < 8)
		{
			p_detail();
			gender_check();
			payment pay;
			pay.pay_detail();
			cout << "Your ticket number is: " << getTicketNo();
			cout << "\n";
		}
		return choice;
	}

	void passenger::dispTicketInfo()//function to display ticket details
	{
		cout << endl;
		cout << "Ticket number: " << ticketNumber << endl;
		cout << "Route: " << route << endl;
		cout << "Airline: " << airline << endl;
		cout << "Name: " << f_name << " " << l_name << endl;
		cout << "Date of Journey: " << mm << "/" << dd << "/" << yyyy << endl;
		cout << "Departure Time: " << departureTime << endl;
		cout << "Arrival Time: " << arrivalTime << endl;
		cout << "Ticket Price: " << price << endl;

		if (seatNumber == 0)
			cout << "SEAT NOT YET RESERVED" << endl;
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

	int passenger::reserve_a_seat() // function to reserve a seat
	{
		char selection;
		int chosen = 0;
		char choice;

		cout << endl;
		cout << "Select a Seat type" << endl;
		cout << "------------------" << endl;
		cout << "1. Window Seat" << endl;
		cout << "2. Aisle Seat" << endl;
		cout << "3. Other Seat" << endl;
		cout << "0. Exit" << endl;
		cout << endl;
		cout << "\n Please enter your choice:";
		cout << "---> ";

		cin >> selection;
		int sel = (int)selection - (int)48;

		switch (sel) // switch case
		{
		case 0:
			cout << "You Have Exited Seat Reservation" << endl;
			break;
		case 1://window seat

			cout << "\nSeats Available:" << endl;
			v1 = rand() % 50;         // v1 in the range 0 to 49
			v2 = rand() % 50;         // v2 in the range 0 to 49
			v3 = rand() % 50;         // v3 in the range 0 to 49

			sprintf_s(s1, "%d", v1);
			sprintf_s(s2, "%d", v2);
			sprintf_s(s3, "%d", v3);

			cout << "1. " << s1 << endl;
			cout << "2. " << s2 << endl;
			cout << "3. " << s3 << endl;
			cout << endl;
			cout << "\n Please enter your choice:";
			cout << "---> ";

			cin >> choice;
			chosen = (int)choice - (int)48;
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
				return reserve_a_seat();
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

			cin >> choice;
			chosen = (int)choice - (int)48;

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
				return reserve_a_seat();
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

			cin >> choice;
			chosen = (int)choice - (int)48;

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
				return reserve_a_seat();
				break;
			}
			break;
		default://condition
			cout << "Incorrect input.\nPlease try again" << endl;
			return reserve_a_seat();
			break;
		}
		return sel;
	}
}
