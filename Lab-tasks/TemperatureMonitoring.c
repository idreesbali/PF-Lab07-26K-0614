#include <stdio.h>
int main() {
    int temp[7] = {31, 33, 35, 34, 38, 36, 32};
    int high = temp[0], low = temp[0], sum=0;
    float avg = 0;
    for(int i=0; i < sizeof(temp) / sizeof(temp[0]); i++) {
        printf("Day %d: %d C\n", i+1, temp[i]);
        if(temp[i]>high) {
            high = temp[i];
        } 
        if(temp[i]<low) {
            low = temp[i];
        }
        sum+=temp[i];
    }
    printf("Highest Temperature: %d C", high);
    printf("\nLowest Temperature: %d C", low);
    int size = sizeof(temp) / sizeof(temp[0]);
    avg = (float) sum / size;
    printf("\nAverage Temperature: %.2f C\n", avg);
    temp[2]=37;
    sum=0, avg=0, high=temp[0], low=temp[0];
    printf("After error is corrected: \n");
    for(int i=0; i < sizeof(temp) / sizeof(temp[0]); i++) {
        printf("Day %d: %d C\n", i+1, temp[i]);
        if(temp[i]>high) {
            high = temp[i];
        } 
        if(temp[i]<low) {
            low = temp[i];
        }
        sum+=temp[i];
    }
    printf("Highest Temperature: %d C", high);
    printf("\nLowest Temperature: %d C", low);
    size = sizeof(temp) / sizeof(temp[0]);
    avg = (float) sum / size;
    printf("\nAverage Temperature: %.2f C\n", avg);
    for(int i=0; i < sizeof(temp) / sizeof(temp[0]); i++) {
        printf("Address of element %d: %p\n", i+1, &temp[i]);
    }
    // Consecutive addresses differ by sizeof(int) bytes,
    // showing that array elements are stored contiguously in memory.
}
