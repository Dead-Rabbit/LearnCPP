#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    using namespace std;

    
    // 11属性
    if (false)
    {
        char inputs[12][100] = {
            "附加攻击",
            "附加防御",
            "附加生命",
            "附加命中",
            "附加闪躲",
            "附加暴击",
            "附加反暴击",
            "附加穿透率",
            "附加反穿透率",
            "附加格挡",
            "附加破击",
            "附加属性包"
        };
        
        int i = 0;
        while (i < 5)
        {
            int j = 0;
            while (j < 1)
            {
                string ind = std::to_string(i + 1);
                cout << "ItemName: 等级" << ind << inputs[j] << endl;
                cout << "ItemType: int" << endl;
                j++;
            }
            i++;
        }
    }
    

    
    return 0;
}
