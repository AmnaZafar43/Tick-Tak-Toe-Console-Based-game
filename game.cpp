#include <iostream>
#include <windows.h>
using namespace std;
void displayBoard();
void playerTurn();
bool gameOver();
int choice;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,column;
bool draw=false;
main()
{
  while(gameOver())
  {
  displayBoard();
  playerTurn();
  gameOver();
  }
     if(turn=='X' && draw==false)
     {
       cout <<"\nPlayer2[O] Wins!!*Congratulations*\n";
     }
      else if(turn=='O' && draw ==false)
     {
       cout <<"\nPlayer1[X] Wins!!*Congratulations*\n";
     }
     else
     {
       cout <<"Game Draw!!\n";
     }
}
void displayBoard()
{
 system("cls");
cout <<"----------  --------    ------  -     -  --------    -     -    -  --------  ------   -------" <<endl;
cout <<"    -          -       -        -   -       -       - -    -  -       -     -      -  -      " <<endl;
cout <<"    -          -      -         - -         -      -----   - -        -    -       -  -----  " <<endl;
cout <<"    -          -      -         -   -       -     -     -  -  -       -    -       -  -      " <<endl;
cout <<"    -       --------    ------  -     -     -    -       - -    -     -     ------    -------" <<endl;
cout <<"Player1 [X],Player2[O]" <<endl;
cout <<"\n";
cout <<"\n";
cout <<"	|	|	" <<endl;
cout <<"____"<<board[0][0]<<"__	|___"<<board[0][1]<<"__	|___"<<board[0][2]<<"__	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"____"<<board[1][0]<<"__	|___"<<board[1][1]<<"__	|___"<<board[1][2]<<"__	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"	|	|	" <<endl;
cout <<"____"<<board[2][0]<<"__	|___"<<board[2][1]<<"__	|___"<<board[2][2]<<"__	" <<endl;
cout <<"	|	|	" <<endl;
system("Color 3");
}
void playerTurn()
{
  if(turn=='X')
  {
  cout <<"\n Player1[X] turn:";
  }
  if(turn=='O')
  {
  cout <<"\n Player2[0] turn:";
  }
  cin >> choice;
  if(choice==1)
  {
    row=0;
    column=0;
  }
   else if(choice==2)
  {
    row=0;
    column=1;
  }
  else if(choice==3)
  {
    row=0;
    column=2;
  }
  else if(choice==4)
  {
    row=1;
    column=0;
  }
  else if(choice==5)
  {
    row=1;
    column=1;
  }
  else if(choice==6)
  {
    row=1;
    column=2;
  }
  else if(choice==7)
  {
    row=2;
    column=0;
  }
  else if(choice==8)
  {
    row=2;
    column=1;
  }
  else if(choice==9)
  {
    row=2;
    column=2;
  }
  else 
  {
    cout <<"Invalid choice"<<endl;
  }
  if(turn=='X'&& board[row][column]!='X' && board[row][column]!='O')
  {
   board[row][column]='X';
   turn='O';
  }
  else if(turn=='O'&& board[row][column]!='X' && board[row][column]!='O')
  {
   board[row][column]='O';
   turn='X';
  }
  else
  {
   cout <<"Box Alread Filled!\n Please try again!!";
   playerTurn();
  }
displayBoard();
}
bool gameOver()
{
for(int i=0;i<3;i++)
{
   if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i])
   {
     return false;
   }
}
  if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0])
  {
    return false;
  }
for(int i=0;i<3;i++)
{
   for(int j=0;j<3;j++)
   {
     if(board[i][j]!='X' && board[i][j]!='O')
     {
       return true;
     }
   }
}
draw=true;
return false;
}