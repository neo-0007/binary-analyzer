
bool kdf_pkcs12_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
    return true;
  }
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 1,param_2,uVar2);
  if ((((iVar1 == 0) ||
       ((lVar3 = OSSL_PARAM_locate_const(param_2,"pass"), lVar3 != 0 &&
        (iVar1 = pkcs12kdf_set_membuf(param_1 + 4,param_1 + 5,lVar3), iVar1 == 0)))) ||
      ((lVar3 = OSSL_PARAM_locate_const(param_2,"salt"), lVar3 != 0 &&
       (iVar1 = pkcs12kdf_set_membuf(param_1 + 6,param_1 + 7,lVar3), iVar1 == 0)))) ||
     ((lVar3 = OSSL_PARAM_locate_const(param_2,"id"), lVar3 != 0 &&
      (iVar1 = OSSL_PARAM_get_int(lVar3,param_1 + 9), iVar1 == 0)))) {
    bVar4 = false;
  }
  else {
    lVar3 = OSSL_PARAM_locate_const(param_2,"iter");
    if (lVar3 == 0) {
      return true;
    }
    iVar1 = OSSL_PARAM_get_uint64(lVar3,param_1 + 8);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

