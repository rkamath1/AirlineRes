#pragma once
#include "pch.h"
#include<fstream>
#include<string.h>
#include <cstdlib>
#include "bookTicket.h"
#include "payment.h"


namespace AirlineRes
{
	class passenger : public bookTicket//class passenger publicly inherits from class bookTicket
	{
		private://protected members
			char f_name[20], l_name[20], email[50], city[25], state[2], s1[5], s2[5], s3[5], zip[6];
			int age, gender, v1, v2, v3;
			long int contact_no, z1;
			int seatNumber = 0;
			
		public://public member functions
			void p_detail();
			void setSeatNumber(int seatNo);
			int getSeatNumber();
			int gender_check();
			void dispTicketInfo();
			void dispPassengerInfo();
			int reserve_a_seat();
			int getTicket();
	};
}