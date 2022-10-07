#pragma once

#include "color.hpp"
#include "shape.hpp"

struct SingletonType
{
    Color color;
    Shape shape;
};

static bool operator<(SingletonType const& _lhs, SingletonType const& _rhs)
{
    return
            std::tie(_lhs.color, _lhs.shape)
        <   std::tie(_rhs.color, _rhs.shape);
}

static std::ostream& operator<<(
        std::ostream& _ostream
    ,   SingletonType const& _singleton_type
)
{
    return
        _ostream
            <<  "SingletonType("
            <<  _singleton_type.color
            <<  ", "
            <<  _singleton_type.shape
            <<  ")";
}
