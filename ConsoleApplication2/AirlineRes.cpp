// AirlineRes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "passenger.h"
#include "payment.h"

using namespace std;

using namespace AirlineRes;

int displayMenu();
void createfile(passenger p);
void cancelticket(int x);
void checkticket(int x);
void displayPassengerInfo(int x);
void reserveSeat(int x);

int main()//main function
{

	class bookTicket ticket;//object for class bookTicket
	class passenger pass;//object for class passenger
	class payment pay;//object for class payment
	int n;//integer variable to be used for getting ticket number

	while (true) 
	{
		int selection = displayMenu();
		switch (selection) 
		{
		case 0:
			cout << endl;
			cout << "You have quit the Airline Reservation System" << endl;
			system("pause");
			return 0;
		case 1: //book a flight
			system("CLS");			
			pass.setTicketNo();
			pass.p_detail();//function calls
			pass.gender_check();
			pay.pay_detail();
			pass.dispTicketInfo();
			createfile(pass);//call to create file
			system("pause");
			break;						
		case 2: //Reserve a seat			
			system("CLS");
			cout << "Please enter your ticket no.:" << endl;
			cin >> n;
			reserveSeat(n);
			cout << "\n\n";
			system("pause");
			break;
		case 3: //Display Flight Schedule
			system("CLS");
			ticket.displayFlightSched();
			cout << "\n\n";
			system("pause");
			break;			
		case 4:	//Display Passenger info		
			system("CLS");
			cout << "Please enter your ticket no.:" << endl;
			cin >> n;
			displayPassengerInfo(n);
			cout << "\n\n";
			system("pause");
			break;
		case 5:	//Flight Details	
			ticket.flight_detail();
			cout << "\n\n";
			system("pause");
			break;
		case 6:	//Display ticket information		
			system("CLS");
			cout << "Please enter your ticket no.:" << endl;
			cin >> n;
			checkticket(n);
			cout << "\n\n";
			system("pause");
			break;
		case 7:	//Cancel Ticket		
			system("CLS");
			cout << "Please enter your ticket no.:" << endl;
			cin >> n;
			cancelticket(n);//function call for domestic booking cancellation
			cout << "\n\n";
			system("pause");
			break;
		default:
			cerr << "Unknown command." << endl;
			system("pause");
			break;
		}
	}

	return 0;
}

	int displayMenu()
	{
		int selection;

		system("CLS");
		cout << "\n\n \t\tWelcome To Airline Reservation System" << endl << endl;
		cout << "\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
		cout << "\t   Book your flight tickets at affordable prices!" << endl;
		cout << "\t   <><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "\t\t 1) Book A Flight" << endl;
		cout << "\t\t 2) Reserve A Seat" << endl;
		cout << "\t\t 3) Flight Schedule" << endl;
		cout << "\t\t 4) Display Passenger Info" << endl;
		cout << "\t\t 5) Flight Details" << endl;
		cout << "\t\t 6) User Ticket Information" << endl;
		cout << "\t\t 7) Cancel Ticket" << endl;
		cout << "\t\t 0) Quit" << endl;
		cout << "\n \t\tPlease enter your choice: ";

		cin >> selection;

		return selection;
	}	

	void createfile(passenger p)//file creation for domestic booking
	{
		ofstream fin("ticketFile.txt", ios::binary | ios::app);
		fin.write((char*)&p, sizeof(p));//writing to file
		fin.close();//closing file
	}

	void cancelticket(int x)//function to cancel ticket
	{
		passenger p;
			
		int f = 0;
		ifstream fout("ticketFile.txt", ios::binary | ios::app);//for reading file
		ofstream fin("ticketFile1.txt", ios::binary | ios::app);//for writing to a new file
		fout.read((char *)&p, sizeof(p));//reading file
		while (fout)
		{
			if (p.getTicketNo() != x)//checking pnr
				fin.write((char *)&p, sizeof(p));//writing to file
			else
			{
				p.dispTicketInfo();//display details
				cout << "\nYour above ticket has been cancelled\n" << "Ticket Amount is being refunded\n";
				f++;//incrementing f if pnr found
			}
			fout.read((char *)&p, sizeof(p));//reading another record from file
		}
		if (f == 0)//if f==0,pnr not found
			cout << "Ticket not found\n";
		fout.close();//closing file
		fin.close();//closing file
		remove("ticketFile.txt");//deleting old file
		rename("ticketFile1.txt", "ticketFile.txt");//renaming new file
	}

	void checkticket(int x)//function to check or display ticket info
	{
		passenger p;
		int f = 0;
		ifstream fout("ticketFile.txt", ios::binary);//opening file
		fout.read((char *)&p, sizeof(p));//reading file
		while (fout)
		{
			if (p.getTicketNo() == x)//checking pnr
			{
				cout << "\nYour ticket details:" << endl;
				p.dispTicketInfo();//display details	
				f++;//incrementing f if one found
				break;
			}
			fout.read((char *)&p, sizeof(p));//reading another record from the same file

		}
		fout.close();//closing file
		if (f == 0)//if f==0, pnr not found
			cout << "Ticket not found" << endl;

	}

	void displayPassengerInfo(int x)
	{
		passenger p;
		int f = 0;
		ifstream fout("ticketFile.txt", ios::binary);//opening file
		fout.read((char *)&p, sizeof(p));//reading file
		while (fout)
		{
			if (p.getTicketNo() == x)//checking pnr
			{
				cout << "\nPassenger details:" << endl;				
				p.dispPassengerInfo(); //display details	
				f++;//incrementing f if one found
				break;
			}
			fout.read((char *)&p, sizeof(p));//reading another record from the same file

		}
		fout.close();//closing file
		if (f == 0)//if f==0, pnr not found
			cout << "Ticket not found" << endl;
	}

	void reserveSeat(int x)
	{
		passenger p;
		ifstream fout("ticketFile.txt", ios::binary | ios::app);//for reading file
		ofstream fin("ticketFile1.txt", ios::binary | ios::app);//for writing to a new file
		fout.read((char *)&p, sizeof(p));//reading file
		if (fout)
		{
			if (p.getTicketNo() == x)//checking pnr
			{
				p.reserve_a_seat();//Reserve Seat
				cout << "\nYour seat has been reserved" << endl;
				fin.write((char *)&p, sizeof(p));//writing to file
			}
		}
		else
			cout << "Ticket not found" << endl;
		fout.close();//closing file
		fin.close();//closing file
		remove("ticketFile.txt");//deleting old file
		rename("ticketFile1.txt", "ticketFile.txt");//renaming new file
	}

	