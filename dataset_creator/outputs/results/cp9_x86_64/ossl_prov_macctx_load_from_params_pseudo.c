
undefined8
ossl_prov_macctx_load_from_params
          (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"mac");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      param_3 = *(long *)(lVar2 + 0x10);
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) goto LAB_0043a7d2;
      lVar2 = 0;
      goto LAB_0043a7dc;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    }
LAB_0043a7e1:
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 1;
    }
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
LAB_0043a7d2:
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
LAB_0043a7dc:
      if (param_3 == 0) goto LAB_0043a7e1;
    }
    lVar3 = EVP_MAC_fetch(param_6,param_3,lVar2);
    EVP_MAC_CTX_free(*param_1);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = EVP_MAC_CTX_new(lVar3);
    }
    *param_1 = lVar4;
    EVP_MAC_free(lVar3);
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = ossl_prov_set_macctx(lVar3,param_2,param_4,param_5,0,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
  EVP_MAC_CTX_free(*param_1);
  *param_1 = 0;
  return 0;
}

