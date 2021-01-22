#include<bits/stdc++.h>
using namespace std;

int main(){
	int array[50];
	int deletion,pos,size;
	cin>>size;
	cin>>pos;
	for (int deletion = 0; deletion <= size-1; ++deletion)
	{
		cin>>array[deletion];
	}
cout<<"Array Before Deletion : "<<endl;
    for (int deletion = 0; deletion <=size-1; ++deletion)
    {
	cout<<array[deletion]<<endl;
    }
   
    for (int deletion = pos-1; deletion <=size-1; ++deletion)
    {
    	array[deletion] = array[deletion+1];
    }
    size--;
cout<<"Array After Deletion : "<<endl;
    for (int deletion = 0; deletion <= size-1; ++deletion)
    {
	cout<<array[deletion]<<endl;
    }
   
return 0;
}
