#include<iostream>
using namespace std; 

int main() { 

       struct employee
          {
                  int id;
                  char favChar;
                  float salary;
          };      
                  struct employee bhavy;
                  bhavy.id = 1;
                  bhavy.favChar = 'b';
                  bhavy.salary = 1200000000;
              
                  cout<<"ID is  "<<bhavy.id<<endl;
                  cout<<"fav char  is "<<bhavy.favChar<<endl;
                  cout<<"salary is "<<bhavy.salary<<endl;


       union employee1
                {
                        int id1;
                        char favChar1;
                        float salary1;
                };
                 
                 
                  union employee1 bhavy1;
                  bhavy1.id1 = 1;
                 // bhavy1.favChar1 = 'b';
                 // bhavy1.salary1 = 1200000000;
              
                  cout<<"ID is  "<<bhavy1.id1<<endl;
                 // cout<<"favChar1 is "<<bhavy1.favChar1<<endl;
                 // cout<<"salary is "<<bhavy1.salary1<<endl;
       
       enum Meal {breakfast, lunch, dinner};
                  
                   cout<<breakfast<<endl; // output is 0
                   cout<<lunch<<endl;   // output is 1
                   cout<<dinner<<endl;   // output is 2
                 Meal m1 = lunch;
                 cout<<m1<<endl;
       
 return 0;
}