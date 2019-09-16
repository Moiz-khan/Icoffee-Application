#ifndef COFFEE_H
#define COFFEE_H
#include <iostream>
#include <string>

class Customer
{
	private:
		std::string CustName;
		long long CustCnic;
		long long CustNumber;

	public:
		Customer();
		~Customer();
		Customer(std::string name, long long cnic, long long CellNumber);
		std::string get_CustName();
		long long get_CustCnic();
		void CustomerDetail();
		std::string CustomerName();
};
#endif