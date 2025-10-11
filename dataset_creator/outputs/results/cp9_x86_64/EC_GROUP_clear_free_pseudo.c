
void EC_GROUP_clear_free(EC_GROUP *group)

{
  code *pcVar1;
  
  if (group == (EC_GROUP *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*(long *)group + 0x18);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*(long *)group + 0x10), pcVar1 != (code *)0x0)
     ) {
    (*pcVar1)(group);
  }
  EC_pre_comp_free(group);
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
  EC_POINT_clear_free(*(EC_POINT **)(group + 8));
  BN_clear_free(*(BIGNUM **)(group + 0x10));
  BN_clear_free(*(BIGNUM **)(group + 0x18));
  CRYPTO_clear_free(*(undefined8 *)(group + 0x30),*(undefined8 *)(group + 0x38),
                    "../crypto/ec/ec_lib.c",0x9c);
  CRYPTO_clear_free(group,0xb8,"../crypto/ec/ec_lib.c",0x9d);
  return;
}

