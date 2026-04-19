#pragma once

#include "LocationID.hpp"
#include "ProductID.hpp"
#include "ProductQuantity.hpp"

class InventoryItem {
public:
    explicit InventoryItem(LocationID loc, ProductID prod, ProductQuantity qty):
    location_{std::move(loc)}, product_{std::move(prod)}, qty_{std::move(qty)}
    {}

    const LocationID& location() const{
        return location_;
    }
    ProductID& product() {
        return product_;
    }
    ProductQuantity& quantity() {
        return qty_;
    }

    

private:
    LocationID location_;
    ProductID product_;
    ProductQuantity qty_;
};