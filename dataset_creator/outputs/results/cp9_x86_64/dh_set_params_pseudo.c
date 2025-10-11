
bool dh_set_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
  bVar3 = true;
  if ((lVar2 != 0) && (bVar3 = false, *(int *)(lVar2 + 8) == 5)) {
    iVar1 = ossl_dh_buf2key(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    return iVar1 != 0;
  }
  return bVar3;
}

