
bool OSSL_ENCODER_is_a(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*param_1 != 0) {
    uVar2 = ossl_provider_libctx();
    uVar2 = ossl_namemap_stored(uVar2);
    iVar1 = ossl_namemap_name2num(uVar2,param_2);
    bVar3 = (int)param_1[1] == iVar1;
  }
  return bVar3;
}

