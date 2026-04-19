#pragma once
#include<vector>

class HandlingUnit;
class HandlingUnitID;

class IHandlingUnitRepository {
public:
    virtual void add(const HandlingUnit&) = 0;
    virtual std::vector<HandlingUnit>& getAll() = 0;
    //virtual HandlingUnit& get(HandlingUnitID) = 0;
    //virtual void remove(HandlingUnitID) = 0;
    virtual ~IHandlingUnitRepository() = default;
};