
bool sm2sig_get_ctx_params(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"algorithm-id");
  if (lVar3 == 0) {
LAB_0047fcd7:
    lVar3 = OSSL_PARAM_locate(param_2,"digest-size");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x170));
      if (iVar2 == 0) goto LAB_0047fd50;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"digest");
    bVar1 = true;
    if (lVar3 != 0) {
      lVar4 = param_1 + 0x19;
      if (*(long *)(param_1 + 0x160) != 0) {
        lVar4 = EVP_MD_get0_name(*(long *)(param_1 + 0x160),lVar4);
      }
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,lVar4);
      return iVar2 != 0;
    }
  }
  else {
    iVar2 = OSSL_PARAM_set_octet_string
                      (lVar3,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
    if (iVar2 != 0) goto LAB_0047fcd7;
LAB_0047fd50:
    bVar1 = false;
  }
  return bVar1;
}

