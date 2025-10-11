
bool key2pvk_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"encrypt-level");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 8);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

