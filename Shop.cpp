#include "Shop.h"
#include "Employee.h"
#include "Customer.h"

int item = 0;

Shop::Shop(): ShopAdd("22/6 shop No:08, Clifton"){
}

Shop::~Shop(){
}

Shop::Shop(std::string Address): ShopAdd(Address){
	
}

void Shop::header(){

		std::cout << "\t==========================================================" << std::endl;
		std::cout << "\t \t \t \tiCoffee" << std::endl;
		std::cout << "\t==========================================================" << std::endl;
		Menu();
}

void Shop::Menu(){
		std::cout << "\tS.No \tMenu \t \t\t Price" << std::endl;
		std::cout << "\t1.\tCappuccino \t\t rs:500" << "\n\t2.\tEspresso \t\t rs:450"  << "\n\t3.\tFlat White \t\t rs:450" << "\n\t4.\tLong Black \t\t rs:450"
		<< "\n\t5.\tMacchiato \t\t rs:450" << std::endl;
		
		std::cout << "Enter Items No: " ;
		std::cin >> item;
}