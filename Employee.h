#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

class Employee
{
	private:
		std::string EmpName;
		long long EmpCnic;
		std::string EmpAddress;
		long long CellNo;
		
	public:
		Employee();
		~Employee();
		Employee(std::string E_Name, long long E_cnic, long long E_cell, std::string E_add);
		std::string get_EmpName();
		long long get_EmpCnic();
		std::string get_EmpAddress();
		long long get_CellNo();
		void EmployeeDetail();
		std::string user();
};
#endif