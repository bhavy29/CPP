#include<iostream>
using namespace std; 

int factorial(int a){
    if(a == 0) return 1;
    else return a*factorial(a-1) ;
}

int fibbo(int n){                // 0 1 1 2 3 5 8 ....
     if(n<2) return 1;

     else return fibbo(n-2) + fibbo(n-3);        
                                                                     
}

int main() { 

int n;
cout<<"Enter any number : "<<endl;   
cin>>n;

// cout<<"Fact is : "<<factorial(n)<<endl; 

cout<<"Fibbonacci is : "<<fibbo(n)<<endl;

 return 0;
}
  