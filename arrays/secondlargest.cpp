#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[100];
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter the elements in the array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int largest=arr[0];
	int s_largest=-1;
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			s_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && s_largest<arr[i]){
			s_largest=arr[i];
		}
	}
	cout<<"The second largest element is:"<<s_largest;
} 
