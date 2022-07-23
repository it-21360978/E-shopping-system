#include<iostream>
#include<cstring>
using namespace std;

class GuestUser{
protected:
  char cName[30];
public:
  GuestUser()
  {
    strcpy(cName,"");
  }

  GuestUser(const char pName[])
  {
    strcpy(cName, pName);
  }

  void displayDetails()
  {
    cout << endl;
	  cout << "Guest Name = " << cName << endl;
  }

  void Register()
  {
    
  }

  char searchProduct()
  {
    
  }

  ~GuestUser()
  {
    cout << "Guest user deleted" << endl;
  }

};