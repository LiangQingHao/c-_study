/**
 * static的作用：
 *      1、隐藏与隔离：修饰的全局变量仅在当前文件有效。
 *      2、保持内容的持久性：修饰局部变量时，将变量存放在静态存储区，只初始化一次。
 *      3、默认初始化为0.
 * 
 * **/

#include<iostream>
#include"test.h"
using namespace std;

void fun1(void);

static int count2 = 4;

int count3 = 5;
extern void func2();//func2在test.cpp中定义，使用前用extern声明

int main()
{
    cout<<"count1 = "<<count1<<endl; //count1在test.cpp中定义、在test.h中声明了，因为使用了test.h头文件，所以不用再使用extern声明
    cout<<"count2 = "<<count2<<endl;
    while (count1--)
    {
        fun1();
    }
    
    func2();

    return 0;
    
}

void fun1(void)
{
    static int i = 0;
    i++;
    count2--;
    cout<<"i = "<<i<<endl;
    cout<<"count2 = "<<count2<<endl;
}