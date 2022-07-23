#include "Manager.h"
#include <iostream>
#include <cstring>
using namespace std;
class Manager;

class Report
{
private:
	char reportID[10];
	char reportType[10];
	Manager *man;

public:
  Report(){
    strcpy(reportID, "rID");
	  strcpy(reportType, "type");
  }
  
  void assignRpDetails(const char rID[], const char rType[])
  {
	  strcpy(reportID, rID);
	  strcpy(reportType, rType);
  }
  void displayRpDetails()
  {
	  cout << "Report ID: " << reportID << endl;
	  cout << "Report type: " << reportType << endl;
    }
  void addManger(Manager *manag){
    man = manag;
  }
};
