#include <Windows.h>
#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793

BOOL WINAPI SetConsoleWindowInfo(
  _In_       HANDLE     hConsoleOutput,
  _In_       BOOL       bAbsolute,
  _In_ const SMALL_RECT *lpConsoleWindow
);

// typedef struct _SMALL_RECT {
//     SHORT Left;
//     SHORT Top;
//     SHORT Right;
//     SHORT Bottom;
// };

void SetWindowSize(SHORT width, SHORT height)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;
 
    SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}
int main(){
    SetWindowSize(60, 15);
    cout << "Hello world!" << endl;

    return 0;
}