#include<bits/stdc++.h>
using namespace std;
int main(){

int array[50],size,pos,insert,num;
cin>>size;
cin>>pos;
cin>>num;
for (int insert = 0; insert <=size-1 ; ++insert)

{
	
	cin>>array[insert];
}
cout<<"The Elements are : ";
for (int insert = 0; insert <= size-1; ++insert)
{
	printf("%d\n",array[insert]);
}

for (int insert = size-1; insert >=pos-1; insert--)
{
	array[insert+1] = array[insert];
}
array[pos-1] = num;
size++;
cout<<"After Insertion Elements are : ";
for (int insert = 0; insert <= size-1; ++insert)
{
	cout<<array[insert]<<endl;
}

return 0;
}