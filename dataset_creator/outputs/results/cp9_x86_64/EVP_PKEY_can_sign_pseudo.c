
ulong EVP_PKEY_can_sign(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar2 = EVP_PKEY_get_base_id(param_1);
    if (iVar2 == 0x198) {
      uVar6 = EC_KEY_can_sign(*(undefined8 *)(param_1 + 0x20));
      return uVar6;
    }
    if (0x198 < iVar2) {
      return (ulong)(iVar2 - 0x43fU < 2);
    }
    uVar6 = 1;
    if (iVar2 != 6) {
      return (ulong)(iVar2 == 0x74);
    }
  }
  else {
    uVar3 = EVP_KEYMGMT_get0_provider();
    uVar3 = ossl_provider_libctx(uVar3);
    pcVar1 = *(code **)(*(long *)(param_1 + 0x60) + 0x98);
    if (pcVar1 == (code *)0x0) {
      uVar4 = EVP_KEYMGMT_get0_name();
    }
    else {
      uVar4 = (*pcVar1)(0xc);
    }
    lVar5 = EVP_SIGNATURE_fetch(uVar3,uVar4,0);
    uVar6 = 0;
    if (lVar5 != 0) {
      EVP_SIGNATURE_free();
      return 1;
    }
  }
  return uVar6;
}

