
undefined8 blake2_mac_init(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_4 != 0) && (iVar1 = blake2_mac_set_ctx_params_part_0(param_1,param_4), iVar1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x81) == '\0') {
      ERR_new();
      ERR_set_debug("../providers/implementations/macs/blake2_mac_impl.c",0x75,"blake2_mac_init");
      ERR_set_error(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = blake2_setkey(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = ossl_blake2s_init_key(param_1,param_1 + 0x80,param_1 + 0xa0);
  return uVar2;
}

