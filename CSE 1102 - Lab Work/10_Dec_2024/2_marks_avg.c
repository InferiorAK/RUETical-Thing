// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number of Stdnts: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    int total_marks = 0;
    for (int i=0; i<n; i++) total_marks += arr[i];
    float avg = (float) total_marks / n;
    printf("Average Mark: %f\n", avg);
}