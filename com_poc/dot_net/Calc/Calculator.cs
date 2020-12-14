using System;
using System.Runtime.InteropServices;

namespace Calc
{
    
    [ComVisible(true)]
    [ClassInterface(ClassInterfaceType.None)]
    [ProgId("ProgId2.Calc")]
    public class Calculator : ICalculator
    {
        int result;
        public Calculator()
        {
            result = 0;
        }        
        public int Add(int a, int b)
        {
            result++;
            return a + b;
        }
        
        public int Sub(int a, int b)
        {
            result++;
            return a - b;
        }
        public int Div(int a, int b)
        {
            result++;
            return a / b;
        }
        public int Mul(int a, int b)
        {
            result++;
            return a * b;
        }
    }
}
