#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> arr,int temp){
	for(int i=0;i<arr.size();i++){
		if(arr[i]==temp){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter size of an array:";
	cin>>n;
	vector<int> arr;
	int val;
	cout<<"Enter values into the array: ";
	for(int i=0;i<n;i++){
		cin>>val;
		arr.push_back(val);
	}
	int temp;
	cout<<"Enter a value to find if present or not in array: ";
	cin>>temp;
	int pos=linearsearch(arr,temp);
	if(pos!=-1){
	cout<<"The position of the element in the array is: "<<pos;
}
else{
	cout<<"The element is not present in the array";
}
}
