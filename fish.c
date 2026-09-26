/*thank you w3shools*/
/*this code is cc0*/
/*created by trtl_playz*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//vars///////////////////////////////////////////
int numFish = 0;
int money = 0;

char option;

bool gameQuit = false;
//vars///////////////////////////////////////////

//wow c is so picky
//i tried to put my start func after main()
//it just wouldn't compile
void start() {
  printf("what would you like to do?\n");
  printf("(f) fish\n(s) shop\n(m) money stats\n(q) quit\n");
  scanf("%c", &option);
  printf("\n");

  //c to picky i cant even use "" around a quote
  //i have to use ''
  //wow insane
  //i honestly cant decide if i love how picky it is or hate it
  if(option == 'f'){
    //fish();
  }
  else if(option == 's'){
    //shop();
  }
  else if(option == 'm'){
    //stats();
  }
  else if(option == 'q'){
    printf("good bye\n");
    gameQuit = true;
  }
  else {
    printf("invalid option.\n"); 
    printf("%c\n", option);
  }
}

int main() {
  while(gameQuit == false) {
    start();
  }

  return 0;
}
