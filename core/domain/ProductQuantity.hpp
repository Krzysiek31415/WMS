#pragma once

class ProductQuantity{
public: 
    explicit ProductQuantity(int qty): qty_{qty} {}
private:
    int qty_;
};
