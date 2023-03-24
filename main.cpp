#include <iostream>

int main()
{
    bool red = false;
    bool green = true;
    bool yellow{false};
    bool polis_stop{true};

    /*
     *
     * If green : go
     * if red , yellow : stop
     * if polis_stop : stop
     */
    if (red)
    {
        std::cout << "Stop" << std::endl;
    }
    if (yellow)
    {
        std::cout << "Stop" << std::endl;
    }
    if (green)
    {
        std::cout << "Go" << std::endl;
    }
    int number1{55};
    int number2{60};
    bool result = (number1 < number2); // Expression yielding the condition
    std::cout << std::boolalpha << result << std::endl;

    std::cout << std::endl;
    std::cout << "Free stantding if statemnt" << std::endl;

    // if(result){}
    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    // if(!(result)){}
    if (!(result == false))
    {
        std::cout << number1 << " is Not less than " << number2 << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Using expression as conditio : " << std::endl;
    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is Not less than " << number2 << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    if (green)
    {
        if (polis_stop)
        {
            std::cout << "Stop" << std::endl;
        }
        else
        {
            std::cout << "Go" << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Polise officer stops(less verbose)" << std::endl;
    if (green && !polis_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}