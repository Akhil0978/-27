#include<iostream>
using namespace std ;
class Complex
{
       int x,y;

   public :
       void accept()
       {
           cout<<"\nEnter two complex no. :";
           cin>>x>>y;
       }
       friend Complex operator+(Complex c1,Complex c2);

       void display()
       {
           cout<<x<<"+"<<y<<"(i)"<<endl;
       }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.x=c1.x+c2.x;
    c.y=c1.y+c2.y;
    return c;
}
int main()
{
    Complex c1, c2 ,c3;
    c1.accept();
    c2.accept();

    c3=c1+c2;
    cout<<"Entered values : \n";
    cout<<"\t";
    c1.display();
    cout<<"\t";
    c2.display();
    cout<<"Addition of two complex no. : \n";
    c3.display();
    return 0;
}
