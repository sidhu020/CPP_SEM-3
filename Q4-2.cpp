// 17. Write a Program using default construction.

#include <iostream>
using namespace std;
class test
{
int m, n ;
public :
test () // default constructor
{
m = 0 ; // when object is created the
n = 0 ; // value of m and n is 0
}
void display()
{
cout << "m=" << m << endl;
cout << "n=" << n ;
}
};
int main()
{
test t1 ; //object t1 is created
// default constructor invoked
t1.display () ;
return 0;
}
