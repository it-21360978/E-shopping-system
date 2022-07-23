#ifndef ord
#define ord
#include "Shopper.h"
#include<iostream>
#include<cstring>
using namespace std;
class Shopper;

class Order
{
private:
	char orderID[15];
	

public:
  Order(){
    strcpy(orderID,"orid123");
  }
  void assignOrderdetails(const char oID[])
  {
	  strcpy(orderID, oID);
  }

	void displayOrderDetails()
  {
    cout << "Order ID: " << orderID << endl;
  }

  
};
#endif