#include <stdio.h>


void collatz(int n, int* soma){
    // Recursive collatz conjecture
    if (1 == n){
            return;
        } else { 
            
            (*soma)++;
            if (0 == n % 2 ){  
                collatz(n/2,soma);
            } else{
                collatz(n*3 + 1,soma);
                
                }
        }
}
int main(){

    int x;
    int i = 0;
    int *soma = &i;
    scanf("%d",&x);

    if (x > 1){
        collatz(x, soma);
    }

    printf("\nNumber of steps: %d \n",*soma);
}