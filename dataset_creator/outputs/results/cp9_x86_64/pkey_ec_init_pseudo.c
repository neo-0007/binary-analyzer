
bool pkey_ec_init(long param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x40,"../crypto/ec/ec_pmeth.c",0x33);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_pmeth.c",0x34,"pkey_ec_init");
    ERR_set_error(0x10,0xc0100,0);
  }
  else {
    *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
    *(long *)(param_1 + 0x98) = lVar1;
  }
  return lVar1 != 0;
}

