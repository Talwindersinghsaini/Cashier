#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //two floating variables
    double total,cash;
    
    //Enter the total bill from the user
    cout<<"Enter the total amount of bill $ ";
    cin>>total;
    
    //Enter the amount of the cash from the user
    cout<<"Enter the amount of cash given $ ";
    cin>>cash;
    
    //we use if statement here which should be like the variable total should be less or equal to variable cash
    if (total <= cash)
    {
        cash = cash - total;
        cout<<"\nThe change is $ "<<cash<<endl;
    }
    //we use again if statement here and its like variable if variable total is greater than variable cash the compiler should print "Not enough cash"
    
    if (total > cash)
    {
        cout<<"Not enough cash"<<endl;
    }
    return 0;
}
