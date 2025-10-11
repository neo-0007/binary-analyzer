
undefined8 kdf_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = ossl_kdf_data_up_ref(param_2);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x10) = param_2;
      uVar2 = EVP_KDF_CTX_set_params(*(undefined8 *)(param_1 + 8),param_3);
      return uVar2;
    }
  }
  return 0;
}

