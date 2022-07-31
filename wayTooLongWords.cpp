#include <iostream>

int main()
{
    //ประกาศตัวแปร n ใช้สำหรับจำนวนคำที่ต้องการใส่
    int n{};
    // s คือคำที่จะใส่
    std::string s{};
    std::cin >> n;
    // ลูปจนกว่าจะครบ n ครั้ง ลูปเสร็จครั้งนึง จะลดไป 1 ครั้ง
    while (n--)
    {
        std::cin >> s;
        if (s.length() > 10)
        {
            // สาเหตุ  ที่  s.length() -2 เพราะตัวหน้าตัวหลังหายไป
            std::cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
        }
        else
        {
            std::cout << s << '\n';
        }
    }
    return 0;
}