#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);


    printf("Enter the elements of the sequence:\n");
    for (i = 0; i < n; i++) {
        float num;
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;
    printf("The average of the sequence is %f\n", avg);

    return 0;
}
