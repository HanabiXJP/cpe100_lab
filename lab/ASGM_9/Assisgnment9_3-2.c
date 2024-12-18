//guess number : Intermediate
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
int index_status(int num){
    char word;
    printf("Start/Continue Playing Guess Number Game? (y/n): ");
    scanf(" %c", &word);
    if(word == 'y'){
        return 1;
    }
    else if(word == 'n'){
        return -1;
    }
}

int main(){
    int numrand ,status, index = 1, indexnum = 0, score = 0, rdplayed = 0;
    srand(time(NULL)); //ค่าตั้งต้นของการ random
    index = index_status(indexnum);
    while(index != -1)
    {
        numrand = rand()%100+1;
        status = guess_number(numrand); 
        for (int i=0; i < 6; i++){
            if (status == 1){
                printf("Your number is upper.\n");
                status = guess_number(numrand);
            }
            else if (status == -1)
            {
                printf("Your number is lower.\n");
                status = guess_number(numrand);
            }
            else if (status == 0){
                printf("Correct, You win.\n");
                score++;
                break;
            }
        }
        if (status != 0){
            printf("You lose.\n");
        }
        rdplayed++;
        index = index_status(indexnum);
    }
    printf("Total Score : %d\n", score);
    printf("Total number of rounds played : %d\n", rdplayed);
    printf("End of Program");
    return 0;
    
}
