#include "sdk.h"
#include <iomanip>
//#include "draw.h"
#include <Windows.h>
#include <dwmapi.h>
#include <string>
#include <iostream>

#include "Game.hpp"
#include "Overlay.hpp"
#include <xmmintrin.h>
#include "Defines.hpp"
#include "globals.hpp"
#include <random>
HWND hwnd = nullptr;

int main() {

    Client::Connect();

    KProcess drv(L"TslGame.exe");

    while (!hwnd)
    {
        hwnd = FindWindow(L"UnrealWindow", L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
    }

    std::cout << "[+] Found Game Window" << std::endl;

    setup_window();
    setup_directx(MyWnd);

    while (true)
    {
        main_loop();
    }

    getchar();

    Client::Disconnect(); // Once this is called or usermode closed / crashed, we can never reobtain a connection to the driver without remapping it
}