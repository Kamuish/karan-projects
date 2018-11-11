#include <stdio.h>

int main(){

    int flag = 0; // flag to avoid repeating comparisons
    for (int i = 1; i<= 100; i++){

        flag = 0;
        if (0 == i % 3 ){
            flag = 1;
            printf("Fizz");
        } 
        if (0 == i % 5){
            flag = 1;
            printf("Buzz");
        }

        flag ? printf("\n"): printf("%d \n",i);
        
    }

}