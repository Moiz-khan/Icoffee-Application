#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include "Employee.h"
#include "Customer.h"

class Shop:public Customer, public Employee
{
	private:
		std::string ShopAdd;		//shop address
		
	public:
		Shop();
		~Shop();
		Shop(std::string Address);
		void Menu();
		void Billing();
		void header();
};
#endif