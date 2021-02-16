#include <iostream>
#include <vector>
#include "stack.hpp"

using namespace std;

int main() {

  Stack<int> stack_ste = Stack<int>(4);
  
  stack_ste.push(33); 
  stack_ste.push(1); 
  stack_ste.push(4); 
  stack_ste.push(91); 
  stack_ste.push(50); 
  stack_ste.push(7); 
  stack_ste.print(); 
  stack_ste.pop(); 
  stack_ste.print(); 
  stack_ste.push(12); 
  stack_ste.print(); 
  stack_ste.pop(); 
  stack_ste.print(); 
  stack_ste.pop(); 
  stack_ste.print(); 
  stack_ste.pop(); 
  stack_ste.print(); 
  stack_ste.pop(); 
  stack_ste.print(); 
  stack_ste.pop();
  stack_ste.print();

  return 0;
}