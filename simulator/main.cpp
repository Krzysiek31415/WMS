#include <iostream>
#include <string>

#include "../core/domain/LocationID.hpp"
#include "../core/domain/Location.hpp"
#include "../core/domain/LocationCode.hpp"
#include "../core/domain/ZoneID.hpp"
#include "../core/domain/HandlingUnit.hpp"
#include "../core/domain/Product.hpp"
#include "../core/domain/ProductQuantity.hpp"
#include "../core/domain/Inventory.hpp"
#include "../core/domain/InventoryItem.hpp"

#include "../core/repositories/InventoryRepository.hpp"
#include "../core/repositories/HandlingUnitRepository.hpp"
#include "../core/application/WarehouseService.hpp"

int main(){

    Inventory inventory{};
    InventoryRepository inventoryRepo{inventory};
    HandlingUnitRepository HURepo;
    WarehouseService service{inventoryRepo, HURepo};

    Location location{LocationID{"30801"}, ZoneID{}, LocationCode{"B001230"} };
    Product product{ProductID{"00abc"},"Tablet"};

    service.createHU(product.id(), location.id(), ProductQuantity{11});
    auto InventoryItems = inventoryRepo.get().get();
    for(const auto& item: InventoryItems){  
        std::cout <<"elem:: " <<  item.location() << '\n';
    }
    
    auto loc = HURepo.getAll().front().locationID();
    if(loc.has_value()){
        std::cout << "locId: " << loc.value() << "\n";
    }else{
        std::cout << "no location\n";
    }

    
    return 0;
}