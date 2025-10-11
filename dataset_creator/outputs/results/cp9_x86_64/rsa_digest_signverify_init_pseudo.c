
undefined8
rsa_digest_signverify_init
          (long param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

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
  iVar1 = rsa_signverify_init_part_0(param_1,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 != (char *)0x0) &&
     (((*param_2 == '\0' || (iVar1 = OPENSSL_strcasecmp(param_1 + 0x34,param_2), iVar1 != 0)) &&
      (iVar1 = rsa_setup_md(param_1,param_2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)))) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_0047de5b;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_0047de5b:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}

