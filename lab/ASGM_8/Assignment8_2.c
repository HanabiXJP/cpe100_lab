#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[100];
    int score;
} student_info;

void InsertionSort(student_info student[], int n);
void swap(student_info *a, student_info *b);

int main()
{
    // start Enter file name
    FILE *read;
    char fileName[100];
    student_info student[100];
    printf("Enter a file name to load student scores: ");
    scanf("%s", fileName);
    read = fopen(fileName, "r");
    int i = 1;
    while (fscanf(read, "%s %d", student[i].name, &student[i].score) != EOF)
    {
        printf("Student %d:%s, Score = %d\n",i, student[i].name, student[i].score);
        i++;
    }
    //start Enter new student name
    char newName[100];
    do
    {
        printf("Enter new student name (type \"END\" to sort student score and end the program):");
        scanf("%s", newName);
        if(strcmp(newName, "END") == 0)
            break;
        printf("Enter %s's score: ",newName);
        strcpy(student[i].name, newName);
        scanf("%d", &student[i].score);
        i++;
    } while(1);
    fclose(read);
    printf("---------------Sort students by scores---------------\n");

    InsertionSort(student, i-1);
    
    for (int j=1; j<i; j++)
        printf("Student %d:%s, Score = %d\n",j, student[j].name, student[j].score);
    return 0;
}

//function to start student score using insertion sort
void InsertionSort(student_info student[], int n)
{
    int i,j;
    for(i=2; i<=n; i++)
    {
        j = i;
        while(j>1 && student[j].score < student[j-1].score)
        {
            swap(&student[j], &student[j-1]);
            j--;
        }
    }

}

//function to swap two student
void swap(student_info *a, student_info *b)
{
    student_info temp = *a;
    *a = *b;
    *b = temp;
} 