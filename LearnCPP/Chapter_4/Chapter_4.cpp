#include <iostream>
#include <cwchar>

int main(int argc, char* argv[])
{
    using namespace std;
    
    char flower[10] = "rose";
    cout << &flower[1] << "'s color is red";
    return 0;
}
