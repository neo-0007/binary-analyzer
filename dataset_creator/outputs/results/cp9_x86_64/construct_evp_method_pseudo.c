
long construct_evp_method(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_provider_libctx(param_2);
  uVar2 = ossl_namemap_stored(uVar2);
  iVar1 = ossl_namemap_add_names(uVar2,0,*param_1,0x3a);
  if (iVar1 == 0) {
    return 0;
  }
  lVar3 = (**(code **)(param_3 + 0x30))(iVar1,param_1,param_2);
  if (lVar3 != 0) {
    return lVar3;
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}

