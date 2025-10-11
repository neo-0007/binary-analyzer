
undefined8 x509_pubkey_ex_new_ex(undefined8 *param_1,undefined8 param_2,long param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *pAVar5;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)CRYPTO_zalloc(0x30,"../crypto/x509/x_pubkey.c",0x73);
  local_38 = plVar1;
  if (plVar1 == (long *)0x0) {
LAB_0059ad90:
    x509_pubkey_ex_free(&local_38,0);
    ERR_new();
    ERR_set_debug("../crypto/x509/x_pubkey.c",0x78,"x509_pubkey_ex_new_ex");
    ERR_set_error(0xd,0xc0100,0);
    uVar3 = 0;
  }
  else {
    if (*plVar1 == 0) {
      pXVar4 = X509_ALGOR_new();
      *plVar1 = (long)pXVar4;
      if (pXVar4 == (X509_ALGOR *)0x0) goto LAB_0059ad90;
    }
    if (plVar1[1] == 0) {
      pAVar5 = ASN1_BIT_STRING_new();
      plVar1[1] = (long)pAVar5;
      if (pAVar5 == (ASN1_BIT_STRING *)0x0) goto LAB_0059ad90;
    }
    plVar1[3] = param_3;
    CRYPTO_free((void *)plVar1[4]);
    plVar1[4] = 0;
    if (param_4 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_4,"../crypto/x509/x_pubkey.c",0x37);
      plVar1[4] = (long)pcVar2;
      if (pcVar2 == (char *)0x0) goto LAB_0059ad90;
    }
    *param_1 = plVar1;
    uVar3 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

