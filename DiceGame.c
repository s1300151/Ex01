#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void great(){
  char name[10];
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

  return 0;
}
