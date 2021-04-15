/**
 *
 * 程序功能：解析命令行参数
 *      获取命令行参数，并执行对应功能。
 * 该程序使用方法：
 * 1、编译该代码，会生成一个main可执行程序
 * 2、在终端执行：
 *      ./main -h 可获得帮助信息
 *      ./main -v 获取版本信息
 * 3、带其他参数会出现使用提示信息
 * 
 *  * switch语句使用方法：
 *      switch(整型/枚举类型)
 *      {
 *          case 常量 :
 *              语句
 *              break;//可选
 *          default :
 *              语句
 *      }
 * 
 * **/

#include<iostream>
using namespace std;

void myprint(string str);
enum msg{help,version,error};

int main(int argc, char** argv)
{
    //cout<<"argc = "<<argc<<endl;
    for(int i =0 ; i<argc;i++)
    {
       // cout<<"argv"<<i+1<<"= "<<argv[i]<<endl;
        if(i!=0) myprint(argv[i]);
    }
}

void myprint(string str)
{
    msg temp=error;
    if(str=="-h"||str=="-H") temp=help;
    if(str=="-v"||str=="-V") temp=version;
    switch(temp)
    {
        case help :
            cout<<"usage:\n -h   : use help \n -v   : print the software version"<<endl;//这里可以写成一个函数
            break;
        case version :
            cout<<"version : 1.0.1"<<endl;
            break;
        default:
            cout<<"command "<<str<<" not found, you can use -h or -H for hlep."<<endl;

    }

}