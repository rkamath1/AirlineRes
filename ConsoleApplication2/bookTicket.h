#pragma once
#include "pch.h"

namespace AirlineRes
{
	class bookTicket //class  for domestic booking
	{
	protected:
		int ticketNumber = 0;		
		char route[20], airline[20], arrivalTime[7], departureTime[7], price[9]; //protected members
		long int doj;
		int choice, src, dest;

	public://public member functions
		void setTicketNo();
		int getTicketNo();
		void flight_detail(); // function declaration and definition for domestic journey
		void displayFlightSched();
		void  select_flight();
	};;
}
