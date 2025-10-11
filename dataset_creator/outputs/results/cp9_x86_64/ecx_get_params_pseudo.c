
undefined8
ecx_get_params(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_3), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_4), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_5), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (((lVar2 != 0) && (*(uint *)(param_1 + 0x60) < 2)) &&
     (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58)),
     iVar1 == 0)) {
    return 0;
  }
  uVar3 = key_to_params(param_1,0,param_2,1);
  return uVar3;
}

