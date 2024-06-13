#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(3 * sizeof(int));
    ptr[0] = 1;  
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3]=4;
    ptr[4]=5;
    printf("%d", ptr[3]); 
    free(ptr);
    return 0;
}
