#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\n\nMang sau khi loai bo trung lap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

