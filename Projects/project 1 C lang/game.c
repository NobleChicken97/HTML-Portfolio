#include<stdio.h>
#include<stdlib.h> // for radnom number function//
#include<time.h> // for time(0) //

int main(){

    int number;
    srand(time(0)); /*initialise the function. Time 0 = function will be returned after 0 sec i.e immediatle. If we wont use time then always same number
    will be generated   */  
    number = rand()%100 + 1 ; // to make number generated be 1 to 100
    
    // keep running loop until number is guessed
   
   int guess, nguesses=1;
    do {
    printf("Guess the number between 1 to 100\n");
    scanf("%d", &guess);
    if ( number < guess){
    printf("Lower number please \n");
    }

    else if(number > guess) {
        printf("higher number please \n");
    }

    else{
        printf("Congratulations U guessed it in %d attempts \n", nguesses);

    }
   nguesses++;
    } while(guess != number);
    return 0;

    // do while loop is used cause we need the program to at least run once
}