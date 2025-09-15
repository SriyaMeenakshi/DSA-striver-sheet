//Check if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
	for(int i=1;i<n;i++){
		if(arr[i]>=arr[i-1]){
			
		}
		else return false;
	}
	return true;
}
int main(){
	int n;
	int arr[100];
	cout<<"Enter no. of elements:";
	cin>>n;
	cout<<"Enter the elements in the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Is the array soreted or not:"<<sorted(arr,n);
	return 0;
}
