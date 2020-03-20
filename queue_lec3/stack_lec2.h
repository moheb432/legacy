#ifndef STACK_LEC2_H
#define STACK_LEC2_H


class stack_lec2
{
  public :
    bool isempty();
    bool isfull();
    void push(int x);
  int pop();


    private  :
    int top =-1;
    int array[5];



};

#endif // STACK_LEC2_H
