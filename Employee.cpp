#include "Employee.h"

Employee::Employee():EmpName("hammad khan"), EmpCnic(4230183332441), EmpAddress("22-E khayaban-e-jami clifton"),CellNo(1345678915){
	
}

Employee::~Employee(){
	
}

Employee::Employee(std::string E_Name, long long E_cnic, long long E_cell, std::string E_add):EmpName(E_Name), EmpCnic(E_cnic), EmpAddress(E_add), CellNo(E_cell){
	
}