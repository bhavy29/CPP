#include<iostream>
using namespace std; 

inline product(int a, int b){    //If we call one function multiple type than it is very extra overhead, 
                                    //than we use inline function it is use to rplace function call to code. 
    return a*b;
}

int main() { 

int x = 4, y = 5;

cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;
cout<<"Product of a and b is "<<product(x,y)<<endl;



 return 0;
}