#pragma once

#include <type_traits>

template<typename T>
class PublicSingleton
{
protected:
    PublicSingleton() {}

public:
    static T& getInstance() noexcept
    {
        static T instance;
        return instance;
    }
    virtual ~PublicSingleton() noexcept {}
    PublicSingleton(const PublicSingleton&) = delete;
    PublicSingleton& operator=(const PublicSingleton&) = delete;
};