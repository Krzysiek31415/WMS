#pragma once
#include <string>

class HandlingUnitID{
public:
    explicit HandlingUnitID(std::string value)
    : value_{std::move(value)} {}

    const std::string& value() const{
        return value_;
    }
private:
    std::string value_;
};