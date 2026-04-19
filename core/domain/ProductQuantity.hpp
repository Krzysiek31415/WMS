#pragma once

class ProductQuantity{
public: 
    explicit ProductQuantity(int qty): qty_{qty} {}
    int& amount() {
        return qty_;
    }

private:
    int qty_;
};
