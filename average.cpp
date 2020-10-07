#include<iostream>
#include<string>
using namespace std;
class GradeBook
{

private:
string name;

public:
string courseName;
GradeBook(string)
{
    setCourseName(name);
}
void setCourseName(string name)
{
    if(courseName.length()<=25)
    courseName=name;
    else if(courseName.length()>25)
    {
        courseName.substr(0,25);
       // courseName=name;
        cout<<"name"<<name<<"exceeds the limit"<<endl;
    }

}
string getCourseName()
{
    return courseName;
}
void GradeBookAverage()
{  
     int average=0;
 int total=0;
int gradecounter=1;
int grades;

    while(gradecounter<=10)
    {
        cout<<"enter grades"<<endl;
        cin>>grades;
         total=total+grades;
         gradecounter=gradecounter+1;
}
       average=total/10;
       cout<<"your total is ="<<total<<endl;
       cout<<"your average ="<<average;

}
void Display()
{
    cout<<"welcome to the grade book for"<<getCourseName()<<endl;
}

};
int main()
{
    //int grades;
    GradeBook g1("introduction to computer science");
    //cout<<"enter grades"<<endl;
    //cin>>grades;
    g1.Display();
    g1.GradeBookAverage();

   
    
    
}
    
