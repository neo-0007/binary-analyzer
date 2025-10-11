
undefined8
ed448_digest_verify(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (param_3 == 0x72)) {
    uVar3 = ossl_ed448_verify(*param_1,param_4,param_5,param_2,lVar1 + 0x11,0,0,
                              *(undefined8 *)(lVar1 + 8));
    return uVar3;
  }
  return 0;
}

