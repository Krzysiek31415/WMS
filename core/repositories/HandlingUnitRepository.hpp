#pragma once
#include <vector>
#include "../domain/HandlingUnit.hpp"
#include "IHandlingUnitRepository.hpp"

class HandlingUnitRepository: public IHandlingUnitRepository{
public:
    explicit HandlingUnitRepository(){}
    void add(const HandlingUnit& HU) override {
        repo_.push_back(HU);
    }
    // HandlingUnit& get(HandlingUnitID) { 
    // }
    
    std::vector<HandlingUnit>& getAll() override {
        return repo_;
    }
private:
    std::vector<HandlingUnit> repo_;
};