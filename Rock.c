// Rock ,paper and scizzor game in C
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int game(char user,char computer){
    if (user == computer)
    {
        return 0;
    }
    if ( user == 'R' && computer == 'P')
    {
        return 1;
    }
    if ( user == 'R' && computer== 'S')
    {
        return 2;
    }
    if ( user == 'P' && computer == 'R')
    {
        return 2;
    }
    if (user == 'P' && computer == 'S')
    {
        return 1;
    }
    if (user == 'S' && computer == 'R')
    {
        return 1;
    }
    if (user == 'S' && computer == 'P')
    {
        return 2;
    }
    
    

}
int main(){
    int n;
    char user,computer,result ;
    srand(time(NULL));
    n = rand() %100;
  if (n < 33)
  {
    computer = 'R';
  }
  else if (n > 33 && n < 66)
  {
    computer = 'P';
  }
  else if ( n > 66 && n <= 99)
  {
    computer = 'S';
  }
  printf("\t\t\t\t\t Enter the user input\n \t\t\t\t for rock enter R,for paper enter P and for scizzor enter S\n");
  scanf("%c",&user);
  result = game(user,computer);
  printf("\nUser choose %c and computer choose %c",user,computer);
  if (result == 1)
  {
    printf("\n\t\t\t\t\t Computer Won");
  }
  if (result == 2)
  {
    printf("\n\t\t\t\t\t User Won");
  }
  else printf("\n\t\t\t\t\t Game draw");
  
  

}
