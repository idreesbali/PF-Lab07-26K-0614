#include <stdio.h>
int main() {
    float marks[10];

    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 20) {
                printf("Invalid marks! Enter a value between 0 and 20.\n");
            }

        } while (marks[i] < 0 || marks[i] > 20);
    }
    float avg, sum = 0;
    for(int j=0; j< 10; j++) {
        printf("\nMarks: %.2f\nRemarks: ",marks[j]);
        if(marks[j]>=18) {
            printf("Excellent\n");
        } else if(marks[j]>=14) {
            printf("Good\n");
        } else if(marks[j]>=10) {
            printf("Average\n");
        } else {
            printf("Need Improvement\n");
        }
        sum+=marks[j];
    }
    avg = sum / 10;
    int count=0;
    for(int k=0; k<10; k++) {
        if(marks[k]>avg) {
            count++;
        }
    }
    printf("\nAverage of class: %.2f\n", avg);
    printf("Number of students who scored above the class average: %d\n", count);
    for(int l=0; l<10; l++) {
        marks[l]+=1.5;
        if(marks[l] > 20) {
            marks[l] =20;
        }
    }
    sum=0,avg=0;
    printf("After Adding Bonus Marks: \n");
    for(int i = 0; i<10; i++) {
        printf("Marks of Student %d: %.2f\n", i+1, marks[i]);
        sum+=marks[i];
    }
    avg = sum /10;
    printf("Average of class: %.2f", avg);
    return 0;
}