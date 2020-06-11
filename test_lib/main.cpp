#include <windows.h>

extern "C"
{
    int pow2(int a);
    void upstr(char *str, char *s);
}

int APIENTRY WinMain(HINSTANCE h1,HINSTANCE h2,LPSTR l,int n)
{
    int x = 2;
    char str[30]={"static library _win32"};
    int t = pow2(x);
    char *s = (char*)malloc(sizeof(strlen(str)));
    upstr(str, s);
    if(t == 4)
        MessageBox(NULL, s ,TEXT("æ≤Ã¨¡¥Ω”ø‚≤‚ ‘"), MB_OK);
    else
        MessageBox(NULL, TEXT("error!!!") ,TEXT("æ≤Ã¨¡¥Ω”ø‚≤‚ ‘"), MB_OK);
    return 0;
}
