#include<bits/stdc++.h>

using namespace std;

unsigned long fact(int number){

if (number>0)
{
	return (number*(fact(number-1)));
}
else{
	return(1);
}

}

int main(){

cout<<"The factorial of 5 is : "<<fact(5); 

}