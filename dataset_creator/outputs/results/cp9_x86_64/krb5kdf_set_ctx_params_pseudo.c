
bool krb5kdf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 != 0) {
    iVar1 = ossl_prov_cipher_load_from_params(param_1 + 1,param_2,uVar2);
    if (iVar1 == 0) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"key");
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[4],param_1[5],"../providers/implementations/kdfs/krb5kdf.c",99);
      param_1[4] = 0;
      param_1[5] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"constant");
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[6],param_1[7],"../providers/implementations/kdfs/krb5kdf.c",99);
      param_1[6] = 0;
      param_1[7] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
      return iVar1 != 0;
    }
  }
  return true;
}

