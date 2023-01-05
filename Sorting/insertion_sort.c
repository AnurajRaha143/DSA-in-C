#include <stdio.h>
#include <math.h>

void insertionsort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {

            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, arr[] = {34, 55, 22, 12, 5, 23};
    n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    printarray(arr, n);
    return 0;
}