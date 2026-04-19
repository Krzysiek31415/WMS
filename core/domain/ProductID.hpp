#pragma once
#include <string>

class ProductID{
public:
    explicit ProductID(std::string value): value_{std::move(value)}
    {}
    const std::string& value() const {
        return value_;
    }
    bool operator ==(ProductID id){
        return id.value() == value_;
    }
private:
    std::string value_;
};