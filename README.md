# BoardGames
I have namde 2 simple board games using C++

  1) Battleship 
  2) Snakes and Ladders
  
BATTLESHIP-
Battleship is a strategy type guessing game for two players
This game uses the concept of 2D arrays to take place of the board that is present in the actual game. Two separate arrays are initialised for both the players which contain the location of their ships and the shots they take against the enemy player.
Several for() loops, while() loops and if else statements are used for making the functions


SNAKES AND LADDERS-

OUTLOOK

number the players with numbers (1,2,3,...etc)
ask user the number of players(n)
create a 2x2 2-d array of character type
names will be entered by the user.
ask first player to roll dice and use random fucntion to obtain a number beween 1 and 6.
add 6 to players count variable
assign snakes to various places to bring players down
do the same with ladders
first ones count to reach 100 wins.


MAIN GAME

create another loop in which the players will play. the loop will be run by variable i and this loop wil only end when some player's PV reaches 100.
on entering the loop the name of the player would be displayed. then the random function would generate a number that would be added to that player's PV which would be displayed to the players.
if the number generated is 6 then the loop would run again for the same value of i.
snakes and ladders will be added by switch case and accounted for if the players PV gets one of those values.
once the players turn ends the value of i will increase by 1 and the next player's turn would begin.
When adding values to the PV add a statement which breaks the loop when any of the PV values reaches 100.
