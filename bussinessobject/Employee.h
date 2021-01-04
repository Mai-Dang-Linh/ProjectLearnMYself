#ifndef Project_Bussinessobject_Employee_H_
#define Project_Bussinessobject_Employee_H_

#include <string>
using namespace std;
class Employee{
private:
    string FName;
    string MInit;
    string LName;
    long SSN;
    string BDate;
    string Address;
    char Sex;
    long Salary;
    long SuperSSN;
    int DNO;
public:
    Employee();
    Employee(string fName, string mInit,string LName,long ssn,string bDate,string address,char sex,long salary,long superSSN, int dno);


};
#endif