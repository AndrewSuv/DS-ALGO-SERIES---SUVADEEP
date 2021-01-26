#include<bits/stdc++.h>
using namespace std;

   void selectionsort(int arr[],int n){

   //operation for checking which elemet is lowest

   for (int i = 0; i <=n-1; ++i)
   {
   for (int j = i+1; j <=n ; ++j)
   {
   if (arr[j] < arr[i])
      {
       int temp = arr[j]; //swaping the elements to put the lowest element at first
       arr[j] = arr[i];
       arr[i] = temp;
      }
   }

}

//operation for printing the elements

  for (int i = 0; i < n; ++i)
 {
	cout<<arr[i]<<endl;
 }
 }
    int main(){

    int n;
    
    cin>>n; //taking the size of array from user
    
    int arr[n];
    
    for (int i = 0; i < n; ++i) // taking the values from user
    {
    	cin>>arr[i];
    }
    
    selectionsort(arr,n); //calling the function for sorting
	
	return 0;
}