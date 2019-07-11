#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand((unsigned int)time(NULL));
  int one,two,three;
  int total;
  char name[10];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  one=rand()%6+1;
  two=rand()%6+1;
  three=rand()%6+1;
  printf("Die 1: %d\n",one);
  printf("Die 2: %d\n",two);
  printf("Die 3: %d\n",three);
  total=one+two+three;
  printf("Total value: %d\n",total);
  if(total>7) printf("%s won\n",name);
  else printf("%s lost\n",name);
  if(one==two && two==three) printf("At luck would have it, Repdigit\n");
  return 0;
}

