
bool dsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_string
                      (lVar2,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"digest");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,param_1 + 0x19);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

