//Name: Raghav Khurana
//Roll no: 2010990561
//Set No: 2
//Q1

#include <iostream>
#include <set>
using namespace std;
 

int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    set<int> set;
 
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
 
    if (minIndex == n) {
        cout<<"no element is repeating";
    }
    return minIndex;
}
 
int main()
{
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
    	cin>>arr[i];
	}
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
   
 
    return 0;
}
