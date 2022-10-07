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
       friend Complex operator-(Complex c1,Complex c2);
       friend Complex operator*(Complex c1,Complex c2);

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
Complex operator-(Complex c1, Complex c2)
{
    Complex c;
    c.x=c1.x-c2.x;
    c.y=c1.y-c2.y;
    return c;
}
Complex operator*(Complex c1, Complex c2)
{
    Complex c;
    c.x=c1.x*c2.x-c1.y-c2.y;
    c.y=c1.x*c2.y+c1.y*c2.x;
    return c;
}
int main()
{
    Complex c1, c2 ,c3,c4,c5;
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

    cout<<"\n\nSubtraction of two complex no. is : \n";
    c4=c1-c2;
    c4.display();

    cout<<"\n\nMultiplication of two complex no. is : \n";
    c5=c1*c2;
    c5.display();
    return 0;
}
