#pragma once
#include <optional>
#include "Product.hpp"
#include "HandlingUnitID.hpp"
#include "ProductQuantity.hpp"
#include "LocationID.hpp"
#include "HandlingUnitState.hpp"

class HandlingUnit{
public:
    explicit HandlingUnit(HandlingUnitID id)
    : id_{std::move(id)}{} 

    void assignProduct(ProductID product, ProductQuantity quantity){
        productID_ = std::move(product);
        quantity_ = quantity;
    }
    void moveTo(LocationID location){
        locationID_ = std::move(location);
    }
    // split
    // marge
    const HandlingUnitID& id() const{
        return id_;
    }
    const std::optional<LocationID>& locationID() const {
        return locationID_;
    }
private:
    HandlingUnitID id_;

    std::optional<ProductID>  productID_;
    std::optional<ProductQuantity> quantity_;
    std::optional<LocationID> locationID_;
    
    //std::vector<Product>
    //void ensureState(HandlingUnitState expected);
    //HandlingUnitState state_;
};