// mybubblesort
#include<stdio.h>
void swap(int *a,int *b){
 int temp= *a;
 *a=*b;
 *b=temp;
};
void bubble_sort(int array[],int n){
    int j;
    int i;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
           if (array[j]>array[j+1]){
            swap(&array[j],&array[j+1]);
           }
        }
    }
}
int main(){
    int array[]={2,5,9,1,3};
    int i;
    int n=sizeof(array)/sizeof(array[0]);
    bubble_sort(array,n);
     for(i=0;i<n;i++){
        printf("%d",array[i]);
     };
            return 0;
}