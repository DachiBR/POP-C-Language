#include <stdio.h>
#include <stdlib.h>
 
long int find_min(long int arr[], int L, int R){
    long int min = arr[L];
    for (int i = L;i<=R;i++){
        if (arr[i] < min){
                min=arr[i];
            }
    }
    return min;
}
 
void Merge(long int arr[], int L, int M, int R)
{
    int i, j, k;
    int n1 = M - L + 1;
    int n2 = R - M;
    int n3 = (R - L)+1;
 
    int left_arr[n1], right_arr[n2], merged_arr[n3];
 
    for (i = 0; i < n1; i++){
        left_arr[i] = arr[L + i];
    }
    for (j = 0; j < n2; j++){
        right_arr[j] = arr[M + 1 + j];
    }
 
    i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            merged_arr[k] = left_arr[i];
            i++;
        }
        else {
            merged_arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        merged_arr[k] = left_arr[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        merged_arr[k] = right_arr[j];
        j++;
        k++;
    }
 
    int pos = L;
    for (i=0;i<k;i++){
        arr[pos]=merged_arr[i];
        pos++;
    }
}
 
void MergeSort(long int init_arr[],long int arr[], int L, int R)
{
    long int min, Lmin, Rmin;
    int M = (L + R) / 2;
    if (L < R - 1) {
        if (L<M) MergeSort(init_arr,arr, L, M);
        Lmin = find_min(arr, L, M);
        if (M+1 < R) MergeSort(init_arr,arr, M + 1, R);
        Rmin = find_min(arr, M + 1, R);
        printf("[%d:%d:%d] %d [%d %d]\n", L, M, R, init_arr[M], Lmin, Rmin);
    }
    if (L<R) {Merge(arr, L, M, R);}
}
 
int main()
{ 
    long int n, num;
    scanf("%ld", &n);
    
    long int init_arr[n];
    long int arr_cpy[n];
    
    for (long int i=0;i<n;i++){
        scanf("%d", &num);
        init_arr[i] = num;
        arr_cpy[i]=num;
    }
 
    for (long int i=0;i<n;i++){
        printf("%d ", init_arr[i]);
    }
    printf("\n");
 
    MergeSort(init_arr, arr_cpy, 0, n-1);
    
    for (long int i=0;i<n;i++){
        printf("%d ", arr_cpy[i]);
    }
    printf("\n");
}