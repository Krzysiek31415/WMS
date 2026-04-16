#pragma once

#include <string>

class LocationID{
public: 
    explicit LocationID(std::string value);
    const std::string& value() const;

    bool operator<(const LocationID& id) const;
    bool operator>(const LocationID& id) const;
    bool operator==(const LocationID& id) const;

    static bool isValid(const std::string& value);
    
private:
    std::string value_;
};

std::ostream& operator<<(std::ostream& os, const LocationID& id);
