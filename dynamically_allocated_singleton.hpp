#pragma once

#include "singleton_type.hpp"

#include <map>
#include <mutex>

namespace dynamically_allocated
{

class Singleton
{

public:

    Singleton() = delete;
    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

    static Singleton& GetInstance(SingletonType _type);

    SingletonType const& getType() const;

private:

    explicit Singleton(SingletonType _type);

private:

    using InstancesByType = std::map<SingletonType, std::unique_ptr<Singleton>>;

    static InstancesByType ms_instances;
    static std::mutex ms_mutex;

    SingletonType m_type;

};

} // namespace dynamically_allocated