#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
string name;
int salary;
int annual_salary;
public:
Employee();
Employee(string nm,int sal)
{
    name=nm;
    salary=sal;
}
void setEmployeeName(string nm )
{
    name=nm;
    // if(name.length()<25)
    // name=nm;
    // if(name.length()>25)
    // {
    // name=nm.substr(0,25);
    // }
    
}
string getEmployeeName()
{
    return name;
}
void setSalary(int sal)
{
    if(salary>0)
    salary=sal;
    if(salary<0)
    {
        cout<<"invalid amount";
    }
    

}
int  getSalary()
{
return salary;
}

};
int main()
{
    
    Employee e1("fozia",20000);
    cout<<"name is ="<<e1.getEmployeeName()<<endl;
    cout<<"monthly salary is="<<e1.getSalary();
    cout<<"After 10 percent increment in salary:"<<endl;
 int incrementedSalary1=e1.getSalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 e1.setSalary(incrementedSalary1);
 cout<< "Employee1's monthly salary is: "<<e1.getSalary()<< " and annual salary is: "<< e1.getSalary()*12<<endl<<endl;

    
    
}