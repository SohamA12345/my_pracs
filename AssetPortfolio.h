#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"

class AssetPortfolio {
  private:
    int max_size;
    Asset* new_asset;
    int current_size;
  public:
    AssetPortfolio();           // default constructor capacity of zero assets
    AssetPortfolio(int size);   // constructor for a portfolio of given size

    // returns the number of assets which are in the portfolio
    int get_num_assets(); 

    // returns true if any asset in the portfolio is of the specified product type
    // otherwise returns false
    bool has_asset(std::string product); 

    Asset *get_assets();       // returns the array of assets of the portfolio

    // returns true and adds new asset to the portfolio if the portfolio is not full
    // otherwise returns false
    bool add_asset(Asset new_asset);

    ~AssetPortfolio();  // destructor
};

#endif