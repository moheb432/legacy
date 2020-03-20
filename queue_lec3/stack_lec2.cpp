#include "stack_lec2.h"
#include <iostream>
bool stack_lec2::isempty(){

    if (top==-1){return true;}
    else{return false; }

}

bool stack_lec2::isfull(){
    if (top==4){return true;}
    else{return false; }


}

void stack_lec2::push(int x){
    if (isfull()){
        std::cout<<"the stack is full\n";
    }
      else
    {   top++;
        array[top]=x;

    }


}

int stack_lec2::pop(){
                   if (isempty()){
                       std::cout<<"the stack is empty\n";
                   }
                     else

                   {   int x=array[top];

                       top--;

                       return x;
                   }

                  }
