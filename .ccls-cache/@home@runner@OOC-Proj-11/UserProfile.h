#include <cstring>
#include <iostream>
using namespace std;

class UserProfile
{
private:
char profileID[10];
char profileUserName[30];
char profilePassword[20];
int cardNum;

public:
UserProfile(){
  strcpy(profileID ,"");
  strcpy(profileUserName , "");
  strcpy(profilePassword , "");
  cardNum = 0;
}
void assignDetails(const char pID[], const char pName[], const char pPW[], int cNum){
  strcpy(profileID, pID);
  strcpy(profileUserName, pName);
  strcpy(profilePassword, pPW);
  cardNum = cNum;
}

void updateDetails();

void displayDetails(){
	cout << "Profile ID: " << profileID << endl;
	cout << "profile username: " << profileUserName << endl;
	cout << "profile password: " << profilePassword << endl;
  cout << "card number: "<< cardNum << endl<<endl;
}
~UserProfile(){
  cout << "User Profile deleted" << endl;
}
};