#include <stdio.h>

int main() {
    int n;
    printf("Nhap so thang: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Can it nhat 2 thang de thuc hien mua va ban!\n");
        return 1;
    }

    int prices[n];
    
    printf("Nhap gia co phieu cua tung thang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int buyPrice = prices[0];
    int minLoss = 0; 
    int sellMonth = 1;
    
    minLoss = prices[1] - buyPrice;
    sellMonth = 2;
    
    for (int i = 1; i < n; i++) {
        int diff = prices[i] - buyPrice; 
        if (diff < 0 && diff > minLoss) {
            minLoss = diff;
            sellMonth = i + 1;
        } else if (diff >= 0 && minLoss < 0) {
            minLoss = diff;
            sellMonth = i + 1;
        } else if (diff > minLoss) {
            minLoss = diff;
            sellMonth = i + 1;
        }
    }

    printf("\nGia mua vao (thang 1): %d\n", buyPrice);
    printf("Gia ban tot nhat (thang %d): %d\n", sellMonth, prices[sellMonth - 1]);
    
    if (minLoss < 0)
        printf("Ban se lo it nhat: %d\n", -minLoss);
    else if (minLoss > 0)
        printf("Ban se lai: %d\n", minLoss);
    else
        printf("Ban hoa von (khong loi, khong lo).\n");

    return 0;
}

