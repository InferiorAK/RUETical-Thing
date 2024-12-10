// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Koita Songkha: ");
    scanf("%d", &n);
    printf("Enter %d Songkha:\n", n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    int num;
    printf("Songkha going to be searched: ");
    scanf("%d", &num);

    for (int i=0; i<n; i++){
        if (arr[i] == num){
            printf("### %d Found at Position %d\n", num, i+1);
            return 0;
        }
    }
    printf("### %d is not Found\n", num);
}