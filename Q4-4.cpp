// 19. Write a Program using copy constructors.

#include <iostream>
using namespace std;
class test
{
int id ;
public :
test ()
{
id = 100 ;
}
test (test & x)
{
id = x.id ;
}
void display ()
{
cout << id << endl ;
}
};
int main()
{
test t1 ;
test t2 (t1) ; //copies the value of t1 into t2
test t3 = t1 ; //copies the value of t1 into t3
cout << "id of t1:" ;
t1.display () ;
cout << "id of t2:" ;
t2.display () ;
cout << "id of t3:" ;
t3.display () ;
return 0;
}
