
/*
	Srividya Josyula(50230278)

*/





#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char customer;
	int n, acc_no, cust_code, connections;
	double bill_processing, basic_service_fee, premium_channel_cost;
	cout << "Enter r for resendential customer or b for business customer: ";
	cin >> customer;
	if (customer != 'r' && customer!='b')
    {
		cout << "Invalid Customer type. Please enter a valid customer type again.";
	}
	else
	{
		cout << "Enter account number: ";
		cin >> acc_no;
		cout << "Enter customer code: ";
		cin >> cust_code;
		cout << "Enter no of premium channels: ";
		cin >> n;
		if (customer == 'r')
		{
			bill_processing = 4.50;
			basic_service_fee = 20.50;
			premium_channel_cost = n * 7.50;
			cout << "Account number: " << acc_no << endl;
			cout << "Total billing amount: $" << bill_processing + basic_service_fee + premium_channel_cost << endl;

		}
		else if (customer == 'b')
		{
			cout << "Enter no of conections: ";
			cin >> connections;
			bill_processing = 15.00;
			if (connections <= 10)
			{
				basic_service_fee = 75;
			}
			else
			{
				basic_service_fee = 75 + ((connections - 10) * 5);
			}
			premium_channel_cost = n * 50;
			cout << "Account number: " << acc_no << endl;
			cout << "Total billing amount: $" << bill_processing + basic_service_fee + premium_channel_cost << endl;
		}
	}
	return 0;
     
}
