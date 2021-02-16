#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class StackI { 

  public :
    virtual void push(T t) = 0; 
    virtual void pop() = 0;
    virtual T top() = 0;
    virtual void print() = 0;
};

template <typename T>
class Stack : public StackI<T> {
  private:
    int size;
    int last_index;
    int elements;
    T v [];

  public:

    Stack(){
      size = 20;
      last_index = 0;
      elements = 0;
      v[size];
      cout << "The stack has been created!" << endl;
      cout << "-----------------------------" << endl;
    }

    Stack(int s){
      size = s;
      last_index = 0;
      elements = 0;
      v[size];
      cout << "The stack has been created!" << endl;
      cout << "-----------------------------" << endl;
    }

    void push(T t){
      if (elements<size){
        v[last_index] = t;
        last_index += 1;
        elements += 1;
      }
      else{cout << "Sorry, no more items can be added, the stack is full!" << endl;}
    }

    void pop(){
      if (elements == 0){cout << "Sorry, no items can be eliminated, the stack is empty!" << endl;} 
      else{
        last_index -= 1;
        elements -=1;
      }
    }

    T top(){
      if (elements == 0){cout << "Sorry, no items are in the stack, it is empty!" << endl;}
      else{
        cout << "The element on the top of the stack is: " << v[last_index] << endl;
      }
    }

    void print(){
      cout << "[ ";
      for (int i=last_index-1; i>=0; i--){
        cout << v[i] << " ";
      }
      cout << "]" << endl;
    }
};