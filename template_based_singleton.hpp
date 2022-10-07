#pragma once

#include "singleton_type.hpp"

namespace template_based
{

template <Color _Tcolor, Shape _Tshape>
class Singleton
{

public:

    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

    static Singleton& GetInstance()
    {
        static Singleton s_instance;
        return s_instance;
    }

    SingletonType const& getType() const
    {
        return m_type;
    }

private:

    Singleton() = default;
    ~Singleton() = default;

private:

    SingletonType m_type{_Tcolor, _Tshape};

};

} // namespace template_based