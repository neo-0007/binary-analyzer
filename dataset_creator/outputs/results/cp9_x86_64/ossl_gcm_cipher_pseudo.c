
undefined8
ossl_gcm_cipher(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,
               undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x159,
                    "ossl_gcm_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = gcm_cipher_internal(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}

