#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, key, i, j, value;
  vector<int> vrr1;
  /*Vector: a class in STL that represents an array.
  Supports dynamic sizes and resizing. */
  // Declarations:
  vector<int> vrr;
  vector<int> vect1(n, 10);
  vector<int> vect1{10, 20, 30};
  vector<string> str_arr1 = {"Sunny Cove", "Willow Cove"};

  // returns no of elements in vector
  vrr.size();

  // pushes element at end of vector
  vrr.push_back(10);

  // input elements
  for (int i = 0; i < n; i++)
  {
    cin >> key;
    vrr.push_back(key);
  }

  // display elements
  for (int i = 0; i < vrr.size(); i++)
  {
    cout << vrr[i]; // or vrr.at(i);
  }

  // input & display elements
  vector<int> vrr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vrr[i];
    cout << vrr[i];
  }

  // returns first & last element
  vrr.front();
  vrr.back();

  // swaps value of vector 1 with 2
  vrr1.swap(vrr);

  // deletes all elements in vector
  vrr.clear();

  // used to check if vector is empty or not
  vrr.empty();

  // reverses a vector
  reverse(vrr.begin(), vrr.end());

  // Iterators
  for (auto it = vrr.begin(); it != vrr.end(); it++)
    cout << *it << " ";

  for (auto &i : vrr)
    cout << vrr[i];

  // Reverse Iterators
  for (auto it = vrr.rbegin(); it != vrr.rend(); it++)
    cout << *it << " ";

  // Transform:-
  // 1. returns square

  int Multiply(int x)
  {
    return (x * x);
  }
  transform(vrr.begin(), vrr.end(), vrr.begin(), Multiply);

  // Count:-
  // 1. counts number of time value appears
  count(vrr.begin(), vrr.end(), value);

  // To find max element: *max_element (first_index, last_index);
  *max_element(vrr.begin(), vrr.end());

  return 0;
}
