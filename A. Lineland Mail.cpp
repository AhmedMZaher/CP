#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn, mx;
    cin>>n;
    // 1- based array
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
    for(int i=1;i<n-1;i++){
            mn=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            mx=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        cout<<mn<<" "<<mx<<"\n";
    }
    cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
    return 0;
}
