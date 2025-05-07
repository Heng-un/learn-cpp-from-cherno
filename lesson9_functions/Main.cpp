     #include <iostream>

int Multply(int a, int b)
{
    return a * b;
}

void MultplyAndLog(int a, int b)
{
    int result = Multply(a , b);
    std::cout << result << std::endl;
}

int main()
{
    MultplyAndLog(3, 2);
    MultplyAndLog(8, 5);
    MultplyAndLog(90, 42);
    std::cin.get();
}