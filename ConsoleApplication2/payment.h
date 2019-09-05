#pragma once
#include "pch.h"


namespace AirlineRes
{
	class payment//class for payment
	{
		protected://protected members
			long
				int choice1, bank, card, date, cvv;
			char password[20], user_id[10];
		public://public members functions
			void pay_detail();

	};
}
