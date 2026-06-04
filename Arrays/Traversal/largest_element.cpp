#include<iostream>
#include<vector>
using namespace std;

int check_largest(const vector<int>& arr)
{

    int largest = arr[0];

    for( auto it : arr)
    {
        if(it > largest)
        {
            largest = it;
        }
    }
    
    return largest;
}

int main()
{

    int n;
    vector<int> v;

    cout << "Enter the size of array:" << endl;
    cin >> n;

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "The largest element is: " << check_largest(v);

    return 0;
}