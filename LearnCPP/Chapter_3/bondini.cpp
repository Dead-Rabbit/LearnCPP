#include <iostream>

int main()
{
    using namespace std;
    
    // 转义符
    if (false)
    {
        cout << "\aOperation \"HyperHype\" is now activated!\n";
        cout << "Enter your agent code:______\b\b\b\b\b\b";
        long code;
        cin >> code;
        cout << "\aYou entered " << code << "...\n";
        cout << "\aCode verified! Proceed with Plan Z3!\n";
    }

    // 类型大小
    if (true)
    {
        cout << "char 's size is " << sizeof(char) << endl;
        cout << "wchar_t 's size is " << sizeof(wchar_t) << endl;
        cout << "short int 's size is " << sizeof(short int) << endl;
        cout << "int 's size is " << sizeof(int) << endl;
    }
    
    {
        
    }
}