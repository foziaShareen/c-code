#include<iostream>
#include<string>
using namespace std;


    class Account{
        private:
    int initial;
    int balance;
    int credit;
   int withdraw;

    public:
  
   
    Account()
    {
        initial=0;
    }
    Account(int x)
    {
        setAccount(x);
    }
    void setAccount(int x)
    {
        initial=x;
if(initial>=0)
        {
          initial=x;
          balance=initial;
        }
        else 
         if(initial<0)
        {
          initial=0;
          cout<<"invalid"<<endl;
        }
    }
   
    int getAccount()
    {
        return initial;
    }
    
    void setCredit(int y)
    {
    
       credit=y;
        balance=balance+credit;
    }
    int getCredit()
    {
        return credit;
    }
    void setwithdraw(int z)
    {
        
        if(withdraw>balance)
        {
            cout<<"your amount is greater than your balance"<<balance<<endl;

        }
        else
        
            {
              balance=balance-withdraw;  
            }
        
        

    }
    int getWithdraw()
    {
        return balance;
    }
    };
int main()
{
  

       Account acc(200);

cout<<"your initial value is ="<<acc.getAccount()<<endl;
cout<<"enter credit";
acc.setCredit(4000);
cout<<acc.getCredit()<<endl;
acc.setwithdraw(500);
cout<<acc.getWithdraw()<<endl;
}