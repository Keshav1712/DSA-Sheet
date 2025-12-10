#include<iostream>
using namespace std;

// WAP to implememt a bubble sort using 2 loops
int main (){
	
	int arr[5]={4,7,3,9,6};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	for (int i=n-2;i>=0;i--){
		for(int j =0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
