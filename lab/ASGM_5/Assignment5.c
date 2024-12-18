//ไม่มีการกัน Error!
#include <stdio.h>
int main(){
    int score[10];
    int scoArrlength = 0;
    printf("Enter student scores (type -1 to start calculation)\n");
    int i,input;
    for(i=0 ;i < 10 ; i++)
    {
        printf("Enter score of student %d: ",i+1);
        scanf("%d",&input);
        if(input == -1){
            break;
        }
        score[i] = input;
        scoArrlength++;
    }

    int min = score[0];
    for (i = 0; i < scoArrlength; i++)
    {   
        if(score[i] < min)
        {
            min = score[i];
            scoArrlength = i+1;
        }
    }
    printf("The minimum score is %d\n", min);
    printf("Student %d has minimum score", scoArrlength);
    return 0;
}