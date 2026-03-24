#include <stdio.h>
void sorting(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return;
}
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sorting(arr,n);
    return 0;
}