#include<iostream>
using namespace std; 

int main() {

   int a=10;
   int *ptr=&a;
   int **ptrptr = &ptr;

   cout<<"The value of a is "<<a<<endl;
   cout<<"The address of a is "<<ptr<<endl;    // address of a 
   cout<<"The value of a using pointer is "<<*ptr<<endl;   // using ponter
   cout<<"The address of ptr is "<<ptrptr<<endl;     // address of ptr using ptrptr
   cout<<"The value of ptr using ptrptr is "<<*ptrptr<<endl;   // value of ptr meaning address of a
   cout<<"The value of a using ptrptr is "<<**ptrptr<<endl;   // value of a using ptrptr

   
return 0;
}