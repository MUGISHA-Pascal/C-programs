// #include <stdio.h>

// // Function to swap two elements
// void swap(int *xp, int *yp) {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// // Function to implement selection sort
// void selectionSort(int arr[], int n) {
//     int i, j, min_idx;
//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n-1; i++) {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i+1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         // Swap the found minimum element with the first element
//         swap(&arr[min_idx], &arr[i]);
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// // Driver program to test above functions
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Unsorted array: \n");
//     printArray(arr, n);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }

//my selection sort
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
};
void selectionSort(int array[],int n){
    int i,j,min_idx;
    for(i=0;i < n-1 ;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
        if (array[j]<array[min_idx]){
            min_idx=j;
        }
        }
    swap(&array[i],&array[min_idx]);
    }
};
int main(){
    int i;
     int array[]={2,3,5,1};
     int n=sizeof(array)/sizeof(array[0]);
     selectionSort(array,n);
     for(i=0;i<n;i++){
        printf("%d",array[i]);
     };
    return 0;
}