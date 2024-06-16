// my insertion sort
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
};
void insertionSort(int array[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j>0;j--){
        if (array[j]<array[j-1]){
            swap(&array[j],&array[j-1]);
        }
        }
    }
};
int main(){
    int array[]={20,5,9,7,8};
    int i;
    int n = sizeof(array)/sizeof(array[0]);
    insertionSort(array,n);
      for(i=0;i<n;i++){
        printf("%d",array[i]);
     };
    return 0;
}