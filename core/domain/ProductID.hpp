#pragma once
#include <string>

class ProductID{
public:
    explicit ProductID(std::string value): value_{std::move(value)}
    {}
    const std::string& value() const {
        return value_;
    }
private:
    std::string value_;
};