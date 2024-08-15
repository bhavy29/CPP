#include<iostream>
using namespace std;

int main(){
  
  int age;
  cout<<"Tell me your age : "<<endl;
  cin>>age;

// if else ladder
  if(age<18 && age>=1){
    cout<<"You can not come to party."<<endl;
  }

  else if(age==18){
    cout<<"You are a kid and you will get a kid pass to the party."<<endl;
  }

  else if(age<1){
    cout<<"You are not yet born."<<endl;
  }

  else{
    cout<<"You can come to the party."<<endl;
  }


  int age2;
  cout<<"Tell me your age2 : "<<endl;
  cin>>age2;

// swich case 
  switch (age2)
  {
  case 18:
   cout<<"You are 18.";
    break;
  case 20:
   cout<<"You are 20.";
  
  default:
   cout<<"Your age is not 18 and 20.";
    break;
  }

//loop

   //for loop 
   
           int i;
           
           for ( i = 0; i <= 5; i++)
           {
             cout<<i<<endl;
           }

   //while loop
           
           int j=1;

           while (j<=5)
           {
            cout<<j<<endl;
            j++;
           }

   //do while loop
           
           int k=1;
           
           do
           {
             cout<<k<<endl;
             k++;
           } while (k<=5);
                  
                  //table of 6 using do while loop
                    int a=1;
                    
                    do
                    {
                        cout<<"6 * "<<a<<" "<<"= "<< 6*a<<endl;
                        a++;
                    } while (a<=10);

   

    return 0;
}