using System.Runtime.InteropServices;

namespace Calc
{
    //[Guid("971d1800-1b16-49bc-ac8d-3b27c0649c69")]
    [ComVisible(true)]    
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    public interface ICalculator
    {
        [DispId(1)]
        int Add(int a, int b);
        [DispId(2)]
        int Div(int a, int b);
        [DispId(3)]
        int Mul(int a, int b);        
    }
}