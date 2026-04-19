#pragma once

#include "Movement.hpp"
#include "InventoryItem.hpp"
#include <vector>

class Inventory {
public:
    explicit Inventory(){}

    InventoryItem* find(ProductID pID, LocationID lID) {
        for (auto& item : items_) {
            if (item.product() == pID && item.location() == lID){
                return &item;
            } 
        }
        return nullptr;
    }

    void increase(ProductID pID, LocationID lID, ProductQuantity qty) {
        auto* item = find(pID, lID);
        if (!item) {
            items_.push_back(InventoryItem{lID, pID, qty});
        } else {
            item->quantity().amount() += qty.amount();
        }
    }
    void decrease(){   
    }
    const std::vector<InventoryItem>& get() const {
        return items_;
    }
private:
    std::vector<InventoryItem> items_;
};