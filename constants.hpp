#pragma once

//Symbols
static constexpr eosio::symbol WAX_SYMBOL = eosio::symbol("WAX", 8);

//Numeric Limits
const int64_t MAX_ASSET_AMOUNT = 4611686018427387903;
const uint64_t MAX_ASSET_AMOUNT_64 = 4611686018427387903;
const uint64_t MAX_HOURS_BETWEEN_CLAIMS = 30 * 24;

//Contracts
const eosio::name WAX_CONTRACT = "eosio.token"_n;
const eosio::name ATOMICASSETS_CONTRACT = "atomicassets"_n;
const eosio::name ATOMICMARKET_CONTRACT = "atomicmarket"_n;
const eosio::name FARM_CONTRACT_V1 = "waxdaofarmer"_n;
const eosio::name FARM_CONTRACT_V2 = "farms.waxdao"_n;
const eosio::name DAO_CONTRACT = "dao.waxdao"_n;


//Memos
static const char* FARM_DEPOSIT_MEMO(const eosio::name& farm_name) {
    return ("|farm_deposit|" + farm_name.to_string() + "|").c_str();
}

static const char* DAO_DEPOSIT_MEMO(const eosio::name& dao_name) {
    return ("|treasury_deposit|" + dao_name.to_string() + "|").c_str();
}

//Error Messages
static const char* ERR_CONFIG_NOT_FOUND = "could not locate config";
static const char* ERR_DAO_DOESNT_EXIST = "dao does not exist";
static const char* ERR_FARM_DOESNT_EXIST = "farm does not exist";
static const char* ERR_RULE_DOESNT_EXIST = "rule does not exist for this token";
