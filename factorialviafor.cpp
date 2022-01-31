/*program to print the factorial of a number"*/                   /*example of for loop*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,fact=1;
    cout<<"enter the number of which factorial u want:"<<endl;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        fact*=i;
    }
    cout<<"the factorial of this number of is: "<<fact<<endl;
}