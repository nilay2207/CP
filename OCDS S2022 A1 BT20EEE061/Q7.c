

//Name :- Pranav Mailarpawar
 //Roll No:- BT20EEE061


#include <stdio.h>


int sort (int arr[], int i, int n,int length,int temp)
{

  
  if (n == 1)
      {
        printf("Elements after sorting elements at even indices in ascending order and elements at odd indices in descending order\n");
        for (int i = 0; i <length; i++)
	      {

	        printf ("%d ", arr[i]);
	      }
          return 0;
      }
  if (i == n - 1)
      {
        i = 0;
        n =n- 1;
      }
  if (i % 2 == 0)
      {
      if (arr[i] > arr[i + 2])
	  {
	    temp=arr[i];
	    arr[i] = arr[i + 2];
	    arr[i + 2] = temp;
	  }
      }
  else
      {
        if (arr[i] < arr[i + 2])
	      {
	        temp = arr[i];
	        arr[i] = arr[i + 2];
	        arr[i + 2] = temp;
	      }
      }
sort (arr, i + 1, n,length,temp);
}

int main ()
{
  int n;
  int temp;
  printf("Enter the number of elements\n");
  scanf ("%d", &n);
  int arr[50];
  printf("Enter elements\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  sort (arr, 0, n - 1,n,temp);
  return 0;
}