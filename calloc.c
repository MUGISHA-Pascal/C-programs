#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(3 , sizeof(int));
    ptr[0] = 1;  
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3]=4;
   ptr[4]=5;
   int i;
    for(i=0;i<5;i++){
        printf("%d",ptr[i]);
    }
    free(ptr);
    return 0;
}
