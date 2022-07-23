#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

class Technician : public Employee
{
private:
char technicianID[10];
char technicianEmail[20];

public:
Technician(){
  strcpy(technicianID,"");
  strcpy(technicianEmail ,"");
}
Technician(const char TID[], const char email[],string EID, string name, float salary, int attent, string contact, int hrs, float rate):Employee(EID,name,salary,attent,contact,hrs,rate)
{
  strcpy(technicianID, TID);
  strcpy(technicianEmail , email);
}
void displayinfo(){
  cout << endl;
	cout << "Technician ID = " << technicianID << endl;
	cout << "Technician Email = " << technicianEmail << endl<<endl; 
}
float calcSalary(){
      return(employeeBasicSalary + otHrs * otRate);
    }
~Technician(){
  cout << "Technician Deleted"<<endl;
}
};