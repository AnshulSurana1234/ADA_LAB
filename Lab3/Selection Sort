#include <stdio.h>
#include<time.h>
int main()
{
    int n, i, j, temp;
    clock_t start, end;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
   printf("\n The elements are: \n");
    for(i=0;i<n;i++)
    {
        arr[i] = rand()%10000;
        printf("%d ",arr[i]);
    }
    start=clock();
    for(i=0;i<80000000;i++);
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    end=clock();
    printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
