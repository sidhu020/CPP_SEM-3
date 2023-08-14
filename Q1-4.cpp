// 4. Write a C++ Program check Give number is odd or even.

#include<iostream>
using namespace std;

int main()

{
    int num;

    cout<<"Enter The Number To Cheak it is Even Or Odd :- ";
    cin>>num;

    if(num%2 == 0)
    {
        cout<<num<<" Is Even";
    }

    else
    {
        cout<<num<<" Is Odd";
    }

    return 0;

}
