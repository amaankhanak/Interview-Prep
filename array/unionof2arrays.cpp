#include <bits/stdc++.h>

using namespace std;

int unionOfArray(int arr1[], int arr2[], int n, int m)
{
  unordered_set<int> s;

  for (int i = 0; i < n; i++)
  {
    s.insert(arr1[i]);
  }

  for (int i = 0; i < m; i++)
  {
    s.insert(arr2[i]);
  }

  return s.size();
}

int main()
{
  int n;
  int m;
  int arr1[n];
  int arr2[m];

  cout << "Enter size of first array: " << endl;
  cin >> n;
  cout << endl;

  cout << "Enter elements for first array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
    cout << endl;
  }

  cout << "Enter size of second array: " << endl;
  cin >> m;
  cout << endl;

  cout << "Enter elements for second array: " << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
    cout << endl;
  }

  cout << unionOfArray(arr1, arr2, n, m);
  return 0;
}