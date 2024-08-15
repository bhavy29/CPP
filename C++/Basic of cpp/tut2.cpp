#include<iostream>
// #include "this.h"

using namespace std;

int glo=5;

int main(){

    cout<< "Hello World!"<<endl;

    int a=1;      
    int b=2;
    cout<<a+b+glo<<endl;   // ans is 8;

    int glo=6;  // Here glo is not global because we declare glo=6. but if we use glo in another function than it's value is 5.
    cout<<a+b+glo<<endl;    // ans is 9
                            // precidence of local is greater than global.

   

    int c=3;                                // Operators
    cout<<((a<b) && (b>c)) << endl;
    cout<<((a<b) || (b>c)) << endl;       


    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;            //sizeof keyword
    cout<<"The size of 34.4 is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is : "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is : "<<sizeof(34.4d)<<endl;
    cout<<"The size of 34.4 is : "<<sizeof(34.4D)<<endl;
   
    return 0;
}