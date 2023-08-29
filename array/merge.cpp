#include <bits/stdc++.h>
using namespace std;

int main()
{

  int arr1[5] = {1, 2, 4, 6, 7};
  int arr2[6] = {2, 3, 4, 7, 8, 9};

  int arr3[11];
  int k = 0;

  int i = 0, j = 0;

  while (i < 5 && j < 6)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k++] = arr1[i++];
    }
    else
    {
      arr3[k++] = arr2[j++];
    }
  }

  while (i < 5)
  {
    arr3[k++] = arr1[i++];
  }

  while (j < 6)
  {
    arr3[k++] = arr2[j++];
  }

  for (int z = 0; z < 11; z++)
  {
    cout << arr3[z] << " ";
  }
  return 0;
}