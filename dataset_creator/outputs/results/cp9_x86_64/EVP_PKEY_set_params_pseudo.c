
undefined8 EVP_PKEY_set_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    uVar1 = evp_keymgmt_set_params
                      (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x91b,"EVP_PKEY_set_params");
  ERR_set_error(6,0xa3,0);
  return 0;
}

