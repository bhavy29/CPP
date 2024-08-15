#include<iostream>
using namespace std; 

struct cus{

    char name[50];
    int id;
    long double mo;
};

int main() { 

cout<<"WELCOME TO MALL!!"<<endl;

struct cus cus1;

cout<<"Give name of customer :";
cin>>cus1.name;
cout<<endl;
cout<<"Give ID of customer :";
cin>>cus1.id;
cout<<endl;
cout<<"Give mobile number of customer :";
cin>>cus1.mo;
cout<<endl;

cout<<"----------------------------------------------------------------"<<endl;
cout<<"Nmae : "<<cus1.name<<endl;
cout<<"ID : "<<cus1.id<<endl;
cout<<"Mobile no. : "<<cus1.mo<<endl;

cout<<"----------------------------------------------------------------"<<endl;

int n,total=0,x;

cout<<"Enter number of product : "<<endl;
cin>>x;


for(int i=1;i<=x;i++){


cout<<"Enter the id of product : "<<endl;
cin>>n;
 switch (n)
 {
 case 1: cout<<"ParleG = 5"<<endl;
     break;
 
 case 2: cout<<"Chips = 10"<<endl;
     break;
 
 case 3: cout<<"Milk = 30"<<endl;
     break;
 
 default: cout<<"Wrong entry";
     break;
 }

if(n==1) total = total + 5;

else if(n==2) total = total + 10;

else total = total + 30;

}

cout<<"Total bill is : "<<total<<endl;
cout<<"Thank you!!"<<endl;

 return 0;
}