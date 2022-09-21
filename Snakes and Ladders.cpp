#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<process.h>
using namespace std;

int main(){
    srand(time(0));
    int i,n,pv[3],j=0,x=0,y;
    char a[4][30];
    for(i=0;i<3;i++){
        pv[i]=0;
    }
    cout<<"WELCOME TO SNAKES AND LADDERS!!!";
    cout<<endl<<"Enter the number of players"<<endl<<"More than 4 players aren't allowed";
    cin>>n;
    if(n>4)
        cout<<"Sorry but maximum player limit is 4";

    else if(n==1){
        cout<<"Alone :((( Get a buddy to start";
        exit(0);
    }
    else
        cout<<"GREAT!!!"<<endl<<"Enter the player names"<<endl;
    for(i=0,j=0;i<=n;j++,i++)
        cin.getline(a[i],30);


        cout<<"AWESOME!!! NOW LETS START..."<<endl;
        for(i=0,j=0;pv[j]!=20;i++){
            cout<<a[j+1]<<" it's your turn"<<endl<<"Enter 1 to roll the dice";
            cin>>x;
            if(x=1){
                    y=(rand()%6)+1;
                    pv[j]=pv[j]+y;
                      if(pv[j]==100)
                    break;

                if(pv[j]>100){
                cout<<"you can't exceed 100 so you go back "<<y<<" spaces";
                      pv[j]=pv[j]-y;
                }
                switch(pv[j]){
                  case 4:cout<<"You rolled a "<<y<<" and found a ladder on 4 that takes you 10 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+10;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 9:cout<<"You rolled a "<<y<<" and found a ladder on 9 that takes you 22 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+22;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 20:cout<<"You rolled a "<<y<<" and found a ladder on 20 that takes you 18 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+18;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 28:cout<<"You rolled a "<<y<<" and found a ladder on 28 that takes you 56 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+56;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 40:cout<<"You rolled a "<<y<<" and found a ladder on 40 that takes you 19 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+19;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 63:cout<<"You rolled a "<<y<<" and found a ladder on 63 that takes you 18 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+18;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 71:cout<<"You rolled a "<<y<<" and found a ladder on 71 that takes you 20 spaces ahead!!"<<endl;
                         pv[j]=pv[j]+20;
                         cout<<"Now you're on "<<pv[j]<<endl;
                         break;
                  case 17:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 17 and took you back 10 spaces"<<endl;
                          pv[j]=pv[j]-10;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 54:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 54 and took you back 20 spaces"<<endl;
                          pv[j]=pv[j]-20;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 62:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 62 and took you back 44 spaces"<<endl;
                          pv[j]=pv[j]-44;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 64:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 64 and took you back 4 spaces"<<endl;
                          pv[j]=pv[j]-4;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 87:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 87 and took you back 63 spaces"<<endl;
                          pv[j]=pv[j]-63;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 93:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 93 and took you back 20 spaces"<<endl;
                          pv[j]=pv[j]-20;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 95:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 95 and took you back 20 spaces"<<endl;
                          pv[j]=pv[j]-20;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  case 99:cout<<"Oh no! You rolled a "<<y<<" and a snake caught you on 99 and took you back 21 spaces"<<endl;
                          pv[j]=pv[j]-21;
                          cout<<"Now you're on "<<pv[j]<<endl;
                          break;
                  default:cout<<" You rolled a "<<y<<endl<<"Now you're on "<<pv[j]<<endl<<endl;
                }


                    j++;
                    if(j==n)
                        j=0;

            }
            }
            cout<<"CONGRATULATIONS!!!"<<endl<<a[j+1]<<" YOU'VE WON THE GAME"<<endl;
            cout<<"You may leave now...."<<"B-bye";
return 0;
}