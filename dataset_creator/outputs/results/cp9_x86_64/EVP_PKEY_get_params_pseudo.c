
undefined8 EVP_PKEY_get_params(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = evp_keymgmt_get_params
                        (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a),param_2);
      return uVar1;
    }
    if (*param_1 != 0) {
      uVar1 = evp_pkey_get_params_to_ctrl();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x930,"EVP_PKEY_get_params");
  ERR_set_error(6,0xa3,0);
  return 0;
}

