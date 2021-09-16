#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "Sorts.h"

void delay(int number_of_seconds) {
  // Converting time into milli_seconds
  int milli_seconds = 1000 * number_of_seconds;
  // Storing start time
  clock_t start_time = clock();
  // looping till required time is not achieved
  while (clock() < start_time + milli_seconds) ; }

int combSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Comb sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  int scalar = 1;
  int n = 0;
  

  while(done == 0 || j > i + 1) 
  {
    scalar *= 2;
    i = 0;
    j = size / scalar + 1;
    passes += 1;
    done = 1;

    while(j < size)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += 1;
      j += 1;
      comps += 1;
      n = 0;

      printf("\n\n[%d]", listToSort[n]);
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
    /*n = 0;

    printf("\n[%d]", listToSort[n]);
  
    n += 1;

    while(n < size)
    {
      printf(", [%d]", listToSort[n]);
      n += 1;
    }
    printf("  |Pass %d|, |%d comps|, |%d swaps|", passes, comps, swaps);
    
    */
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

int cocktailSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Cocktail sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = 0;
    j = 1;
    passes += 1;
    done = 1;

    while(j < size - 1)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += 1;
      j += 1;
      comps += 1;
      n = 0;
      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
      
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
    while(i > 0)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += -1;
      j += -1;
      comps += 1;
      n = 0;

      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
        } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
        }
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
   /* n = 0;
  
    printf("\n[%d]", listToSort[n]);
  
    n += 1;

    while(n < size)
    {
      printf(", [%d]", listToSort[n]);
      n += 1;
    }
    printf("  |Pass %d|, |%d comps|, |%d swaps|", passes, comps, swaps); */
  }

  n = 0;
  
  printf("\n\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

void gnomeSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Gnome sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = 0;
    j = 1;
    passes += 1;
    done = 1;

    while(j < size)
    {
      if (listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
        if(i > 0) {
        i -= 1;
        j -= 1;
        }
      comps += 1;
      n = 0;
      } else {
      i += 1;
      j += 1;
      comps += 1;
      n = 0;
      }
      delay(userDelay);
      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
      n += 1;

      while(n < size)
      {
       if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      /**/
    }   done = 1;
  }

  n = 0;
  
  printf("\n\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return;
}

int bubbleSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Bubble sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = 0;
    j = 1;
    passes += 1;
    done = 1;

    while(j < size)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += 1;
      j += 1;
      comps += 1;
      n = 0;

      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
   // n = 0;
  
   // printf("\n[%d]", listToSort[n]);
  
   // n += 1;

   // while(n < size)
   // {
    //  printf(", [%d]", listToSort[n]);
    //  n += 1;
    //}
    //printf("  |Pass %d|, |%d comps|, |%d swaps|", passes, comps, swaps);
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

int oddEvenSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Odd Even sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = 0;
    j = 1;
    passes += 1;
    done = 1;

    while(j < size)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += 2;
      j += 2;
      comps += 1;
      n = 0;

      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
    i = 1;
    j = 2;
    passes += 1;
    
    while(j < size)
    {
      if(listToSort[j] < listToSort[i]) {
        a = listToSort[j];
        listToSort[j] = listToSort[i];
        listToSort[i] = a;
        done = 0;
        swaps += 1;
      }
      i += 2;
      j += 2;
      comps += 1;
      n = 0;

      if(n == i - 1 || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
      n += 1;

      while(n < size)
      {
        if(n == i - 1 || n == j - 1){
          printf(", >%d<", listToSort[n]);
          n += 1;
        } else {
          printf(", [%d]", listToSort[n]);
          n += 1;
        }
      }
      delay(userDelay);

    }
   // n = 0;
  
   // printf("\n[%d]", listToSort[n]);
  
   // n += 1;

   // while(n < size)
   // {
    //  printf(", [%d]", listToSort[n]);
    //  n += 1;
    //}
    //printf("  |Pass %d|, |%d comps|, |%d swaps|", passes, comps, swaps);
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

int grateSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Grate sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = -1;
    passes += 1;
    done = 1;
    j = size - 1;
    while (i < size - 1) 
    {
    i += 1;
    j = size - 1;
    
    while(j > i && listToSort[i] < listToSort[j])
      {
        j -= 1;
        
        
        comps += 1;
        n = 0;

        if(n == i || n == j - 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
        n += 1;

        while(n < size)
        {
          if(n == i - 1 || n == j - 1){
            printf(", >%d<", listToSort[n]);
           n += 1;
           } else {
            printf(", [%d]", listToSort[n]);
            n += 1;
          }
        }
        delay(userDelay);

      }
      if (listToSort[j] < listToSort[i]){
        a = listToSort[j];
          listToSort[j] = listToSort[i];
          listToSort[i] = a;
          done = 0;
          swaps += 1;
      }
    }
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

int sandPaperSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Sandpaper sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = -1;
    passes += 1;
    done = 1;
    j = size - 1;
    while (i < size - 1) 
    {
    i += 1;
    j = size - 1;
    
    while(j > i )
      {
        if (listToSort[j] < listToSort[i]){
        a = listToSort[j];
          listToSort[j] = listToSort[i];
          listToSort[i] = a;
          swaps += 1;
        }
        j -= 1;
        
        
        comps += 1;
        n = 0;

        if(n == i|| n == j + 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
        n += 1;

        while(n < size)
        {
          if(n == i || n == j + 1){
            printf(", >%d<", listToSort[n]);
           n += 1;
           } else {
            printf(", [%d]", listToSort[n]);
            n += 1;
          }
        }
        delay(userDelay);

      
      
      }
    }
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}

void callStoogeRecurse(int i, int j, int toSort[], int userDelay, int size){
  int n;
  n = 0;

    if(n == i || n == j){
          printf("\n\n>%d<", toSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", toSort[n]);
          n += 1;
      }
  
    n += 1;

    while(n < size)
    {
      if(n == (i) || n == (j - 1)){
        printf(", >%d<", toSort[n]);
        n += 1;
        } else {
        printf(", [%d]", toSort[n]);
        n += 1;
      }
    }
    delay(userDelay);
  stooge(i, j - 1, toSort, userDelay, size);
  return;
}
void stooge(int i, int j, int toSort[], int userDelay, int size){
  int k;
  int n;
  int comps = 0;
  int swaps = 0;
  int passes = 1;

  if (j > i) {
    if (toSort[j] < toSort[i]) {
      k = toSort[j];
      toSort[j] = toSort[i];
      toSort[i] = k;
    }
    n = 0;

    if(n == i || n == j){
          printf("\n\n>%d<", toSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", toSort[n]);
          n += 1;
      }
  
    n += 1;

    while(n < size)
    {
      comps += 1;
      if(n == (i) || n == (j)){
        printf(", >%d<", toSort[n]);
        n += 1;
        swaps += 1;
        } else {
        printf(", [%d]", toSort[n]);
        n += 1;
      }
    }
    delay(userDelay);
    if (j - i + 1 > 2) {
      int t = (j - i + 1) / 3;
      stooge(i, j - t, toSort, userDelay, size);
      stooge(i + t, j, toSort, userDelay, size);
      stooge(i, j - t, toSort, userDelay, size);
    }
  }
  
  return;
}

int reverseSandPaperSort(int i, int j, int listToSort[], int size, int userDelay) {

  printf("    Reverse Sandpaper sort\n\n======================\n");
  
  int comps = 0;
  int swaps = 0;
  int done = 0;
  int a = 0;
  int passes = 0;
  
  int n = 0;

  while(done == 0) 
  {
    i = -1;
    passes += 1;
    done = 1;
    j = i;
    while (i < size - 1) 
    {
    i += 1;
    j = i + 1;
    
    while(j < size )
      {
        if (listToSort[j] < listToSort[i]){
        a = listToSort[j];
          listToSort[j] = listToSort[i];
          listToSort[i] = a;
          swaps += 1;
        }
        j += 1;
        
        
        comps += 1;
        n = 0;

        if(n == i|| n == j + 1){
          printf("\n\n>%d<", listToSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", listToSort[n]);
          n += 1;
      }
  
        n += 1;

        while(n < size)
        {
          if(n == i || n == j + 1){
            printf(", >%d<", listToSort[n]);
           n += 1;
           } else {
            printf(", [%d]", listToSort[n]);
            n += 1;
          }
        }
        delay(userDelay);

      
      
      }
    }
  }

  n = 0;
  
  printf("\n[%d]", listToSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", listToSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);

  return done;
}



void selectionSort(int i, int j, int toSort[], int size, int userDelay){
  
  printf("    Selection Sort\n\n======================\n");
  
  i = 0;
  j = 0;
  int n = 0;
  int h = 0;
  int comps = 0;
  int swaps = 0;
  int passes = 0;

  while(i < size){
    j = i;
    h = toSort[i];
    while (j < size)
    {
      h = (toSort[j] < toSort[h]) ? j : h;
      comps += 1;
      j += 1;
      n = 0;

        if(n == i|| n == j + 1){
          printf("\n\n>%d<", toSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", toSort[n]);
          n += 1;
      }
  
        n += 1;

        while(n < size)
        {
          if(n == i || n == j + 1){
            printf(", >%d<", toSort[n]);
           n += 1;
           } else {
            printf(", [%d]", toSort[n]);
            n += 1;
          }
        }
    delay(userDelay);
      
    }
    
    j = toSort[h];
    toSort[h] = toSort[i];
    toSort[i] = j;
    swaps += 1;
    i += 1;
    n = 0;

        if(n == i|| n == j + 1){
          printf("\n\n>%d<", toSort[n]);
          n += 1;
      } else {
          printf("\n\n[%d]", toSort[n]);
          n += 1;
      }
  
        n += 1;

        while(n < size)
        {
          if(n == i || n == j + 1){
            printf(", >%d<", toSort[n]);
           n += 1;
           } else {
            printf(", [%d]", toSort[n]);
            n += 1;
          }
        }
    delay(userDelay);
  }
  n = 0;

  passes += 1;
  
  printf("\n[%d]", toSort[n]);
  
  n += 1;

  while(n < size)
  {
    printf(", [%d]", toSort[n]);
    n += 1;
  }

  printf("  |List Sorted in %d comparisons and %d swaps after %d passes|\n======================\n", comps, swaps, passes);
}