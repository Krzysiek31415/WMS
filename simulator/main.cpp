#include <iostream>
#include <string>

#include "../core/domain/LocationID.hpp"
#include "../core/domain/Location.hpp"
#include "../core/domain/LocationCode.hpp"
#include "../core/domain/ZoneID.hpp"
#include "../core/domain/HandlingUnit.hpp"
#include "../core/domain/Product.hpp"
#include "../core/domain/ProductQuantity.hpp"

int main(){
    Location location{LocationID{"30801"}, ZoneID{}, LocationCode{"B001230"} };
    Product product{ProductID{"00abc"},"Tablet"};
    HandlingUnit HU{HandlingUnitID{"00123"}};
    HU.assignProduct(product.id(), ProductQuantity{100});
    HU.moveTo(location.id());

    auto loc = HU.locationID();
    if(loc.has_value()){
        std::cout << loc.value() << "\n";
    }else{
        std::cout << "no location\n";
    }

    return 0;
}