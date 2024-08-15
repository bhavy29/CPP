#include<iostream>
using namespace std; 

// Call by value
 void swap(int a, int b){
     int temp = a;
     a = b;
     b = temp;
 }

// Call by reference
 void swapptr(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }

// Call by reference using c++ reference variable
 void swapReference(int &a, int &b){
     int temp = a;
      a = b;
      b = temp;
 }

int main() { 

            int x = 4, y = 5;

                cout<<"The value of x and y before swap "<<x<<" and "<<y<<endl;            

                swap(x,y);
                cout<<"The value of x and y after swap "<<x<<" and "<<y<<endl;          // call by value

    
                swapptr(&x,&y);
                cout<<"The value of x and y after swap "<<x<<" and "<<y<<endl;         // call by reference

                swapReference(x,y);
                cout<<"The value of x and y after swap "<<x<<" and "<<y<<endl;        // using c++ reference variable

 return 0;
}