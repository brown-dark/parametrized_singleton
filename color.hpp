#pragma once

#include <ostream>

enum class Color { Red, Green, Blue, Yellow };

static std::ostream& operator<<(std::ostream& _ostream, Color _color)
{
    switch(_color)
    {
        case Color::Red:
            return _ostream << "Red";
        case Color::Green:
            return _ostream << "Green";
        case Color::Blue:
            return _ostream << "Blue";
        case Color::Yellow:
            return _ostream << "Yellow";
        default:
            return _ostream;
    }
}