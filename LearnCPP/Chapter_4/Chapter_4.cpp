#include <iostream>

int main(int argc, char* argv[])
{
    using namespace std;
    
    char flower[20] = "the flower rose";
    cout << flower << "'s color is red" << endl;

    // 使用strcpy_s是完全替换
    strcpy_s(flower, "some");
    cout << flower << "'s color is red" << endl;
    return 0;
}
