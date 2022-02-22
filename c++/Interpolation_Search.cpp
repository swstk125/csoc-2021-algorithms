#include <iostream>
#include <vector>

using namespace std;

void interpolation_search(vector<int>a, int n, int k)
{
    int l = 0, r=n-1; 

    while(l<=r && k>=a[l] && k<=a[r])
    {
        if(l==r)
        {
            if(a[l]==k)
            {
                cout<<"Key found"<<endl;
                return;
            }
            cout<<"Key not found"<<endl;
        }
        int pos = l + (((double)(r-l)/(a[r]-a[l]))*(k-a[l]));

        if(k == a[pos])
        {
            cout<<"Key found"<<endl;
                return;
        }
        if(k<a[pos])   r=pos-1;
        else    l=pos+1;
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

    interpolation_search(arr, n, k);
}