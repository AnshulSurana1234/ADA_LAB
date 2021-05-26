#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() {
  int data[100];
  int n;
  while(1){
  printf("Enter no of elements in the array:\n");
  scanf("%d",&n);
  printf("Random %d integers\n",n);
  for(int i=0;i<n;i++)
  data[i]=1+rand()%1000;
   clock_t begin = clock();
    quickSort(data, 0, n - 1);
  printf("Printing the sorted array: \n");
  printArray(data, n);
     clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\nEXECUTION TIME : %.10fseconds\n\n", time_spent);
  }
}
