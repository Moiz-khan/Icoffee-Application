#include "Coffee.h"
#include <iostream>

Coffee::Coffee(){
	
}

Coffee::~Coffee(){
	
}

void Coffee::Menu(){
		std::cout << "\tS.No  Menu \t \t Price" << std::endl;
		std::cout << "\t1. Cappuccino \t rs:500" << "\n\t2. Espresso \t rs:450"  << "\n\t3. Flat White \t rs:450" << "\n\t4. Long Black \t rs:450"
		<< "\n\t5. Macchiato \t rs:450" << std::endl;
}