#include<iostream>
#include<stdio.h>
using namespace std;
class Time
{
   private :
        int hr,min,sec;

   public :
       Time()
       {
           hr=min=sec=0;
       }
       friend int operator >>(istream &input,Time&t)
       {
           cout<<"\n Enter hours : ";
           input>>t.hr;
           cout<<"\n Enter minutes : ";
           input>>t.min;
           cout<<"\n Enter seconds: ";
           input>>t.sec;
           t.min=t.min+t.min/60;
           t.sec%=60;
           t.hr=t.hr+t.min/60;
           t.min%=60;
           if(t.hr>=25)
            return 1;
           else
            return 0;
       }
       friend void operator<<(ostream &Output ,Time &t)
       {
           Output<<"\n Hours: "<<t.hr;
           Output<<"\n Minutes: "<<t.min;
           Output<<"\n Seconds: "<<t.sec;
       }
       int operator ==(Time t1)
       {
           int tot=hr*3600+min*60+sec;
           int tot1=t1.hr*3600+t1.min*60+t1.sec;
           if(tot==tot1)

               return 1;
               else
                return 0;

       }
       ~Time(){}
};
int main()
{
    Time t1,t2;
    cout<<"\nEnter first time : ";
    cout<<"\n------------";
    if(cin>>t1)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\n First Time ";
    cout<<t1;
    cout<<"\n\n Enter Second time : ";
    cout<<"\n---------------";
    if(cin>>t2)
    {
        cout<<"\n Invalid Time";
    }
    cout<<"\n Second Time";
    cout<<t2;
    if(t1==t2)
    {
        cout<<"\n\nTime are same";
    }
    else
    {
        cout<<"\n\nTime are different ";
    }
    return 0;
}
