#include<iostream>
#include<vector>
//in brute force we may use set for unique values but in this approach we would be using optimal approach
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements in array ";
	cin>>n;
	int value;
	vector<int> arr;
	cout<<"Enter the numbers into array which are sorted and contain duplicates";
	for(int i=0;i<n;i++){
		cin>>value;
		arr.push_back(value);
	}
	cout<<"The given array as input:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nThe output array without duplicates is"<<endl;
	int i=0; //optimal approach also called as two pointers approach
	for(int j=0;j<n;j++){
		if(arr[j]!=arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	for(int k=0;k<=i;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
