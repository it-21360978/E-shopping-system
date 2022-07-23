#include <iostream>
#include <cstring>
#include "Order.h"
#include "Shopper.h"
using namespace std;

class Payment
{
private:
	char paymentID[10];
	char paymentMethod[10];
	float total;
	char paymentDate[10];
	shopper* s1;
	Order * o1;



public:
  Payment()
  {
    strcpy(paymentID, "P455");
    strcpy(paymentMethod, "Cash");
    total = 0000.0;
    strcpy(paymentDate, "4565");
  }
	Payment(const char pID[],const char PMet[], float pTot,const char pDate[])
{
	strcpy(paymentID,pID);
	strcpy(paymentMethod,PMet);
	total = pTot;
	strcpy(paymentDate,pDate);
}
void assignPaymentDetails()
{

	strcpy(paymentID, "");
	strcpy(paymentMethod, "");
	total = 0.0;
	strcpy(paymentDate, "");

}
void displayPaymentDetails()
{
	cout << "Payment ID: " << paymentID << endl;
	cout << "Payment Method: " << paymentMethod << endl;
	cout << "Total: " << total << endl;
	cout << "Payment Date: " << paymentDate << endl;

}
void validateDetails()
{

}
float calTotal()
{

}
void addProduct(Order *or1)
  {
  	o1 = or1;
  }
  void addShopper(shopper *sho1)
  {
    s1 = sho1;
  }
		
};