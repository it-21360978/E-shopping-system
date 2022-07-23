#ifndef feed
#define feed
#include <cstring>
#include "RegisteredCustomer.h"
#include <iostream>
#define SIZE7 2
using namespace std;

class Feedback{
  private:
    char feedbackID[4];
    char feedbackDescripton[300];
    char feedbackDate[12];
    RegisteredCustomer *Rec;
  public:
    void assginFeedback(const char FID[],const char Description[],const char date[]){
      strcpy(feedbackID,FID);
      strcpy(feedbackDescripton,Description);
      strcpy(feedbackDate, date);
    }
    void addFeedback(RegisteredCustomer *rc){
      Rec = rc;
    }
void displayFeedback(){
      Rec->displayRDetails();
      cout << "Feedback ID: " << feedbackID << endl;
      cout << "Feedback Descripton: " << feedbackDescripton << endl;
      cout<<"Feedback date: " << feedbackDate << endl<<endl;
}
};
#endif