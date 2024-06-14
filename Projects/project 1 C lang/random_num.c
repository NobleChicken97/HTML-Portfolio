#include<stdio.h>
#include<stdlib.h> // for radnom number function//
#include<time.h> // for time(0) //

int main(){

    int number;
    srand(time(0)); /*initialise the function. Time 0 = function will be returned after 0 sec i.e immediatle. If we wont use time then always same number
    will be generated   */  
    number = rand()%100 + 1 ; // to make number generated be 1 to 100
    printf("%d \n", number);
    
    return 0;
}