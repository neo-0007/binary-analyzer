
void ec_bits(long param_1)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  EC_GROUP_order_bits(pEVar1);
  return;
}

