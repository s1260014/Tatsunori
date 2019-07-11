#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int x,a,b;
  char name[20];
  
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);
    
  srand((unsigned int)time(NULL));
  
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;

  x = a + b;

  printf("Rolling the dice\n");
  printf("Dice 1:%d\n",a);
  printf("Dice 2:%d\n",b);
  printf("Total value:%d\n",x);

  if(x > 7 || a == b) printf("%s won!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}


