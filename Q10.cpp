#include<iostream>
#include<stdio.h>
using namespace std;
class Matrix
{
   int a[3][3];

   public :
       void accept();
       void display();
       void operator+(Matrix x);
};
void Matrix ::accept()
{
    cout<<"\n\t\t\t\tEnter elements in matrix : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix :: display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix ::operator +(Matrix x)
{
    int m[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j]=a[i][j]+x.a[i][j];
        }
    }
    cout<<"\n\t\t\t\tAddition of matrix is : \n";
    for(int i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{
    Matrix m1,m2;
    m1.accept();
    m2.accept();
    cout<<"\t\t\t\tFirst Matrix is \n";
    m1.display();
    cout<<"\n\t\t\t\tSecond Matrix is \n";
    m2.display();
    m1+m2;
    return 0;
}
