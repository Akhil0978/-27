#include<iostream>
#include<stdio.h>
using namespace std;
class Fraction
{
    private:
        long num,den;
    public:
        Fraction(long int n=0, long int d=0)
        {
            num=n;
            den=d;
        }
        friend void operator >>(istream &in ,Fraction &f)
        {
            cout<<"\n\n Numerator   :  ";
            in>>f.num;
            cout<<"\n\n Denominator   :  ";
            in>>f.den;
        }
        Fraction void operator <<(ostream &out, Fraction &f)
        {
            out<<f.num<<"/"<<f.den;
        }
        Fraction operator++()
        {
            ++num;
            ++den;
            return (*this);
        }
        Fraction operator++(int s)
        {
            Fraction temp=*this;
            num++;
            den++;
            return temp;
        }
};
int main()
{
    Fraction f1,f2;
    cout<<"\n  f1    :   ";
    cout<<f1;
    cout<<"\n  f2    :   ";
    cout<<f2;
    cout<<"\n\n Enter first value \n";
    cin>>f1;
    cout<<"\n f1++ :  ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1   :   ";
    ++f1;
    cout<<f1;

    cout<<"\n\n Enter Seond value \n";
    cin>>f2;
    f2=++f1;
    cout<<"\n f2= ++f1";
    cout<<"\n f1    :    ";
    cout<<f1;
    cout<<"\n f2   :    ";
    cout<<f2;
    f2=f1++;

    cout<<"\n \n f2= f1++";
    cout<<"\n f1   :  " ;
    cout<<f1;
    cout<<"\n f2  :  ";
    cout<<f2;

    return 0;
}


