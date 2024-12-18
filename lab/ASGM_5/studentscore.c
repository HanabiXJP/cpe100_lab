#include <stdio.h>

int main() {
    int scores[10];
    int numStudents = 0;
    int totalScore = 0;
    int lowestScore = 100;
    int lowestStudent = -1;

    printf("Enter student scores (type -1 to start calculation)\n");

    int score;
    while (1){
        printf("Enter score of student %d : ", numStudents + 1);
        scanf("%d", &score);

        if (score == -1) {
            break;
        }
        if (numStudents >= 9) {
            printf("Maximum number of students reached (10).\n");
            break;
        }
        scores[numStudents] = score;
        totalScore += score;

        if (score < lowestScore) {
            lowestScore = score;
            lowestStudent = numStudents + 1;
        }
        numStudents++;
    }

    if (numStudents == 0) {
        printf("No scores entered.\n");
    }else{
        double average = ((double)totalScore / numStudents);
        printf("The minimum score is %d.\n", lowestScore);

        if (lowestStudent != -1) {
            printf("Student %d hasa the minimum score.\n", lowestStudent);
        }
    }
    return 0;
}