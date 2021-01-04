#include <iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
	int pin,password=7896,count=0,i,n;
	bool isTrue=true;
	double balance =0.0,withdraw=0.0,deposite=0.0;
	system("Color 3E");
	do
	{
		cout<<"**********Welcome to SBI Bank**********"<<endl;
		cout<<"Please enter your pin number: ";
		cin>>pin;
		
		if(pin==password)
			{
				do
				{
					cout<<"**********Welcome to SBI Bank**********"<<endl;
					cout<<"Enter the option you want: "<<endl<<"1. Deposite Cash "<<endl<<"2. Cash Withdraw "<<endl<<"3. Balance Enquiry  "<<endl<<"4. Exit "<<endl;
					cin>>i;
					switch(i)
				{
					case 1:
						cout<<"Deposite amount : Rs ";
						cin>>deposite;
						balance= balance+deposite;
						break;
						
					case 2:
						if(balance<=0)
						{
							cout<<"Please deposite some funds."<<endl;
						}
						else
						{
							cout<<"Withdraw amount : Rs ";
							cin>>withdraw;
							balance=balance-withdraw;
							cout<<"Your avialable balance is Rs "<<balance<<endl;	
						}
						break;
					case 3:
						 cout<<"Current balance : Rs "<<balance<<endl;
						 break;
						
					case 4:
						cout<<"Have a nice day!!";
						isTrue=false;
						break;
						
						default: cout<<"Do you want to perform another transaction?"<<endl;
						         cout<<"Press 1 to proceed and 2 to exit"<<endl;
						         cin>>n;
				}
				
				}while(isTrue!=false);
				
			}	
		else
		{
			count++;
			if(count==3)
		{
			isTrue=false;	
		}
		
		else
		{
			cout<<"Wrong pin!!"<<endl;
		}
				
		}
			
	}while(isTrue!=false);
	
}
