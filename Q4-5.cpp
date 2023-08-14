// 20. Write a Program using Dynamic Constructors.

#include <iostream>
using namespace std;
class DynCos
{
int * p;
public:
DynCos()
{
p=new int;
*p=10;
}
DynCos(int v)
{
p=new int;
*p=v;
}
int disp()
{
return(*p);
}
};
int main()

{

DynCos d1, d2(9);
cout<<"The value of object d1's p is: ";
cout<<d1.disp()<< endl;
cout<<"The value of object d2's p is:"<<d2.disp();
return 0;
}
