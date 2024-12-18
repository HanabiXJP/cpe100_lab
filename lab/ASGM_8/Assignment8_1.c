#include <stdio.h>

int main()
{
    FILE *readfile, *writefile;
    char fileName[100], name[100];
    int score, sum = 0, min = 0, max = 0, i=0;
    float avg;
    printf("Enter a file name to load student scores:");
    scanf("%s", fileName);
    readfile = fopen(fileName, "r");
    writefile = fopen("stat.txt", "w");
    while (fscanf(readfile, "%s %d", name, &score) != EOF)
    {
        printf("Student %d: %s, Score = %d\n", i+1, name, score);
        sum += score;
        if (i==0) 
        min = max = score;
        else 
        {
            if (score < min)
            min = score;
            else if (score > max)
            max = score;
        }
        i++;
    }
    avg = sum/i;
    printf("Average score is %.2f. \nMinimum score is %d.\nMaximum score is %d.\n", avg, min, max);
    fprintf(writefile, "Average score is %d. \nMinimum score is %d.\nMaximum score is %d.", avg, min, max);
    fclose(readfile);
    fclose(writefile);
    printf("Save statistics in file stat.txt successfully.\n");
    printf("End of program. Goodbye.");
    return 0;
}
