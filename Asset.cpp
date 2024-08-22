#include "Asset.h"

  Asset::Asset() : Asset(0, "") {}

  // a constructor that takes the product type  and value
  Asset::Asset(int value, std::string product_type) : value(value), product_type(product_type) {}      

  std::string Asset::get_product_type() {return this->product_type;}    // returns the financial asset type 
  int Asset::get_value() {return this->value;}                   // returns the the value of asset

  Asset::~Asset() {}