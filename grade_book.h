//#ifndefine <GRADE_BOOK_H>
//#include<GRADE_BOOK_H>
#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
private:
string coursename;
public:
void setData(string name)
{
    if(name.length()<=25)
    {
    coursename=name;

    }
    if(name.length()>25)
    {
         coursename=name.substr(0,25);
   
    }
}
string getData()
{
    return coursename;
}
GradeBook(string name)
{
    setData(name);
}
};
//#ifend