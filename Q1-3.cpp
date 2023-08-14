//3. Write a C++ Program to swap two numbers without using third variable
//accepts numbers from users.
#include <iostream>

using namespace std;

int main()
{

    int a,b;

    cout<<"swap two numbers without using third variable accepts numbers from users"<<endl;

    cout<<"Enter Value Of A:-";
    cin>>a;

    cout<<"Enter Value Of B:-";
    cin>>b;

    cout<<"Before Swap A= "<<a<<" B="<<b<<endl;

    a=a*b;  // if a=5 , b=10    a=50(5*10)
    b=a/b;  // b=5(50/10)
    a=a/b;  // a=10(50/5)

     cout<<"After Swap A= "<<a<<" B="<<b<<endl;

     return 0;
}


