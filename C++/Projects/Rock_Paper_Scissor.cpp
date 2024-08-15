#include<iostream>
using namespace std; 

int main() { 

cout<<"WELCOME TO ROCK PAPAER SCISSOR GAME MADE BY BHAVY!!"<<endl;
int n;
cout<<"Enter 1 for start the game or 0 for exit"<<endl;
cin>>n;

if(n==1){
   
    char p1[15];
    cout<<"Enter the name of player 1"<<endl;
    cin>>p1;

    char p2[15];
    cout<<"Enter the name of player 2"<<endl;
    cin>>p2;

    cout<<"For ROCK press 2, For PAPER press 3 and for SCISSOR prees 4!!"<<endl;

    int t1,t2;
    cout<<"Now "<<p1<<"'s turn"<<endl;
    cin>>t1;

    cout<<"Now "<<p2<<"'s turn"<<endl;
    cin>>t2;

    if(t1 == 2 && t2 == 2 ) cout<<"Both chose ROCK, match tied"<<endl;

    else if(t1 == 2 && t2 == 3) cout<<p2<<" is winner"<<endl;

    else if(t1 == 2 && t2 == 4) cout<<p1<<" is winner"<<endl;

    else if(t1 == 3 && t2 == 2) cout<<p1<<" is winner"<<endl;

    else if(t1 == 3 && t2 == 3) cout<<"Both chose PAPER, match tied"<<endl;

    else if(t1 == 3 && t2 == 4) cout<<p2<<" is winner"<<endl;

    else if(t1 == 4 && t2 == 3) cout<<p1<<" is winner"<<endl;

    else if(t1 == 4 && t2 == 2) cout<<p2<<" is winner"<<endl;

    else  cout<<"Both chose SCISSOR, match tied"<<endl;

    }

else cout<<"Thank you!!"<<endl;

 return 0;
}