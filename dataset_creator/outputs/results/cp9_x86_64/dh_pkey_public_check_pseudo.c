
undefined8 dh_pkey_public_check(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x70) != 0) {
    uVar1 = DH_check_pub_key_ex();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/dh/dh_ameth.c",0x1a7,"dh_pkey_public_check");
  ERR_set_error(5,0x7d,0);
  return 0;
}

