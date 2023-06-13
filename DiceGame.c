#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char name[10];

void great(){
  printf("What is your name?\n>");
  scanf("%s", &name);
  printf("Hello, %s!\n", name);
}

int main(){
  int i, dice, total=0;

  great();

  srand(time(NULL));
  printf("Rolling dice...\n");
  for(i=1; i<=2; i++){
    dice=rand()%6+1;
    printf("Die %d: %d\n", i, dice);
    total+=dice;
  }
  printf("Total value: %d\n", total);

  if(total>7){
    printf("%s won!\n", name);
  } else {
    printf("%s lost.\n", name);
  }

  return 0;
}
