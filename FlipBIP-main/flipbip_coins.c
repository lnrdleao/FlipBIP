#include <flipbip_coins.h>

// bip44_coin, xprv_version, xpub_version, addr_version, wif_version, addr_format
const uint32_t COIN_INFO_ARRAY[NUM_COINS][COIN_INFO_SIZE] = {
    {0, 0x0488ade4, 0x0488b21e, 0x00, 0x80, CoinTypeBTC0},
};

// coin_label, derivation_path, coin_name, static_prefix ("_" for none)
const char* COIN_TEXT_ARRAY[NUM_COINS][COIN_TEXT_SIZE] = {
    {"BTC", "m/44'/0'/0'/0", "bitcoin:", "_"}};
