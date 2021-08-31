#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Enter two integers:\n");
    char xc1[256], xc2[257];
    fgets(xc1, 257, stdin);
    fgets(xc2, 257, stdin);
    int x1, x2;
    sscanf(xc1, "%d", &x1);
    sscanf(xc2, "%d", &x2);
    swap(&x1, &x2);
    printf("Swapped: %d %d\n", x1, x2);
    return 0;
}
