#pragma once

#include "../domain/Inventory.hpp"

class InventoryRepository {
public:
    explicit InventoryRepository(Inventory& inventory)
    : inventory_{inventory}
    {}

    Inventory& get() {
        return inventory_;
    }

private:
    Inventory& inventory_;
};