#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 2, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0};
    int max_freq = 0;
    int element_with_max_freq = -1;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++; 
        if (count[arr[i]] > max_freq) {
            max_freq = count[arr[i]];
            element_with_max_freq = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d\n", element_with_max_freq);
    printf("So lan xuat hien: %d\n", max_freq);

    return 0;
}

