#include<iostream>
#include<stdio.h>
using namespace std;
class Matrix
{
   int a[3][3];

   public :
       void accept();
       void display();
       void operator-();
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
    cout<<"\n\n\t\t\t\tMatrix is : \n";
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
void Matrix :: operator-()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
    return 0;
}
