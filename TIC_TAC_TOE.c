#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
char array[10]={32,32,32,32,32,32,32,32,32,32};
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int check_winner()
{
    if(square[1]==square[2] && square[2]==square[3])
        return 1;
    else
        if(square[4]==square[5] && square[5]==square[6])
        return 1;
    else
       if(square[7]==square[8] && square[8]==square[9])
        return 1;
    else
        if(square[1]==square[4] && square[4]==square[7])
         return 1;
    else
        if(square[2]==square[5] && square[5]==square[8])
         return 1;
    else
        if(square[3]==square[6] && square[6]==square[9])
        return 1;
    else
        if(square[1]==square[5] && square[5]==square[9])
         return 1;
    else
        if(square[3]==square[5] && square[5]==square[7])
         return 1;
    else
        if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
            return 0;
    else
        return -1;
}
void board()
{
  system("cls");
  printf("\n\n                         Tic Tac Toe !!");
  printf("\n\n\n                         |          | ");
  printf("\n                    %c    |    %c     |    %c",array[1],array[2],array[3]);
  printf("\n                 ---------------------------");
  printf("\n                         |          | ");
  printf("\n                    %c    |    %c     |    %c",array[4],array[5],array[6]);
  printf("\n                 ---------------------------");
  printf("\n                         |          | ");
  printf("\n                    %c    |    %c     |    %c",array[7],array[8],array[9]);
  printf("\n\n");
}
void menu()
{
    char b=219;
    system("cls");
    printf("\n\n\n\n\n\n");
    printf("\t\t   Welcome To TIC TAC TOE GAME !!\n");
    printf("\n\t\t\t ->Coded By - SARWAR ALI<-\n");
    printf("\n\t\t\t     Github-sarwar1227\n");
    printf("\n\tCheckout Source Code at:https://github.com/sarwar1227/tic_tac_toe");
    printf("\n\n\t\tPress Any Key To Enter Into Game....\n\n");
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING...\n\n\t\t\t");
    for(int i=0;i<25;i++)
        {
            printf("%c",b);
            Sleep(25);
        }
    system("cls");
}
int main()
{
 int player=1,i,ch;  char mark;
 system("color 0e");
 menu();
 do
 {
     system("cls");
     board();
     player=(player%2)?1:2;
     printf("\nPlayer %d Turn (Enter choice): ",player);
     scanf("%d",&ch);
     mark=(player==1)?'O':'X';
     if(ch==1 && square[1]=='1')
        array[1]=square[1]=mark;
     else
     if(ch==2 && square[2]=='2')
        array[2]=square[2]=mark;
     else
     if(ch==3 && square[3]=='3')
        array[3]=square[3]=mark;
     else
     if(ch==4 && square[4]=='4')
        array[4]=square[4]=mark;
     else
     if(ch==5 && square[5]=='5')
        array[5]=square[5]=mark;
     else
     if(ch==6 && square[6]=='6')
        array[6]=square[6]=mark;
     else
     if(ch==7 && square[7]=='7')
        array[7]=square[7]=mark;
     else
     if(ch==8 && square[8]=='8')
        array[8]=square[8]=mark;
     else
     if(ch==9 && square[9]=='9')
        array[9]=square[9]=mark;
     else
     {
         printf("Invlaid Choice !!");
         player--;
         getch();
     }
     i=check_winner();
     player++;
 }while(i==-1);
 board();
 if(i==1)
    printf("Player %d Wins !! \n",--player);
 else
    printf("Game Draw !!");
 return 0;
}
