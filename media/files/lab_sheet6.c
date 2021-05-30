#include <stdio.h>
int linearSearch(int arr[], int n, int x)
{
    int i, z;
    for (i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            z = i;
            break;
        }
        else
        {
            z = -1;
        }
        
    }
    return z;
}

int binarySearch(int arr[], int n, int x)
{
    int lower, upper, mid;
    upper = n-1; lower = 0;
    while (lower <= upper)
    {
        mid = (lower + upper)/2;
        if (x > arr[mid])
        {
            lower = mid + 1;
        }
        else if (x < arr[mid] )
        {
            upper = mid - 1;
        }
        else 
        {
            return mid;
        }
        
    }
    return -1;
}

void bubblesortDec(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
            int temp  = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
}
void main()
{
    int List[10], n = 10;
    int p;
    printf("PLease choose from the following options:\n 1.for Linear Search\n 2.for Binary Search\n 3.for Bubblesort\n 4.to exit \n");
    scanf("%d", &p);
    while (1)
    {
        if (p == 1)
        {
            printf("Enter 10 numbers\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &List[i]);
            }
            int key;
            printf("Enter element to search: ");
            scanf("%d", &key);
            int c = linearSearch(List, n, key);
            if (c != -1)
            {
                printf("The element was found at %d position", c);
            }
            else
            {
                printf("The element was not found.");
            } 
            break;
        }
        else if (p == 2)
        {
            printf("Enter 10 numbers\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &List[i]);
            }
            int key;
            printf("Enter element to search: ");
            scanf("%d", &key);
            int c = binarySearch(List, n, key);
            if (c != -1)
            {
                printf("The element was found at %d position", c);
            }
            else
            {
                printf("The element was not found.");
            } 
            break;
        }
        else if (p == 3)
        {
            printf("Enter 10 numbers\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d ", &List[i]);
            }
            bubblesortDec(List, n);
            printf("The descending order of the array is: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", List[i]);
            }
            printf("\n");
            printf("The ascending order of the array is:");
            for (int i = n-1; i >= 0; i--)
            {
                printf("%d ", List[i]);
            }
            break;
        }
        else if (p == 4)
        {
            printf("Bye Bye SearchNSort!");
            break;
        }
        else
        {
            continue;
        }
    }
    return;
}
