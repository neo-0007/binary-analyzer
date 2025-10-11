
bool ecx_gen_set_params_part_0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"group");
  if (lVar2 == 0) {
LAB_00470de2:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    bVar4 = true;
    if ((lVar2 != 0) && (bVar4 = false, *(int *)(lVar2 + 8) == 4)) {
      CRYPTO_free(*(void **)(param_1 + 8));
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "../providers/implementations/keymgmt/ecx_kmgmt.c",0x22d);
      bVar4 = pcVar3 != (char *)0x0;
      *(char **)(param_1 + 8) = pcVar3;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = *(int *)(lVar2 + 8);
      pcVar3 = "x25519";
joined_r0x00470e53:
      if ((iVar1 == 4) &&
         (iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar2 + 0x10),pcVar3), iVar1 == 0))
      goto LAB_00470de2;
    }
    else if (*(int *)(param_1 + 0x10) == 1) {
      iVar1 = *(int *)(lVar2 + 8);
      pcVar3 = "x448";
      goto joined_r0x00470e53;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/ecx_kmgmt.c",0x224,"ecx_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
    bVar4 = false;
  }
  return bVar4;
}

