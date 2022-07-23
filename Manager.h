#ifndef mang
#define mang
#include<iostream>
#define SIZE3 2 
#include "Report.h"
#include "Employee.h"
using namespace std;
class Report;

class Manager:public Employee
{
private:
  string managerID;
  string managerEmail;
  Report *reports[SIZE3];
public:
  Manager()
  {
    managerID = "M0000";
    managerEmail = "@gmail.com";
  }

  Manager(string mID, string mEmail, string EID, string name, float salary, int attent, string contact, int hrs, float rate) : Employee(EID, name, salary, attent, contact, hrs, rate)
  {
      managerID = mID;
      managerEmail = mEmail;
  }

  void approveDesign()
  {
    
  } 
  void genReport(Report *rep1,Report *rep2 ){
    reports[0] = rep1;
    reports[1] = rep2;
  }

  void displayinfo() //Display manager details
  {
    cout << "Manager ID: " << managerID << endl;
    cout << "Manager Email: " << managerEmail << endl;
  }

 float calcSalary()
  {
    return(employeeBasicSalary + otHrs * otRate);
  }

  ~Manager()
  {
    cout << "Manager deleted" << endl;
  }
};
#endif