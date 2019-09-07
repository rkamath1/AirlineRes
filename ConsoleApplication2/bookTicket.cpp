#include "pch.h"
#include "bookTicket.h"
#include <iostream>

using namespace std;

namespace AirlineRes
{
	int defaultTicketNo = 1000; 
	
	void bookTicket::setTicketNo() //Set ticket number
	{
		defaultTicketNo++; // increment variable
		ticketNumber = defaultTicketNo;
	}

	int bookTicket::getTicketNo()//function to get ticket number
	{
		return ticketNumber;
	}
	void bookTicket::displayFlightSched()
	{
		cout <<  endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
		cout << "                       AVAILABLE FLIGHT SCHEDULES" << endl;
		cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
		cout << "Route:       \tAirline:       \tDeparture:\tArrival:\tSchedule:\n";
		cout << "\1.SEA to LAX\tDelta Air      \t10:00\t\t13:00\t\tDaily\n";
		cout << "\2.SEA to SFO\tUnited Air     \t14:00\t\t16:30\t\tDaily\n";
		cout << "\3.SEA to NYC\tSouth West Air \t18:00\t\t23:50\t\tDaily\n";
		cout << "\4.SEA to DBX\tEmirates       \t08:05\t\t22:35\t\tDaily\n";
		cout << "\5.SEA to LON\tBritish Air    \t10:00\t\t12:10\t\tDaily\n";
		cout << "\6.SEA to FRA\tLufthansa      \t12:00\t\t21:40\t\tDaily\n";
		cout << "\1.SEA to SIN\tSingapore Air  \t11:30\t\t22:25\t\tDaily\n";
	}

	 void bookTicket::flight_detail() // function declaration and definition for flight detail
	{
		char selection;

		cout << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "           Select a Route No. to see details" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "Route Desc: \tRoute No.\tAirline:     \tDeparture:\tArrival:\n";
		cout << "\1.SEA to LAX\t     (1)\tDelta Air      \t10:00\t\t13:00\n";
		cout << "\2.SEA to SFO\t     (2)\tUnited Air     \t14:00\t\t16:30\n";
		cout << "\3.SEA to NYC\t     (3)\tSouth West Air \t18:00\t\t23:50\n";
		cout << "\4.SEA to DBX\t     (4)\tEmirates       \t08:05\t\t22:35\n";
		cout << "\5.SEA to LON\t     (5)\tBritish Air    \t10:00\t\t12:10\n";
		cout << "\6.SEA to FRA\t     (6)\tLufthansa      \t12:00\t\t21:40\n";
		cout << "\1.SEA to SIN\t     (7)\tSingapore Air  \t11:30\t\t22:25\n";
		cout << "\n                  Enter 0 to Exit\n";
		cout << endl;
		cout << "\n Please enter your choice:";
		cout << "---> ";

		cin >> selection;
		int sel = (int)selection - (int)48;

		switch (sel) // switch case
		{
		case 0:
			cout << "You Have Exited " << endl;
			break;
		case 1://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to LAX" << endl;
			cout << "Airline: Delta Air" << endl;
			cout << "Departure Time: 10:00" << endl;
			cout << "Arrival Time: 13:00" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 3Hrs 0Min" << endl;
			cout << "Price: $600.00 incl. taxes" << endl;
			cout << "Flight Type: Domestic" << endl;
			break;
		case 2://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to SFO" << endl;
			cout << "Airline: United Air" << endl;
			cout << "Departure Time: 14:00" << endl;
			cout << "Arrival Time: 16:30" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 2Hrs 30Min" << endl;
			cout << "Price: $650.00 incl. taxes" << endl;
			cout << "Flight Type: Domestic" << endl;
			break;
		case 3://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to NYC" << endl;
			cout << "Airline: South West Air" << endl;
			cout << "Departure Time: 18:00" << endl;
			cout << "Arrival Time: 23:50" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 5Hrs 50Min" << endl;
			cout << "Price: $700.00 incl. taxes" << endl;
			cout << "Flight Type: Domestic" << endl;
			break;
		case 4://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to DBX" << endl;
			cout << "Airline: Emirates" << endl;
			cout << "Departure Time: 08:05" << endl;
			cout << "Arrival Time: 22:35" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 14Hrs 30Min" << endl;
			cout << "Price: $1800.00 incl. taxes" << endl;
			cout << "Flight Type: International" << endl;
			break;
		case 5://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to LON" << endl;
			cout << "Airline: British Air" << endl;
			cout << "Departure Time: 10:00" << endl;
			cout << "Arrival Time: 12:10" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 9Hrs 10Min" << endl;
			cout << "Price: $1500.00 incl. taxes" << endl;
			cout << "Flight Type: International" << endl;
			break;
		case 6://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to FRA" << endl;
			cout << "Airline: Lifthansa" << endl;
			cout << "Departure Time: 12:00" << endl;
			cout << "Arrival Time: 21:40" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 9Hrs 40Min" << endl;
			cout << "Price: $1550.00 incl. taxes" << endl;
			cout << "Flight Type: International" << endl;
			break;
		case 7://condition
			cout << "\nDetails for Route selected:" << endl;
			cout << "Route: SEA to SIN" << endl;
			cout << "Airline: Singapore Air" << endl;
			cout << "Departure Time: 11:30" << endl;
			cout << "Arrival Time: 22:25" << endl;
			cout << "Category: Refundable" << endl;
			cout << "Connection Type: Direct" << endl;
			cout << "Duration of Journey: 12Hrs 55Min" << endl;
			cout << "Price: $1700.00 incl. taxes" << endl;
			cout << "Flight Type: International" << endl;
			break;
		default://condition
			cout << "Wrong input entered.\nTry again" << endl;
			return flight_detail();
		}
	 }

	int bookTicket::select_flight() //function declaration and definition for selecting flight
	{
		char selection;

		cout << endl;
		cout << "********************************************************************************************" << endl;
		cout << "***                            WELCOME TO TICKET BOOKING SYSTEM                          ***" << endl;
		cout << "***                              Select a Route No. to Begin                             ***" << endl;
		cout << "********************************************************************************************" << endl;
		cout << "Route Desc: \tRoute No.\tAirline:     \tDeparture:\tArrival:\tPrice:\n";
		cout << "\1.SEA to LAX\t     (1)\tDelta Air      \t10:00\t\t13:00\t\t$600.00\n";
		cout << "\2.SEA to SFO\t     (2)\tUnited Air     \t14:00\t\t16:30\t\t$650.00\n";
		cout << "\3.SEA to NYC\t     (3)\tSouth West Air \t18:00\t\t23:50\t\t$700.00\n";
		cout << "\4.SEA to DBX\t     (4)\tEmirates       \t08:05\t\t22:35\t\t$1800.00\n";
		cout << "\5.SEA to LON\t     (5)\tBritish Air    \t10:00\t\t12:10\t\t$1500.00\n";
		cout << "\6.SEA to FRA\t     (6)\tLufthansa      \t12:00\t\t21:40\t\t$1550.00\n";
		cout << "\1.SEA to SIN\t     (7)\tSingapore Air  \t11:30\t\t22:25\t\t$1700.00\n";
		cout << "\n                  Enter 0 to Exit\n";
		cout << endl;
		cout << "\n Please enter your choice:";
		cout << "---> ";

		cin >> selection;
		int sel = (int)selection - (int)48;
				
		switch (sel) // switch case
		{
		case 0:
			cout << "You Have Exited Ticket Booking System" << endl;
			break;
		case 1://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:       \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to LAX\tDelta Air      \t10:00\t\t13:00\t\t$600.00\n";
			strcpy_s(airline, "Delta Air");//copy to string
			strcpy_s(route, "SEA to LAX");//copy to string
			strcpy_s(departureTime, "10:00"); //copy to string
			strcpy_s(arrivalTime, "13:00");// copy to string
			strcpy_s(price, "$600.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 2://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:       \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to SFO\tUnited Air     \t14:00\t\t16:30\t\t$650.00\n";
			strcpy_s(airline, "United Air");//copy to string
			strcpy_s(route, "SEA to SFO");//copy to string
			strcpy_s(departureTime, "14:00"); //copy to string
			strcpy_s(arrivalTime, "16:30");// copy to string
			strcpy_s(price, "$650.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 3://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:       \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to NYC\tSouth West Air \t18:00\t\t23:50\t\t$700.00\n";
			strcpy_s(airline, "South West Air");//copy to string
			strcpy_s(route, "SEA to NYC");//copy to string
			strcpy_s(departureTime, "18:00"); //copy to string
			strcpy_s(arrivalTime, "23:50");// copy to string
			strcpy_s(price, "$700.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 4://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:  \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to DBX\tEmirates  \t08:05\t\t22:35\t\t$1800.00\n";
			strcpy_s(airline, "Emirates");//copy to string
			strcpy_s(route, "SEA to DBX");//copy to string
			strcpy_s(departureTime, "08:05"); //copy to string
			strcpy_s(arrivalTime, "22:35");// copy to string
			strcpy_s(price, "$1800.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 5://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:    \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to LON\tBritish Air \t10:00\t\t12:10\t\t$1500.00\n";
			strcpy_s(airline, "British Air");//copy to string
			strcpy_s(route, "SEA to LON");//copy to string
			strcpy_s(departureTime, "10:00"); //copy to string
			strcpy_s(arrivalTime, "12:10");// copy to string
			strcpy_s(price, "$1500.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 6://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:  \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to FRA\tLufthansa \t12:00\t\t21:40\t\t$1550.00\n";
			strcpy_s(airline, "Lufthansa");//copy to string
			strcpy_s(route, "SEA to FRA");//copy to string
			strcpy_s(departureTime, "12:00"); //copy to string
			strcpy_s(arrivalTime, "21:40");// copy to string
			strcpy_s(price, "$1550.00");// copy to string
			cout << "\nEnter Date Of Journey(MM DD YYYY)." << "Please enter a valid date." << endl;
			cin >> mm >> dd >> yyyy;
			setTicketNo();
			break;
		case 7://condition
			cout << "\nRoute selected:" << endl;
			cout << "Route:    \tAirline:       \tDeparture:\tArrival:\tPrice:\n";
			cout << "SEA to SIN\tSingapore Air \t11:30\t\t22:25\t\t$1700.00\n";
			strcpy_s(airline, "Singapore Air");//copy to string
			strcpy_s(route, "SEA to SIN");//copy to string
			strcpy_s(departureTime, "11:30"); //copy to string
			strcpy_s(arrivalTime, "22:25");// copy to string
			strcpy_s(price, "$1700.00");// copy to string
			break;
		default://condition
			cout << "Wrong input entered.\nTry again" << endl;
			return select_flight();
		}
		return sel;
	}

	
}