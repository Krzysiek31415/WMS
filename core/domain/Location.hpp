#pragma once
#include "LocationID.hpp"
#include "HandlingUnitID.hpp"
#include "ZoneID.hpp"
#include "LocationCode.hpp"

#include <vector>


class Location{
public:
    explicit Location(LocationID id, ZoneID zoneId, LocationCode locationCode): 
    id_{std::move(id)}, zoneId_{std::move(zoneId)}, 
    locationCode_{std::move(locationCode)}
    {}
    const LocationID& id() const{
        return id_;
    }
private:
    LocationID id_;
    ZoneID zoneId_;
    LocationCode locationCode_;
    //std::vector<HandlingUnitID> units_;
};