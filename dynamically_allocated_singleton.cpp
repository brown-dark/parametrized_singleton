#include "dynamically_allocated_singleton.hpp"

namespace dynamically_allocated
{

Singleton::InstancesByType Singleton::ms_instances{};
std::mutex Singleton::ms_mutex{};

Singleton&
Singleton::GetInstance(SingletonType _type)
{
    std::lock_guard<decltype(ms_mutex)> lock(ms_mutex);

    if(ms_instances.count(_type) == 0)
    {
        ms_instances.emplace(
                _type
            ,   std::unique_ptr<Singleton>(new Singleton(_type))
        );
    }

    return *ms_instances.at(_type);
}

SingletonType const&
Singleton::getType() const
{
    std::lock_guard<decltype(ms_mutex)> lock(ms_mutex);

    return m_type;
}

Singleton::Singleton(SingletonType _type)
    :   m_type(_type)
{
}

} // namespace dynamically_allocated