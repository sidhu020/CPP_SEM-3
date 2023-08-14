//16. Write a Program to pointer to Member Function.

#include<iostream>
using namespace std;
class H
{
public:
int a;
void print(int b)
{
cout<<"The value of b is:= "<< b <<endl;
}
};
int main()
{

H h1;
// Declare pointer to data member
int H::*ptr = & H::a;
h1.*ptr = 10;
cout<<"The value of a is:= "<<h1.*ptr<<endl;
// Declare pointer to member function
void(H::*ptr1)(int)=& H::print;
// Call Member function
(h1.*ptr1)(20);
return 0;;
}
