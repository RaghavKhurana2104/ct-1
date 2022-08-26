//Name: Raghav Khurana
//Roll no: 2010990561
//Set No: 2
//Q2

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void ifConsecutive(vector<int>arr,int n){
	int a=0;
	int b=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]==1){
			a=1;
		}
		}
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]==0){
			a=2;
			b=arr[i];
		
	}
	
	
	if(a==1){
		cout<<"Array contains consecutive elements from "<<arr[0]<<" to "<<arr[n-1];
	}
	else if(a=2){
		cout<<"The array does not contain consecutive integers as element "<<b<<" is repeated";
	}
	else{
		cout<<"Not consecutive";
	}
}

int main(){
	int n,m;
	cout<<"Enter length of array: ";
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		
		cin>>m;
		arr.push_back(m);
		}
		
	ifConsecutive(arr,n);
	
	
	
	
}