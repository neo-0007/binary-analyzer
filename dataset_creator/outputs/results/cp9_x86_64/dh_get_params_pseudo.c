
bool dh_get_params(DH *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,"bits");
  if (lVar3 != 0) {
    uVar1 = DH_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar1 = DH_security_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"max-size");
  if (lVar3 != 0) {
    iVar2 = DH_size(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,iVar2);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 5) {
      return false;
    }
    lVar4 = ossl_dh_key2buf(param_1,lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x18),0);
    *(long *)(lVar3 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return false;
    }
  }
  iVar2 = ossl_dh_params_todata(param_1,0,param_2);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = ossl_dh_key_todata(param_1,0,param_2,1);
  return iVar2 != 0;
}

