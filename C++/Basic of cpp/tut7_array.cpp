#include<iostream>
using namespace std; 

int main() { 

    int a[5] = {10,20,30,40,50};
 
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    cout<<a[4]<<endl;
    
    int b[3];
    b[0] = 100;
    b[1] = 200;
    b[2] = 300;
 
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;
    cout<<b[2]<<endl;


      int c[] = {221,3423,24352,23452,234};

       // using for loop 
           for(int i = 0; i<5 ; i++){
              cout<<c[i]<<endl;
           } 
 
         
       //using do while loop
            int i = 0;
            do
            {
                cout<<c[i]<<endl;
                i++;
            } while (i<5);

    // array and pointer
             int d[4] = {33,2,322,23};
                  int *p = d;
                  
                  cout<<"The value of a[0] is "<<*p<<endl;    // value of a[0] using ponter
                  cout<<"The value of a[1] is "<<*(p+1)<<endl;
                  cout<<"The value of a[2] is "<<*(p+2)<<endl;
                  cout<<"The value of a[3] is "<<*(p+3)<<endl;

                  cout<<"The address of a[0] is "<<p<<endl;    // address of a[0] using ponter
                  cout<<"The address of a[1] is "<<(p+1)<<endl;
                  cout<<"The address of a[2] is "<<(p+2)<<endl;
                  cout<<"The address of a[3] is "<<(p+3)<<endl;
                        

         
 return 0;
}