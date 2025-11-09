#include <stdio.h>
#include <string.h>

int main() {
    // Kh?i t?o m?ng chu?i
    char arr[][50] = {"tao", "chuoi", "cam", "nho", "xoai"};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    char search[50];
    int found = 0;

    printf("Nhap chuoi can tim: ");
    fgets(search, sizeof(search), stdin);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], search) == 0) {
            printf("Tim thay chuoi \"%s\" tai vi tri %d trong mang.\n", search, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Khong tim thay chuoi \"%s\" trong mang.\n", search);
    }
    
    return 0;
}

