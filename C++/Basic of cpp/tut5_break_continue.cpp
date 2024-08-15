#include<iostream>
using namespace std; 

int main() {

//break
int i;
     
     cout<<"break"<<endl;
     for (i=0;i<=5;i++){
        if(i == 3){
            break;
        }
        cout<<i<<endl;

     }

//continue
int j;
    
     cout<<"Continue"<<endl;
     for (j=0;j<=5;j++){
        if(j == 3){
            continue;
        }
        cout<<j<<endl;
     }
return 0;
}