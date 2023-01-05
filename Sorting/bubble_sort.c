#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
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
 int arr[]={34,2,45,67,8,5,78};
 int n =sizeof(arr)/sizeof(int);
 bubble_sort(arr ,n);
 printf("array after bubble sort :\n");
 print_array(arr,n);
 
}