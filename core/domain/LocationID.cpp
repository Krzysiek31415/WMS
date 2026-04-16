#include "LocationID.hpp"
#include <stdexcept>

namespace{
    std::string validateOrThrow(std::string value){
        if(!LocationID::isValid(value)){
            throw std::invalid_argument("Invalid LocationId");
        }
        return value;
    }
}

LocationID::LocationID(std::string value): 
value_{validateOrThrow(std::move(value))}
{}

const std::string& LocationID::value() const {
    return value_;
}

bool LocationID::operator<(const LocationID& id) const{
    return value_ < id.value_;
}
bool LocationID::operator>(const LocationID& id) const{
    return value_ > id.value_;
}
bool LocationID::operator==(const LocationID& id) const{
    return value_ == id.value_;
}

bool LocationID::isValid([[maybe_unused]]const std::string& value) {
    return true;
}

std::ostream& operator<<(std::ostream& os, const LocationID& id){
    os << id.value();
    return os;
}