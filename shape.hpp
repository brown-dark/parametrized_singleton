#pragma once

#include <ostream>

enum class Shape { Circle, Square, Rectangle, Star };

static std::ostream& operator<<(std::ostream& _ostream, Shape _color)
{
    switch(_color)
    {
        case Shape::Circle:
            return _ostream << "Circle";
        case Shape::Square:
            return _ostream << "Square";
        case Shape::Rectangle:
            return _ostream << "Rectangle";
        case Shape::Star:
            return _ostream << "Star";
        default:
            return _ostream;
    }
}