#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "utilities.h"

int isDuplicate(int arr[], int num, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}
void generate(int arr[], int lower, int upper, int count) {
    if (upper - lower + 1 < count) {
        printf("Cannot generate distinct random numbers within the given range.\n");
        return;
    }

    srand(time(0));

    int generated = 0;
    while (generated < count) {
        int randomNum = (rand() % (upper - lower + 1)) + lower;
        if (!isDuplicate(arr, randomNum, generated)) {
            arr[generated] = randomNum;
            generated++;
        }
    }
}
// int main() {
//     freopen("in.txt","r",stdin);
//     freopen("out.txt","w",stdout);
//     int lower, upper;
//     int numCount = 10;
//     int randomNumbers[numCount];

//     printf("Enter the lower bound of the range: ");
//     scanf("%d", &lower);

//     printf("Enter the upper bound of the range: ");
//     scanf("%d", &upper);

//     if (lower > upper) {
//         printf("Invalid range. Lower bound should be less than or equal to the upper bound.\n");
//         return 1;
//     }

//     generate(randomNumbers, lower, upper, numCount);

//     printf("Generated distinct random numbers:\n");
//     for (int i = 0; i < numCount; i++) {
//         printf("%d ", randomNumbers[i]);
//     }

//     printf("\n");

//     return 0;
// }