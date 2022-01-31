/*program to print the factorial of a number"*/                   /*example of while loop*/
#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;
    cout<<"enter the number of which factorial u want:"<<endl;
    cin>>n;
    while(n>0)
    {
        fact*=n;
        n--;
    }
    cout<<"the factorial of the number is: "<<fact<<endl;
}