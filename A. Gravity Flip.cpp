/*
Little Chris is bored during his physics lessons (too easy), so he has built a toy box to keep himself occupied. The box is special,
since it has the ability to change gravity.

There are n columns of toy cubes in the box arranged in a line. The i-th column contains ai cubes.
At first, the gravity in the box is pulling the cubes downwards. 
When Chris switches the gravity,
it begins to pull all the cubes to the right side of the box.
The figure shows the initial and final configurations of the cubes in the box: the cubes that have changed their position are highlighted with orange.
Input:
The first line of input contains an integer n (1 ≤ n ≤ 100), the number of the columns in the box. The next line contains n space-separated integer numbers.
The i-th number ai (1 ≤ ai ≤ 100) denotes the number of cubes in the i-th column.

Output:
Output n integer numbers separated by spaces, where the i-th number is the amount of cubes in the i-th column after the gravity switch.
https://codeforces.com/problemset/problem/405/A
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}


/*
INPUT:
4
3 2 1 2
OUTPUT
1 2 2 3 
*/
