
undefined8 kdf_derive(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    if (param_2 != 0) {
      uVar1 = EVP_KDF_derive(*(undefined8 *)(param_1 + 8),param_2,param_4,0);
      return uVar1;
    }
    uVar1 = EVP_KDF_CTX_get_kdf_size(*(undefined8 *)(param_1 + 8));
    *param_3 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

