/*You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. You can read more about the factorial of a number here.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int num=n;
    int xxx=1;
    while(num>0)
    {
        xxx*=num;
        num--;

    }
    cout<<xxx;
}