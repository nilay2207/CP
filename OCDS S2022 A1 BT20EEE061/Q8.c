
//Name :- Pranav Mailarpawar
//Roll No:- BT20EEE061



#include <stdio.h>

int Merge(int arr[],int temp[], int start, int mid, int end)
{
    int k = start ;
    int i = start; 
    int j = mid + 1;
    int inversions = 0;
 
    
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j]) {
        temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);  
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i];
    }
 return inversions;
}


int MergeSort(int arr[], int temp[], int start, int end)
{
    
    if (end <= start) {        
        return 0;
    }
    int mid = (start + ((end - start) >> 1));
    int inversions = 0;
    inversions += MergeSort(arr, temp, start, mid);
    inversions += MergeSort(arr, temp, mid + 1, end); 
    inversions += Merge(arr, temp, start, mid, end);
 
    return inversions;
}


int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[100];
    int temp[100];
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){

        temp[i]=arr[i];

    }
    
    
    printf("Total number of inversion  is %d", MergeSort(arr, temp, 0, n - 1));
 
    
}