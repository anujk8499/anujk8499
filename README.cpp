#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Bank{
char name[100] , add[100] , y;
int bal;
public :
void open_account();
void deposit_money();
void withdraw_money();
void display_Account();


};

void Bank ::open_account(){

cout<<"Enter your full name : ";
cin.ignore();
cin.getline(name,100);
cout<<"Enter your Address: ";
cin.ignore();
cin.getline(add,100);
cout<<"What type of account you want to open : open saving (s) or current (c) : ";
cin>>y;
cout<<"Enter amount for deposit : ";
cin>>bal;
cout<<"Your account has been created . \n";

}

void Bank ::deposit_money(){

int a;
cout<<"Enter the amount to be deposited : ";
cin>>a;
bal+=a;
cout<<"Total amount deposited : "<<bal<<"\n";


}

void Bank::display_Account(){

cout<<"Name : "<<name<<"\n";
cout<<"Address : "<<add<<"\n";
cout<<"Type of account : "<<y<<"\n";
cout<<"Amount you deposited : "<<bal<<"\n";

}

void Bank ::withdraw_money(){
float amount;
cout<<"Withdraw money : \n";
cout<<"Enter the amount to be withraw : ";
cin>>amount;
bal=bal-amount;
cout<<"Amount left : "<<bal<<"\n";


}





int main(){
Bank obj;
 int ch , x;
 do{
cout<<"1. open Account : \n";
cout<<"2. Deposite Money : \n";
cout<<"3. withdraw money : \n";
cout<<"4. Display account : \n";
cout<<"5. Exit : \n";
cout<<"Select  the option from above : \n";
cin>>ch;

switch (ch)
{
case  1 :
    cout<<"1. Open account : \n"; 
    obj.open_account();
    break;

case  2 :
    cout<<"2. Deposite money : \n"; 
    obj.deposit_money();
    break;

case  3 :
    cout<<"3. Withdraw money : \n"; 
    obj.withdraw_money();
    break;

case  4 :
    cout<<"4. Open account : \n"; 
    obj.display_Account();
    break;

case 5 :
if (ch==5)
{
    exit(1);
}

default:
cout<<"Invalid input . Try again ...\n";
}
cout<<"Do you want to select next option then press :: y/n \n";
cout<<"if you want to exit then press :  N \n";
x=getch();
if (x=='n' || x=='N')
{
    exit(0);
}

 }while (x=='y' || x=='Y');
 
 getch();


return 0;
}
