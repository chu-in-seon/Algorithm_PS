#include <iostream>
int main()
{
    int test_case = 0;
    int H = 0, W = 0, N = 0;
    
    std::cin >> test_case;

    for( int test = 0; test < test_case; test++)
    {
        int rooms = 1, floors = 1;
        std::cin >> H >> W >> N;
        for (int guest = 1; guest < N; guest++)
        {
            if (floors < H)
            {
                floors += 1;
            }
            else
            {
                rooms += 1;
                floors = 1;
            }
        }
        
        std::cout << ( floors * 100 ) + rooms << std::endl;
    }
    return 0;
}