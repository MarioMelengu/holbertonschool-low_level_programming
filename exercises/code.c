#include <stdio.h>

void calculateSumAndAverage(float arr[], int size, float *sum, float *average)
{
	int i;
    for (i = 0; i < size; i++) 
        *sum += arr[i]; 
    
    if (size > 0) 
		*average = *sum / size;
}

int main(void)
{
    float arr[] = {5.0, 3.5, 6.0, 2.5};
    int size = sizeof(arr) / sizeof(arr[0]);
    float sum;
    float average;

    calculateSumAndAverage(arr, size, &sum, &average);

    printf("Sum = %.1f\n", sum);
    printf("Average = %.2f\n", average);

    return (0);
}
