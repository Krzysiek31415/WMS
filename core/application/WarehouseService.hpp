#pragma once
#include "../repositories/InventoryRepository.hpp"
#include "../repositories/IHandlingUnitRepository.hpp"

class WarehouseService{
public:
    explicit WarehouseService(InventoryRepository& inventoryRepo, IHandlingUnitRepository& HURepo)
    :inventoryRepo_{inventoryRepo}, HURepo_{HURepo}
    {}

    void createHU(ProductID pID, LocationID lID, ProductQuantity qty){
        HandlingUnit HU{HandlingUnitID{"00123"}};
        HU.assignProduct(pID, qty);
        HU.moveTo(lID);
        HURepo_.add(HU);

        auto& inventory = inventoryRepo_.get();
        inventory.increase(pID, lID, qty);
    }
    void moveHU();
    void splitHU();
    void margeHU();
    //void shipHU();

    void putaway();
    void pick();
    void replenish();
    void adjust();
private:
    InventoryRepository& inventoryRepo_;
    IHandlingUnitRepository& HURepo_;
};