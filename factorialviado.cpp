/*program to print the factorial of a number"*/                   /*example of do while loop*/
#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;
    cout<<"enter the number of which factorial u want:"<<endl;
    cin>>n;
    do
    {
        fact*=n;
        n--;
    } while (n>0);
    cout<<"the factorial of the number is: "<<fact<<endl;
}
    