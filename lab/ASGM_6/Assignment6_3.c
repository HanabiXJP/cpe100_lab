#include <stdio.h>
#include<string.h>

int main(){
    char word[10][10],i,j=0;
    printf("Enter student names (type END to print all names)");
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter name of student %d :",i+1);
        scanf("%s",&word[i]);
        if(strcmp(word[i],"END") == 0){
            break;
        }
    }
    
    printf("Name list:");
    while(j<i){
        printf(" %s",word[j]);
        j++; 
    }
    
    return 0;
}