#include <iostream>
#include <vector>

using namespace std;

void jump_search(vector<int>a, int n, int k)
{
    int step = sqrt(n);
    int l = 0, r = step;
    while(k>=a[r] && r<n)
    {
        l=r;    r+=step;
        if(r>n-1)
            r=n;
    }
    for(int i=l; i<r; i++)
    {
        if(a[i]==k)
        {
            cout<<"Found key";
            return;
        } 
    }
    cout<<"Key not found";
}

int main()
{
    vector<int>arr;     
    int n;  
    cout<<"Enter size of array = "; cin>>n;
    cout<<endl<<"Enter array Elements"<<endl;

    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter key = ";
    int k;  cin>>k;

    jump_search(arr, n, k);
}