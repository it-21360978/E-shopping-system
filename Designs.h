#include<iostream>
#include "Designer.h"

using namespace std;

class Designs{
private: 
  string designID;
  string designName;
  string designColor;
  string designSex;
  Designer *dsgnr;
public:
  Designs(){
    
  }

  void assignDetails(string dID, string dName, string dColor, string dSex)
  {
    designID = dID;
    designName = dName;
    designColor = dColor;
    designSex = dSex;
  }

  void displayDsgnDetail() //Display the design details
  {
    cout << "Design ID: " << designID << endl;
    cout << "Design Name" << designName << endl;
    cout << "Design Color" << designColor << endl;
    cout << "Design Sex" << designSex << endl;
    dsgnr->displayRinfo();
  }

  void addDesigns(Designer *dsner)
  {
    dsgnr = dsner;
  }

  ~Designs()
  {
    cout << "Designs deleted" << endl;
  }
};