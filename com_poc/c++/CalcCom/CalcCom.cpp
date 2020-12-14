// CalcCom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <objbase.h>

//#import "..\..\..\com_apps\Calc\bin\Debug\Calc.tlb" 
#import "C:\Users\pravi\source\repos\com_apps\Calc\bin\x86\Debug\Calc.tlb" raw_interfaces_only

int main()
{    
    CoInitialize(NULL);
    /*Calc::_CalculatorPtr ptr;
    ptr.CreateInstance(L"ProgId.Calc");*/
    
    /*_CalculatorPtr ptr;
    ptr.CreateInstance(L"ProgId.Calc");*/
    
    //ptr->GetTypeInfo();
    
    Calc::ICalculatorPtr ptr;
    ptr.CreateInstance(L"ProgId2.Calc");
    if (ptr != nullptr) {
        long x = 10;
        long y = 20;
        long z = 0;
        HRESULT hr = ptr->Add(x, y, &z);
        if (hr == S_OK || hr != S_FALSE) {
            std::cout << "Com call success " << std::endl;            
        }  
        std::cout << "Result of the call " << hr << " Value " << z << std::endl;
    }
    else {
        std::cout << "failed" << std::endl;
    }
    CoUninitialize();
}

