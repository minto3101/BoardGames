#include <iostream>
#include <stdlib.h>
using namespace std;



//SHOOT FUNCTION DECLARATION
void shoot(int p1[6][6],int p2[6][6]){
    int i,r,c,score1=0,score2=0,j,z;
    int a[6][6],b[6][6];

for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        a[i][j]=0;
        b[i][j]=0;
                    }
                }

//MAIN LOOP WHICH ENDS ONLY AFTER SOMEONE WINS THE GAME
while(score1 != 3 && score2 != 3){
        //PLAYER 1'S TURN
    cout<<endl<<endl<<"PLAYER ONE IT'S YOUR TURN TO SHOOT ";
    cout<<endl<<"ENTER THE ROW NUMBER AND COLUMN NUMBER WHERE YOU WOULD LIKE TO SHOOT THE MISSILE"<<endl<<endl;
    cin>>r>>c;
    r--;
    c--;
    if (p2[r][c]==0){
            //MISSED SHOT P1
        cout<<"OH NO! YOU MISSED"<<endl<<endl;
        b[r][c]=2;
        for(j=0;j<6;j++){
            for(z=0;z<6;z++){
            cout<<b[j][z]<<"\t";}
            cout<<endl;}

        cout<<endl<<"WHERE 0 REPRESENTS AN UNTOUCHED CO-ORDINATE, 2 REPRESENTS MISSED SPOT AND 3 A HIT SPOT";
        cout<<endl<<"PLAYER ONE YOUR SCORE IS "<<score1<<endl<<endl;
        }

    else if (p2[r][c]==1){
            //HIT P1
        cout<<"YAAY! PLAYER 1 YOU GOT A HIT"<<endl<<endl;
        b[r][c]=3;
        score1++;
        for(j=0;j<6;j++){
            for(z=0;z<6;z++){
            cout<<b[j][z]<<"\t";}

            cout<<endl;}
        cout<<endl<<"WHERE 0 REPRESENTS AN UNTOUCHED CO-ORDINATE, 2 REPRESENTS MISSED SPOT AND 3 A HIT SPOT";}
        cout<<endl<<"PLAYER ONE YOUR SCORE IS "<<score1<<endl<<endl;

        if (score1==3)//GAME ENDS WHEN SOMEONE WINS
            break;


//PLAYER 2'S TURN
cout<<"PLAYER TWO IT'S YOUR TURN TO SHOOT ";
    cout<<endl<<"ENTER THE ROW NUMBER AND COLUMN NUMBER WHERE YOU WOULD LIKE TO SHOOT THE MISSILE"<<endl<<endl;
    cin>>r>>c;
    r--;
    c--;
    if (p1[r][c]==0){
            //PLAYER 2 MISSED
        cout<<"OH NO! YOU MISSED"<<endl<<endl;
        a[r][c]=2;
        for(j=0;j<6;j++){
            for(z=0;z<6;z++){
            cout<<a[j][z]<<"\t";}

            cout<<endl;}
        cout<<endl<<"WHERE 0 REPRESENTS AN UNTOUCHED CO-ORDINATE, 2 REPRESENTS MISSED SPOT AND 3 A HIT SPOT";
        cout<<endl<<"PLAYER TWO YOUR SCORE IS "<<score2<<endl<<endl;
        }

    else if (p1[r][c]==1){
            //PLAYER 2 HIT
        cout<<"YAAY! PLAYER 2 YOU GOT A HIT"<<endl<<endl;
        a[r][c]=3;
        score2++;
        for(j=0;j<6;j++){
            for(z=0;z<6;z++){
            cout<<a[j][z]<<"\t";}

            cout<<endl;}
        cout<<endl<<"WHERE 0 REPRESENTS AN UNTOUCHED CO-ORDINATE, 2 REPRESENTS MISSED SPOT AND 3 A HIT SPOT";}
        cout<<endl<<"PLAYER TWO YOUR SCORE IS "<<score2<<endl<<endl;
        
        if (score2==3)//GAME ENDS WHEN SOMEONE WINS
            break;
}
//FINAL IF STATEMENT TO DISPLAY WINNER
if(score1>score2)
    cout<<"CONGRATULATIONS PLAYER ONE YOU SANK PLAYER TWO'S SHIP, YOU'RE THE WINNER!!!";
  else if (score2>score1)
    cout<<"CONGRATULATIONS PLAYER TWO YOU SANK PLAYER ONE'S SHIP, YOU'RE THE WINNER!!!";

}

//MAIN FUNCTION
int main(){
    
//TEXT FOR AESTHETIC APPEAL
cout<<"                             WELCOME TO BATTLESHIP                  ";
cout<<endl<<"                                     MADE BY SHISHIR SAXENA       "<<endl;
cout<<endl<<"The rules are as following"<<endl;
cout<<endl<<"Only two players can play, each player has to choose the co-ordinates of their ships on a square 6x6 grid in secret";
cout<<endl<<"The grid looks as follows"<<endl;

int p1[6][6],p2[6][6];
int i,j,n,c,r,z,t;

for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        p1[i][j]=0;
        p2[i][j]=0;}
                }


//TO DISPLAY THE BOARD
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
    cout<<p1[i][j]<<"\t";}
    cout<<endl;}

cout<<endl<< "and co-ordinates(row number and column number) as follows "<<endl;
for(i=1;i<=6;i++){
    for(j=1;j<=6;j++){
    cout<<i<<" & "<<j<<"\t";}
    cout<<endl;}
    cout<<endl<<endl<<"The ship takes a space of 3 co-ordinates and can be placed horizontally or vertically only";
cout<<endl<<"Both players get chances to shoot at their opponent's ship by strategically choosing a co-ordinate"<<endl;
cout<<"The first player to shoot down the opponent's ship is the winner";
cout<<endl<<"HAVE FUN!!!"<<endl;


cout<<endl<<endl<<"ENTER ONE TO START PLAYING";
cin>>t;
if(t==1){

        //PLAYER ONE ENTRY

cout<<"PLAYER ONE IT'S YOUR TURN TO PLACE YOUR SHIP";
cout<<endl<<"Do you want to place your ship vertically or horizontally on the board?";
cout<<endl<<"enter 1 for vertical placement and 2 for horizontal placement";
cin>>n;

//VERTICAL ENTRY P1

if(n==1){
    cout<<endl<<"enter column number in which your ship would be placed (cannot be greater than 6)";
    cin>>c;
    if(c>6) {exit(0);}
    c=c-1;

    cout<<endl<<"enter row number in which your ship head would start (cannot be greater than or equal to 5)";
    cin>>r;
     if(r>=5) {exit(0);}
    r=r-1;


    for(i=r;i<r+3;i++){
        p1[i][c]=1;
    }
    cout<<endl<<"YOUR SHIP HAS BEEN PLACED PLAYER ONE!!"<<endl;
    cout<<"The following table represents the board and the one's represent your boat"<<endl;
    for(i=0;i<6;i++){
    for(j=0;j<6;j++){
            cout<<p1[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<endl<<"enter 1 to continue";
    cin>>z;
    if(z==1){
    for(i=0;i<40;i++)
        cout<<endl;}
    }
//HORIZONTAL ENTRY P1
else if(n==2){
    cout<<endl<<"enter row number in which your ship would be placed (cannot be greater than 6)";
    cin>>r;
    if (r>6)
        {exit(0);}
    r=r-1;


    cout<<endl<<"enter column number in which your ship's head would start (cannot be greater than or equal to 5)";
    cin>>c;
    if(c>=5)
        {exit(0);}
    c=c-1;


    for(i=c;i<c+3;i++){
        p1[r][i]=1;
    }
    cout<<endl<<"YOUR SHIP HAS BEEN PLACED PLAYER ONE!!"<<endl;
    cout<<"The following table represents the board and the one's represent your boat"<<endl;
    for(i=0;i<6;i++){
    for(j=0;j<6;j++){
            cout<<p1[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<endl<<"enter 1 to continue";
    cin>>z;
    if(z==1){
    for(i=0;i<30;i++)
        cout<<endl;}
    }

    else
        cout<<"enter 1 or 2 only";

        //PLAYER2 ENTRY

cout<<"PLAYER TWO IT'S YOUR TURN TO PLACE YOUR SHIP!";
cout<<endl<<"Do you want to place your ship vertically or horizontally on the board?";
cout<<endl<<"enter 1 for vertical placement and 2 for horizontal placement";
cin>>n;

//VERTICAL ENTRY P2

if(n==1){
    cout<<endl<<"enter column number in which your ship would be placed (cannot be greater than 6)";
    cin>>c;
    if(c>6) {exit(0);}
    c=c-1;


    cout<<endl<<"enter row number in which your ship head would start (cannot be greater than or equal to 5)";
    cin>>r;
    if(r>=5) {exit(0);}
    r=r-1;


    for(i=r;i<r+3;i++)
        p2[i][c]=1;

    cout<<endl<<"YOUR SHIP HAS BEEN PLACED PLAYER TWO!!"<<endl;
    cout<<"The following table represents the board and the one's represent your boat"<<endl;

    for(i=0;i<6;i++){
    for(j=0;j<6;j++){
            cout<<p2[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<endl<<"enter 1 to continue";
    cin>>z;
    if(z==1){
    for(i=0;i<30;i++)
        cout<<endl;}
    }

//HORIZONTAL ENTRY P2

else if(n==2){
    cout<<endl<<"enter row number in which your ship would be placed (cannot be greater than 6)";
    cin>>r;
    if(r>6) {exit(0);}
    r=r-1;


    cout<<endl<<"enter column number in which your ship's head would start (cannot be greater than or equal to 5)";
    cin>>c;
    if(c>=5) {exit(0);}
    c=c-1;


    for(i=c;i<c+3;i++)
        p2[r][i]=1;

    cout<<endl<<"YOUR SHIP HAS BEEN PLACED PLAYER TWO!!"<<endl;
    cout<<"The following table represents the board and the one's represent your boat"<<endl;

    for(i=0;i<6;i++){
    for(j=0;j<6;j++){
            cout<<p2[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<endl<<"enter 1 to continue";
    cin>>z;
    if(z==1){
    for(i=0;i<30;i++)
        cout<<endl;}
    }
//SHOOT FUNCTION WHICH HAS BEEN DECLARED ABOVE
  shoot(p1,p2);

}
else exit(0);
}
