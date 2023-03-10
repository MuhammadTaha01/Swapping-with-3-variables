#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter your first number= ";
    cin>>a;

    cout<<"Enter your second number= ";
    cin>>b;

    cout<<"The input values are "<<a<<" and "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Values after swapping are "<<a<<" and "<<b<<endl;
    return 0;
}
