#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
       int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[min], &arr[i]);
        }
    }
    
}
void print_array(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main()
{
    int arr[] = {3, 12, 2, 67, 5, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    printf("After selection sort the sorted array is :\n");
    selection_sort(arr,n);
    print_array(arr,n);
}