//************************************************************************
// Name : Talwinder singh saini
// course : CS 155 computer science
// Semester : 1
// Assignment A5 : Selection
// Due Date : 9/20/2021
//Description : Write a program that will tell a cashier how much total change should be returned to the customer. The input to obtain from the cashier will be the total purchase price and the amount of cash given. If enough cash is given, your program will inform the cashier how much change to dispense (a single amount; for now, it's up to them to break that into individual coin and dollar amounts on their own). If not enough cash is given, your program will inform the cashier not enough cash was given to complete the purchase.
//************************************************************************

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
