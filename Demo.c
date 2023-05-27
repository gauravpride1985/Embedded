#include <stdio.h>


void sort(int array[], int size)
{
   for(int i = 0; i < size - 1; i++)
   {
      for(int j = 0; j < size - i - 1; j++)
      {
         if(array[j] > array[j+1])
         {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         }
      }
   }
}

void printArray(int array[], int size)
{
   for(int i = 0; i < size; i++)
   {
   //   printf("%d \n ", array[i]);
   }

   for(int i=0;i<size ;i++)
   {
      if(i!=array[i])
      {
        printf("The non-repeative number %d \n ", i);
        break;
      }
   } 
}

int main()
{ 
   int array[] = {9, 1, 8, 2, 7, 3, 0, 4, 5};
   //char array[] = {'F', 'A', 'D', 'B', 'C'};
   int size = sizeof(array)/sizeof(array[0]);
   
   //int N=sizeof(array)/sizeof(A[0]);

   sort(array, size);
   printArray(array, size);

   printf("%d",size);
 
   return 0; 
}