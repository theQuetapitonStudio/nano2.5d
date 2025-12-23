#include <iostream>
#include <windows.h>
#include <string>

struct mindow {
    inline void set_title(std::string title) {
        SetConsoleTitleA(title.c_str());
    }
};