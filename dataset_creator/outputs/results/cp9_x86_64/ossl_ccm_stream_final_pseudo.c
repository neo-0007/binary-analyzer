
undefined8 ossl_ccm_stream_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = ccm_cipher_internal(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}

