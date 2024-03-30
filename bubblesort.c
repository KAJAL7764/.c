#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int k = 0; k < size; ++k)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
}
int main()
{
    int data[] = {8, 9, 12, 15, 18, 3, 2};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Original array:-");
    printArray(data, size);
    bubbleSort(data, size);
    printf("Sorted array in ascending order:- ");
    printArray(data, size);
    return 0;
}