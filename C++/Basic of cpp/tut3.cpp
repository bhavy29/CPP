#include<iostream>
#include<iomanip>  // for manipulators, for using setw
using namespace std;

int main(){

 // Reference variable 
    int x = 45;
    int &y = x;
        cout<<x<<endl;
        cout<<y<<endl;    // Ans is 45.

 // Type casting
    float a = 45.5;
                cout<<"The value of a is "<<(int)a<<endl;
    
 // Constants
        const int g = 4;
      //  int g = 5;   // Gives error
        cout<<g<<endl;
 
 // Manipulators 
    int j=3,k=443,l=2345;

    cout<<"The value of j without using setw is "<<j<<endl;
    cout<<"The value of k without using setw is "<<k<<endl;
    cout<<"The value of l without using setw is "<<l<<endl;

    cout<<"The value of j is "<<setw(4)<<j<<endl;
    cout<<"The value of k is "<<setw(4)<<k<<endl;
    cout<<"The value of l is "<<setw(4)<<l<<endl;
    
    return 0;
}