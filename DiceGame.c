#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand((unsigned int)time(NULL));
  int one,two;
  int total;
  char name[10];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  one=rand()%6+1;
  two=rand()%6+1;
  printf("Die 1: %d\n",one);
  printf("Die 2: %d\n",two);
  total=one+two;
  printf("Total value: %d\n",total);
  return 0;
}

