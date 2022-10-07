#include "template_based_singleton.hpp"
#include "dynamically_allocated_singleton.hpp"

#include <iostream>

int main()
{
    // Template-based Singleton
    {
        using namespace template_based;

        std::cout << Singleton<Color::Blue, Shape::Rectangle>::GetInstance().getType() << std::endl;
        std::cout << Singleton<Color::Yellow, Shape::Rectangle>::GetInstance().getType()<< std::endl;
    }
    // Dynamically-allocated Singleton
    {
        using namespace dynamically_allocated;

        std::cout << Singleton::GetInstance({Color::Red, Shape::Square}).getType() << std::endl;
        std::cout << Singleton::GetInstance({Color::Green, Shape::Star}).getType() << std::endl;
    }

    return 0;
}