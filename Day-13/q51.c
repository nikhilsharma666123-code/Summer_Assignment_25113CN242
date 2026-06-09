#include <stdio.h>

int main() {
    int a[5] = {10, 20, 5, 40, 15};
    int i, largest = a[0], smallest = a[0];

    for(i = 1; i < 5; i++) {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}