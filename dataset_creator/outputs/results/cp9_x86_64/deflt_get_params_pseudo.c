
bool deflt_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,"name");
  if ((lVar3 != 0) &&
     (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"OpenSSL Default Provider"), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"version");
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"3.0.2"), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"buildinfo");
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"3.0.2"), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"status");
  bVar4 = true;
  if (lVar3 != 0) {
    uVar2 = ossl_prov_is_running();
    iVar1 = OSSL_PARAM_set_int(lVar3,uVar2);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

