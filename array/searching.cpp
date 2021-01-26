#include<bits/stdc++.h>
using namespace std;

//Linear Search :---->

int linearSearch(int arr[],int n,int key){

for (int index = 0; index < n; ++index) 
{
	if (arr[index] == key) // it's checking that the element is present in the array or not.
	{
		return index; //it will return the position of that element
	}
}
return -1;

}
// Binary Search : ---->

int binarySearch(int arr[],int n,int key){

int start_point = 0,end_point = n;

while(start_point<=end_point){

int mid_point = (start_point+end_point)/2;

if (arr[mid_point] == key)

{
	return mid_point;
}

else if (arr[mid_point]>key)

{
	end_point = mid_point-1;
}

else{

	start_point = mid_point +1;

}

}
return -1;

}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) //taking input from the user
    {
    	cin>>arr[i];
    }
int key;

cin>>key;

cout<<linearSearch(arr,n,key)<<endl; //linear search

cout<<binarySearch(arr,n,key)<<endl; //binary search

	return 0;
}



 