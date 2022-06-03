#include <iostream>
#include <random>
#include<Windows.h>
#include<string>
//各种方便的函数!
int random(int qishi, int jieshu)//随机
{
    std::default_random_engine e;
    std::uniform_int_distribution<int> u(qishi, jieshu);
    e.seed(time(0));
    return(u(e));
    //需要#include <random>
}
void liandian(bool key, int cishu, int jiange)
{
    //需要#include<Windows.h>
    if (key == true)
    {
        for (int i = 0; i < cishu; i++)
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(jiange);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }
    }
    else
    {
        for (int i = 0; i < cishu; i++)
        {
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
            Sleep(jiange);
            mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
        }
    }
}
void font(int daxiao,int font)
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof cfi;
    cfi.dwFontSize.Y = daxiao;  //设置字体大小
    switch (font)
    {
    case 1:
    {
        wcscpy_s(cfi.FaceName, L"黑体");
        break;
    }
    case 2:
    {
        wcscpy_s(cfi.FaceName, L"楷体");
        break;
    }
    case 3:
    {
        wcscpy_s(cfi.FaceName, L"点阵字体");
        break;
    }
    case 4:
    {
        wcscpy_s(cfi.FaceName, L"宋体");
        break;
    }
    default:
    {
        wcscpy_s(cfi.FaceName, L"仿宋");
    }
    }
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    
}
int size(int num)
{
    using namespace std;
    string str = to_string(num);
    return str.size();
}
