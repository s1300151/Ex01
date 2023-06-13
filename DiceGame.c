#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, dice, total=0;

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
