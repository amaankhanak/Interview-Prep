#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};

  int mid = 5 / 2;
  int j = 4;

  for (int i = 0; i <= mid; i++)
  {
    swap(arr[i], arr[j]);
    j--;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i];
  }

  return 0;
}