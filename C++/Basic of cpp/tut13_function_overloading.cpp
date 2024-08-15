#include<iostream>
using namespace std; 

int add(int a, int b){
    return a+b;
}

int add(int a, int b , int c){
    return a+b+c;
}

//volume of cylinder
int volume(double r, int h){
    return 3.14*r*r*h;
}

//volume of cube 
int volume(int a){
    return a*a*a;
}

//volume of rectangular box
int volume(int l, int b, int h){
    return l*b*h;
}

int main() { 

    int a=2,b=3,c=4;
    cout<<"The sum of a, b and c is " <<add(a,b,c)<<endl;
    cout<<"The sum of a and b is : "<<add(a,b)<<endl;

    cout<<"The volume of cylinder : "<<volume(3,4)<<endl;
    cout<<"The volume of cube : "<<volume(3)<<endl;
    cout<<"The volume of rectangular box : "<<volume(3,4,5)<<endl;


 return 0;
}