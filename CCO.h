#include "Employee.h"
#include "Feedback.h"
#include <cstring>
#define SIZE1 2
using namespace std;

class CCO : public Employee{
  private:
    string ccoID;
    string ccoEmail;
    Feedback *feedback[SIZE1];
  public:
    CCO(){
      ccoID = "C000";
      ccoEmail = "@gmail.com";     
    }

    CCO(string COID, string email,string EID, string name, float salary, int attent, string contact, int hrs, float rate):Employee(EID,name,salary,attent,contact,hrs,rate)
		{
      ccoID = COID;
      ccoEmail = email;
    }
    void displayinfo(){
      cout << "CCO ID : "<< ccoID<<endl;
      cout << "CCO Email : "<<ccoEmail << endl<<endl;
      for(int i=0; i<SIZE1; i++){
        feedback[i]->displayFeedback();
      }
    }
    void reviewFeedback(Feedback *feed1,Feedback *feed2){
      feedback[0] = feed1; 
      feedback[1] = feed2;
    }
    float calcSalary(){
      return(employeeBasicSalary + otHrs * otRate);
    }
    ~CCO(){
      cout << "CCO Deleted " <<endl;
    }
    
};