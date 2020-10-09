#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class GradeBook
{

public:
GradeBook();
GradeBook( string);//constructor
void setCourseName(string);
string getName();
void display();
void classAverage();
private:
string courseName;
};


GradeBook::GradeBook(string name)
{
    setCourseName(name);
}    



void GradeBook::setCourseName(string name)
{

if(name.length()<=25)
   courseName=name;
   else 

   {
courseName=name.substr(0,25);
cout<<"enter valid name of course should not exceeds 25 characters"<<endl;
   }
}
string GradeBook::getName()

{
    return courseName;
}

void GradeBook::classAverage()
{
double total;
double gradeCounter=0;
double grade;
double average;
cout<<"please enter your grades"<<endl;
cin>>grade;
while(grade != -1)
{
    total=total+grade;
    gradeCounter=gradeCounter+1;
    cout<<"please enter your grades"<<endl;
cin>>grade;
}
if(grade!=0)
{average=static_cast<double>(total)/gradeCounter;
cout<<"class average is ="<<setprecision(2)<<fixed<<average;}
else
{
    cout<<"no grades were entered";
}

}
void GradeBook::display()
{
    cout<<"welcome to the course for"<<getName();
}
int main()
{
    
    GradeBook g1("introduction to cs\n")
    ;
    g1.display();
    g1.classAverage();  
}
