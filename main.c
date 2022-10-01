#include <stdio.h>
int main()
{
    int pos;
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nElements of array after delete are : ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}