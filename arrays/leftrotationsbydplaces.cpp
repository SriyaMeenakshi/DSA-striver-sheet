#include<bits\stdc++.h>
using namespace std;
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
	cout<<"Enter the number of rotations towards left ";
	cin>>d;

int temp[n];
for(int i=0;i<d;i++){
temp[i]=arr[i];
}
for(int i=d;i<n;i++){
arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++)
{arr[i]=temp[i-(n-d)];
}


/*reverse(arr.begin(),arr.begin()+d);
reverse(arr.begin()+d,arr.begin()+n);
reverse(arr.begin(),arr.end());*/
cout<<"The array after "<<d<<" rotations towards left ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
