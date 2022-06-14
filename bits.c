#include "bits.h"
#include "cache.h"

int get_set(Cache *cache, address_type address) {
  // TODO:
  //  Extract the set bits from a 32-bit address.
  //
  int sbits = (cache)->set_bits;
  int bbits = (cache)->block_bits;
  address = (address << (32 - (bbits + sbits))) >> (32 - sbits);
  return address;
}

int get_line(Cache *cache, address_type address) {
  // TODO:
  // Extract the tag bits from a 32-bit address.
  //
  int sbits = (cache)->set_bits;
  int bbits = (cache)->block_bits;
  address = (address >> (bbits + sbits));
  return address;
}

int get_byte(Cache *cache, address_type address) {
  // TODO
  // Extract the block offset (byte index) bits from a 32-bit address.
  //
  int bbits = (cache)->block_bits;
  address = (address << (32 - bbits)) >> (32 - bbits);
  return address;
}
