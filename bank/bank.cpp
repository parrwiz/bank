//This is a banking App
/*
This is a simple banking app that will have the following functions:
1: Main function
2: Deposit
3: Withdral
4: Check balance

1: main function will just show the options

*/
#include <iostream>
#include <string>
#include "checkpin.h"
#include "check.h"
#include "deposit.h"
#include "withdraw.h"




int main(){
    //log in
    //ask user
    string name;
    cout<<"Please enter your name: ";
    cin>>name;
    string pin;
    cout<<"Welcome, Enter Your pin: ";
    cin>>pin;

    if(checkpin(pin)){
        cout<<"\nWelcome, Please follow the instructions."<<endl;
        
    }else{
        cout<<"\nYou have been compromised and the FBI is on their way to catch you"<<endl;
        return 1;
    }
    system("clear");
    
    cout<<"\n\t  ************"<<endl;
    cout<<"\t  *          *"<<endl;
    cout<<"\t  *  RECTRA  *"<<endl;
    cout<<"\t  *          *"<<endl;
    cout<<"\t  ************"<<endl;
    cout<<"\n* A Bank you can call your own *\n"<<endl;
    cout<<"*******************************"<<endl;
   cout<<"How can I help you, "+name+"\n"<<endl;
   cout<<"\n*******************************"<<endl;
   cout<<"1: Check Your current Balance\n2: Withdraw Balance\n3: Deposit Balance"<<endl;
   cout<<"Select an option: ";
   int choice;
   cin>>choice;
   double amount;
   double temp =0;
   switch (choice)
   {
   case 1:
    //check balance
    cout<<"Your Current Balance is: ";
    cout<<checck(temp);
    break;

 
   case 2:
    //withdraw balance
    cout<<"Enter amount you would like to withdraw: ";
    //double amount;
    cin>>amount;
    cout<<"\nYour current Balance is: ";
    cout<<withdraw(amount);
    break;


   case 3:
   //deposit balance
    cout<<"\nHow much would you like to Deposit: ";
    // double amount;
    cin>>amount;
    cout<<"Your current balance is ";
    cout<<deposit(amount);
    break;
   default:
    break;
   }







   }