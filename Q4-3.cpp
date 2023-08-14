// 18. Write a Program using Constructors with default arguments and finding maximum from 2
//numbers.

#include<iostream>
using namespace std;
class maximum
{
public: // parameterized constructor with default argument
maximum (int a, int b = 10)
{
cout << "Value of a: "<<a<<" Value of b: "<<b<<endl;
if ( a > b )
cout << "a is max" ;
else
cout << "b is max" ;
}
};
int main()
{
maximum m1(5);
return 0;
}
