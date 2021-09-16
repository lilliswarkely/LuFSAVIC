/*_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_- 
* Luna's First Sorting Algorithm Visualizer in C
* 
* 2021/09/15 - LuF-SAVIC V0.0.7 Pre-Alpha
*
* Bugs may be present
*
* Author -- Logan (Luna) N. Willis
* Special thanks to Charlie Ferme for Grate sort.
*_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-*/





#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "Sorts.h"

  


int main(void) {
  
  printf("\n\nLuF-SAVIC V0.0.7 PreAlpha (This is the PreAlpha version so bugs may be present. Very early in Developement.)");
  int userInput;
  int a;
  int shuffleType;
  int userDelay;
  printf("\n\nInput your wanted delay in miliseconds -- ");
  scanf("%d", &userDelay);

  printf("\n\nInput list size\n\n");
  scanf("%d", &userInput);

  int mainList[userInput];
  int n = 0;

    while(n < userInput)
  {
    mainList[n] = n;
    n += 1;
  }
  
  n = 0;
  
  printf("\n[%d]", mainList[n]);
  
  n += 1;

  while(n < userInput)
  {
    printf(", [%d]", mainList[n]);
    n += 1;
  }

  printf("  |List Generated|\n");

  printf("\n\nInput the Shuffle you want.\nNormal -- 0  Reversed -- 1\nUnshuffled -- 2  Half sorted -- 3\nLess Shuffled -- 4\n\n");
  scanf("%d", &shuffleType);



  n = 0;
  int i = 0;
  int j = 0;
  int k = userInput - 1;

  if(shuffleType == 0) {
    while(n < userInput - 1)
    {
      i = rand() % (k - n);
      i = i + n + 1;
      j = mainList[i];
      mainList[i] = mainList[n];
      mainList[n] = j;
      n += 1;
    }
  } else if(shuffleType == 1) {
    while(n < ((userInput + 1) / 2) - 1)
    {
      i = userInput - n - 1;
      j = mainList[i];
      mainList[i] = mainList[n];
      mainList[n] = j;
      n += 1;
    }
  } else if(shuffleType == 3) {
    while(n < userInput / 2 - 1)
    {
      i = rand() % (k / 2 - n);
      i = i + n + 1;
      j = mainList[i];
      mainList[i] = mainList[n];
      mainList[n] = j;
      n += 1;
    }
  } else if(shuffleType == 4) {
    while(n < userInput - 1)
    {
      i = rand() % (k - n);
      i = i + n + 1;
      if (rand() % 10 == 1) {
        j = mainList[i];
        mainList[i] = mainList[n];
        mainList[n] = j;
      }
      n += 1;
    }
  }
  n = 0;
  
  printf("\n[%d]", mainList[n]);
  
  n += 1;

  while(n < userInput)
  {
    printf(", [%d]", mainList[n]);
    n += 1;
  }

  printf("  |List Shuffled|\n");

  int sortChosen;

  printf("\nChoose your sort\n\n  0 -- Bubble Sort  1 -- Cocktail Sort  2 -- Comb Sort  \n\n  3 -- Gnome Sort  4 -- Odd Even Sort  5 -- Grate Sort  \n\n  6 -- Sandpaper Sort  7 -- Stooge Sort  8 -- Reverse Sandpaper Sort  \n\n  9 -- Selection Sort\n\n");
  scanf("%d", &sortChosen);

  if(sortChosen == 0) {
    bubbleSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 1) {
    cocktailSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 2) {
    combSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 3) {
    gnomeSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 4) {
    oddEvenSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 5) {
    grateSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 6) {
    sandPaperSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 7) {
    callStoogeRecurse(0, userInput, mainList, userDelay, userInput);
  } else if(sortChosen == 8) {
    reverseSandPaperSort(i, j, mainList, userInput, userDelay);
  } else if(sortChosen == 9) {
    selectionSort(i, j, mainList, userInput, userDelay);
  } 
  return 0;
}

