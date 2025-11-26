#include <stdio.h>

int main() {
    int a[100], n, i;
    int max1, max2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize
    max1 = max2 = -999999;

    for(i = 0; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    if(max2 == -999999)
        printf("No second maximum value found.\n");
    else
        printf("Second maximum value is: %d\n", max2);

    return ;
}
