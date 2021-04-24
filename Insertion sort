#include<stdio.h>
#include<time.h>

int main()
{
    int a[100],n,i,j,min,temp;
   clock_t start, end;

    printf("\n Enter the Number of Elements: ");
    scanf("%d",&n);

    printf("\n The elements are: ",n);
    for(i=0;i<n;i++)
    {
        a[i] = rand()%10000;
        printf("%d ",a[i]);
    }
    printf("\n");
     start=clock();
     for(i=0;i<80000000;i++);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
      end=clock();
printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
    printf("\n The Sorted array in ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
