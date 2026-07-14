#include <iostream>

// c - constant     g - global     l - local     s - static

int g_a{ };
int g_b{ };

const int c_g_a{ };
const int c_g_b{ };

int main()
{
    int a{ };
    int b{ };

    const int c_l_a{ };
    const int c_l_b{ };

    static int s_a{ };
    static int s_b{ };

    std::cout << "The memory address of global variable 'g_a' is: " << '\t' << &g_a << '\n';
    std::cout << "The memory address of global variable 'g_b' is: " << '\t' << &g_b << '\n';

    std::cout << "The memory address of global constant 'c_g_a' is: " << '\t' << &c_g_a << '\n';
    std::cout << "The memory address of global constant 'c_g_b' is: " << '\t' << &c_g_b << '\n';

    std::cout << "The memory address of variable 'a' is: " << '\t' << '\t' << '\t' << &a << '\n';
    std::cout << "The memory address of variable 'b' is: " << '\t' << '\t' << '\t' << &b << '\n';

    std::cout << "The memory address of local constant 'c_l_a' is: " << '\t' << &c_l_a << '\n';
    std::cout << "The memory address of local constant 'c_l_b' is: " << '\t' << &c_l_b << '\n';

    std::cout << "The memory address of static constant 's_a' is: " << '\t' << &s_a << '\n';
    std::cout << "The memory address of static constant 's_a' is: " << '\t' << &s_b << '\n';

    std::cout << "The memory address of string literals 'Hello' is: " << '\t' << &"Hello" << '\n';

    return 0;
}