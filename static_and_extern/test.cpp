/**
 * extern的作用：
 *      修饰的全局变量/函数在所以程序文件中都可用
 * **/


#include<iostream>
#include"test.h"

int count1 = 3;//定义

extern int count3;//count3在static.cpp中定义
void func2()
{
    std::cout<<"count3 = "<<count3<<std::endl;
}
