
undefined8 evp_pkey_get0_DH_int(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x3ab,"evp_pkey_get0_DH_int");
    ERR_set_error(6,0x80,0);
    return 0;
  }
  uVar1 = evp_pkey_get_legacy();
  return uVar1;
}

