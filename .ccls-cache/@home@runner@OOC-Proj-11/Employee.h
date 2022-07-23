#ifndef EMP
#define EMP
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
protected:
	string employeeID;
	string employeeName;
	float employeeBasicSalary;
	int employeeAttendance;
  string employeeContact;
	int otHrs;
	float otRate;

public:
	Employee() {
		employeeID =  "E000";
		employeeName = "aaa";
		employeeBasicSalary = 0.0;
		employeeAttendance = 0;
    employeeContact = "011";
		otHrs = 0;
		otRate = 0.0;
	}

	Employee(string EID, string name, float salary, int attent, string contact, int hrs, float rate) {
		employeeID = EID;
		employeeName = name;
		employeeBasicSalary = salary;
		employeeAttendance = attent;
    employeeContact = contact;
		otHrs = hrs;
		otRate = rate;
	}

	virtual float calcSalary() {
		return 0;
	}

	virtual void displayinfo() {}

	void displayEmpDetails() {
		cout << "Employee ID : " << employeeID <<endl;
		cout << "Employee name : " << employeeName << endl;
		cout << "Employee Salary : " << employeeBasicSalary << endl;
		cout << "Attendance: " << employeeAttendance << endl;
    cout << "Employee Contact : " << employeeContact << endl;
		cout << "OT houres : " << otHrs << endl;
		cout << "OT Rate : " << otRate << endl<<endl;
		displayinfo();
	}

	~Employee() {
		cout << "Employee deleted " << endl;
	}
};
#endif
