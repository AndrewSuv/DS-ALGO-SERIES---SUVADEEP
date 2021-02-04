#include <bits/stdc++.h>

using namespace std;

class Stack{
  private: 
  
  int top; //top variable
  int array[5]; //fix the size of array
  
  public:
  
  Stack(){
      top = -1;
      for(int i=0;i<=4;i++){
          array[i] = 0;
      }
  }
  bool isEmpty(){
      if(top == -1)
    return true;
     
    else
      
    return false;  
  }
  
  bool isFull(){
      if(top == 4)
      return true;
      else
      return false;
  }
  
  void push(int ele){
      if(isFull()){
          cout<<"Stack is full"; //stack is full
      }
      
      else{
          
          top++;
          array[top] = ele; //putting values in our stack
          
      }
      
  }
  
  int pop(){
      if(isEmpty()){
          
          cout<<"Stack underflow\n"<<endl; //stack is empty
          
          return 0;
      }
      
      else
      {
          int popEle = array[top];
          
          array[top] = 0;  //deleting elements from our stack LIFO
          
          top--;
          
          return popEle;
      }
      
  }
  
  int count(){
      return (top+1);
  }
  
  int peek(int pos){
      if(isEmpty()){
          cout<<"Stack underflow"<<endl;
          return 0;
      }else{
          return array[pos];
      }
  }
  void change(int pos,int ele){
      array[pos] = ele;
      cout<<"element changed in position "<<pos<<endl; //changing the value of elements at specific index
  }
  void display(){
      for(int i = 4;i>=0;i--){
          cout<<array[i]<<endl;
      }
  }
};


int main() {
   
   
   Stack s1;
   
   int option,element,position;
   
   while(true){
       cout<<endl;
       cout<<"\n1. push"<<endl;
       cout<<"2. pop"<<endl;
       cout<<"3. isEmpty"<<endl;
       cout<<"4. isFull"<<endl;
       cout<<"5. peek"<<endl;
       cout<<"6. count"<<endl;
       cout<<"7. change"<<endl;
       cout<<"8. display"<<endl;
       cout<<"9. clear screen"<<endl;
       cout<<"\nEnter your option : " ;
       cin>>option;
       switch(option){
           
        case 1: cout<<"Enter a vaue to push"<<endl;
           
        cin>>element;
           
        s1.push(element);
           
        break;
           
        case 2: 
       
        cout<<"Popped element is : "<<s1.pop()<<endl;
       
        break;  
        
        case 3: if(s1.isEmpty())
            cout<<"Stack is empty"<<endl;
            else
            cout<<"Stack is not empty"<<endl;
            break;
        case 4: if(s1.isFull())
            cout<<"Stack is full"<<endl;
            else
            cout<<"Stack is not full"<<endl;
            break;
        case 5: cout<<"Enter the position you wanna peek : ";
            
        cin>>position;
            
        cout<<"peek element is : "<<s1.peek(position)<<endl;
        break;
        
        case 6:
        cout<<"The number of elements in stack are : "<<s1.count();
        break;
        
        case 7: cout<<"Enter the position you wanna change : ";
        cin>>position;
        cout<<"Enter the elemnet : ";
        cin>>element;
        s1.change(position,element);
        break;
        
        case 8: cout<<"The elements are : ";
        s1.display();
        break;
          
        case 9: 
        system("clear");
        break;
        default : cout<<"Wrong input....."<<endl;
        
       }
       
   }
  
   
   return 0;
    
}
