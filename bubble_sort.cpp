#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int *arr, int n)
{
    int i, j;
    for ( int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
 void printArray(int arr[], int size)
 {
     int i;
     for (i = 0; i < size; i++)
         printf("%d ", arr[i]);
     printf("\n");
 }
int main()
{
    int arr[6] = {2, 10, 9, 7, 11, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
