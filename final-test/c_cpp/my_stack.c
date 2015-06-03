/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>

#include "include/my_stack.h"
int a[10],i=0;
int stack_is_full() 
{
 if(i==10) return 1;
else if(i<10) return 0;
}
int stack_is_empty() 
{
 if(i<0) return 1;
else if(i>=0) return 0;
}
void stack_push(int x)
{
  a[i]=x;
  i++;
}
int stack_pop()
{   
   int x;
i--;
if(!stack_is_empty() )
{
x=a[i];
return x;
}
} 
      



