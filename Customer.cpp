#include "Customer.h"

Customer::Customer():CustName("Noman Khan"), CustCnic(4301578416), CustNumber(123456789){
	
}

Customer::~Customer(){
	
}

Customer::Customer(std::string name, long long cnic,long long CellNumber): CustName(name), CustCnic(cnic), CustNumber(CellNumber){
	
}