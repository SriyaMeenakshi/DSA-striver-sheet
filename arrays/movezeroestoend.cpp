#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int> arr;
	int value;
	cout<<"Enter number of elemnts in an array: ";
	cin>>n;
	cout<<"Enter an array with zeroes and numbers ";
	for(int i=0;i<n;i++){
		cin>>value;
		arr.push_back(value);
	}
	cout<<"The Array after moving zeroes to the end: ";
	int j=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			j=i;
			break;
		}
	}
	if(j!=-1){
		for(int i=j+1;i<n;i++){
			if(arr[i]!=0){
				swap(arr[i],arr[j]);
				j++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
