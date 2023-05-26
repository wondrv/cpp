#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int simpleArraySum(vector<int> ar){
    int sum=0,n;
    n=ar.size();
    for(int i=0;i<n;i++){
        sum+=ar[i];    
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<simpleArraySum(arr);
}