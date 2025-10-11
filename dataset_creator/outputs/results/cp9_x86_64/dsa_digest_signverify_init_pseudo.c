
undefined8
dsa_digest_signverify_init
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = dsa_signverify_init_part_0(param_1,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = dsa_setup_md(param_1,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x168) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_0047ae87;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x160),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
LAB_0047ae87:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x168) = 0;
  return 0;
}

