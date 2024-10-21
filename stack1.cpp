#include <iostream>
using namespace std;
class stack{
  public:
      int* arr;
      int top;
      int size;
      stack(int capacity){
          arr=new int[capacity];
          size=capacity;
          top=-1;
      }

      void push(int val){
        if(top==size-1){
          cout<<"stack overflow"<<endl;
        }
        else{
          top++;
          arr[top]=val;
        }
            
      }
      void pop(){
        if(top==-1){
          cout<<"stack empty"<<endl;
        }
        else{
          arr[top]=-1;
          top--;
        }
      }
      bool isempty(){
        if(top==-1){
          return true;
        }
        else{
          return false;
        }
      }
      int getsize(){
          return top+1;
      }
      int gettop(){
          if(top==-1){
            cout<<"empty"<<endl;
          }
          else{
            return arr[top];
          }
      }
};

int main() {
  cout << "Hello world!" << endl;
  stack(5);
  
  return 0;
}