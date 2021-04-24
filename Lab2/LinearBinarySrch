#include <stdio.h>
int binarysearch(int a[], int, int, int);
void sort(int [], int);
int linear(int a[], int, int);
int main()
{
    int choice;
    int n, i, a[10], key, pos = 0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched\n");
    scanf("%d",&key);
    printf("\nChoose one:\n1.linear search\n2.binary search\n3.Exit\n");
    printf("Your choice:");
    scanf("%d",&choice);
    while(choice!=3){
        switch(choice){
            case 1:pos = linear(a, n, key);
                if(pos>0)
                {
                    printf("element %d is found at %dth position",key, pos);
                }
                else
                {
                    printf("element not found\n");
                }
                break;
            case 2:sort(a, n);
                   pos = binarysearch(a,0,n-1,key);
                    if (pos < 0 )
                        printf("Cannot find the element %d in the array.\n",key);
 
                    else
                        printf("The position of %d in the array is %d.\n", key, pos+1);
                    break;
            default:printf("Invalid choice!");
        }
        printf("\nChoose one:\n1.linear search\n2.binary search\n3.Exit\n");
        printf("Your choice:");
        scanf("%d",&choice);
    }
    return 0;
    
}
void sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<size;i++)
        printf("%d\n",list[i]);

}
int binarysearch(int a[], int low, int high, int x) {
   int mid = (low + high) / 2;
   if (low > high) return -1;
   if (a[mid] == x) return mid;
   
   if (a[mid] < x) 
     return binarysearch(a, mid + 1, high, x);
   else 
     return binarysearch(a, low, mid-1, x);
}
int linear(int a[], int n, int key)
{
    if(n>=0)
    {
        if(a[n-1] == key)
        {
            return n;
        }
        else
        {
            return linear(a, n-1, key);
            n--;
        }
    }
}
