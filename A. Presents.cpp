// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin>>n;
    // 1- based array
	int arr[n+1];
	for(int i=1;i<=n;i++){
        cin>>c;
        arr[c]=i;
	}
	for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
	}
	return 0;
}
