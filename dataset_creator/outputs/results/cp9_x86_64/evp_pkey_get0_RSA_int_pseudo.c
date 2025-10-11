
undefined8 evp_pkey_get0_RSA_int(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_legacy.c",0x25,"evp_pkey_get0_RSA_int");
    ERR_set_error(6,0x7f,0);
    return 0;
  }
  uVar1 = evp_pkey_get_legacy();
  return uVar1;
}

