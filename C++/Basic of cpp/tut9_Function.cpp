#include<iostream>
using namespace std; 

int sum(int a, int b){     //function declaration and definition        
    int c = a + b;
    return c;
}

void hello(){
    cout<<"Hello!"<<endl;
}

int main() { 

 int a,b;
 cout<<"Enter the value of a and b :"<<endl;
 cin>>a>>b;
 
 cout<<"The sum of a and b is = "<<sum(a,b)<<endl;    // function calling

hello();    // calling of hello

 return 0;
}