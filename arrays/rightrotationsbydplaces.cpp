#include<bits\stdc++.h>
using namespace std;
/* Without using built in function
void reverse(vector<int> &arr,int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
*/
int main(){
	int n;
	cout<<"Enter the size of the array ";
	cin>>n;
	vector<int> arr;
	int value;
	cout<<"Enter the values into array ";
	for(int i=0;i<n;i++){
		cin>>value;
		arr.push_back(value);
}
	int d;
	cout<<"Enter the number of rotations towards right ";
	cin>>d;
	d=d%n;
/*
int temp[n];
  // Step 1: Store last d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Step 2: Shift remaining elements to the right
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    // Step 3: Copy temp elements to the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
*/
//optimal approach


reverse(arr.begin(),arr.end());
reverse(arr.begin(),arr.begin()+d);
reverse(arr.begin()+d,arr.end());
cout<<"The array after "<<d<<" rotations towards right ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
