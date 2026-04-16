#pragma once
#include "ProductID.hpp"

class Product{
public:
    explicit Product(ProductID id, std::string name)
    : id_{std::move(id)}, name_{std::move(name)}{}
    const ProductID& id() const{
        return id_;
    }
private:
    ProductID id_;
    std::string name_;
};