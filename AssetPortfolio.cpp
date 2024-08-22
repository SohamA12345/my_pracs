#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio(int size) : max_size(size), new_asset(new Asset[size]), current_size(0) {}   // constructor for a portfolio of given size
AssetPortfolio::AssetPortfolio() : AssetPortfolio(0) {}           // default constructor capacity of zero assets

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets() {return current_size;}

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product) {
  for (int i = 0; i < current_size; i++) {
    if (this->new_asset[i].get_product_type() == product) {
      return true;
    }
  }

  return false;
}

Asset* AssetPortfolio::get_assets() {return new_asset;}      // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset) {
  if (current_size < max_size) {
    this->new_asset[current_size] = new_asset;
    current_size++;
    return true;
  }

  return false;
}

AssetPortfolio::~AssetPortfolio() {}  // destructor