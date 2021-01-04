#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(){}
Employee::Employee(string fName, string mInit,string lName,long ssn,string bDate,string address,char sex,long salary,long superSSN, int dno)
{
    this-> FName = fName;
    this-> MInit = mInit;
    this-> LName = lName;
    this-> SSN = ssn;
    this-> BDate = bDate;
    this-> Address = address;
    this-> Sex = sex;
    this-> Salary = salary;
    this-> SuperSSN = superSSN;
    this-> DNO = dno;
}