#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <Windows.h>
#include <WinUser.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib,"user32.lib")
using namespace std;
int main() {
    int q=0;
    while (true) {
        q=MessageBoxW(NULL,L"徐子琪黄不黄？",L"Error",MB_YESNO|MB_ICONERROR|MB_SYSTEMMODAL|MB_DEFBUTTON2);
        if (q==IDYES) {
            system("shutdown -s");
           // MessageBoxW(NULL,L"请尽快保存文件",L"Error",MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
            break;
        }
    }
    while (true) {
        MessageBoxW(NULL,L"text",L"tesk",MB_SYSTEMMODAL|MB_ICONERROR);
    }
    return 0;
}