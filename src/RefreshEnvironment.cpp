// RefreshEnvironment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>

int main()
{
   DWORD retVal;
   ::SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, NULL, (LPARAM)L"Environment",
      SMTO_ABORTIFHUNG, 5000, (PDWORD_PTR)(&retVal));
   return 1;
}
