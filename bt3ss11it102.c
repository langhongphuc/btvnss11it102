#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Nh?p ph?n t? c?n t?m: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        printf("Không t?m th?y ph?n t? trong mang.\n");
    } else {
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, result);
    }
    
    
    int binarySearch(int arr[], int l, int r, int x){
}
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return -1;
    
	return 0;
}

