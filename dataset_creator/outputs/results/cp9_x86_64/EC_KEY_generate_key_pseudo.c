
int EC_KEY_generate_key(EC_KEY *key)

{
  int iVar1;
  
  if ((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0xd4,"EC_KEY_generate_key");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  if (*(code **)(*(long *)key + 0x40) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0xe0,"EC_KEY_generate_key");
    ERR_set_error(0x10,0x98,0);
    return 0;
  }
  iVar1 = (**(code **)(*(long *)key + 0x40))();
  if (iVar1 != 1) {
    return iVar1;
  }
  *(long *)(key + 0x68) = *(long *)(key + 0x68) + 1;
  return iVar1;
}

