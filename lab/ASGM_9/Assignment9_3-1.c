//guess number : Beginner
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int guess_number(int num){
    int number;
    printf("Guess number 1-100 : ");
    scanf(" %d",&number);
    if (number > num){
        return 1;
    }
    else if (number < num){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int numrand ,status;
    srand(time(NULL)); //ค่าตั้งต้นของการ random
    numrand = rand()%100+1; 
    for (int i=0; i<7; i++){
        status = guess_number(numrand); 
        if (status == 1){
            printf("Your number is upper.\n");
        }
        else if (status == -1)
        {
            printf("Your number is lower.\n");
        }
        else{
            printf("Correct, You win.\n");
            break;
        }
    }
    if (status != 0){
        printf("You lose.\n");
    }
    return 0;
    
}
