
undefined8 * X509_PUBKEY_dup(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *str;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"../crypto/x509/x_pubkey.c",0x11d);
  local_38 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    pcVar3 = (char *)param_1[4];
    puVar2[3] = param_1[3];
    CRYPTO_free((void *)puVar2[4]);
    puVar2[4] = 0;
    if (pcVar3 != (char *)0x0) {
      pcVar3 = CRYPTO_strdup(pcVar3,"../crypto/x509/x_pubkey.c",0x37);
      puVar2[4] = pcVar3;
      if (pcVar3 == (char *)0x0) goto LAB_0059b4b0;
    }
    pXVar4 = X509_ALGOR_dup((X509_ALGOR *)*param_1);
    *puVar2 = pXVar4;
    if (pXVar4 != (X509_ALGOR *)0x0) {
      str = ASN1_BIT_STRING_new();
      puVar2[1] = str;
      if (str != (ASN1_BIT_STRING *)0x0) {
        iVar1 = ASN1_BIT_STRING_set(str,*(void **)((int *)param_1[1] + 2),*(int *)param_1[1]);
        if (iVar1 != 0) {
          if (param_1[2] != 0) {
            ERR_set_mark();
            lVar5 = EVP_PKEY_dup(param_1[2]);
            puVar2[2] = lVar5;
            if (lVar5 == 0) {
              *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) | 1;
              iVar1 = x509_pubkey_decode(puVar2 + 2,puVar2);
              if (iVar1 < 1) {
                puVar2 = (undefined8 *)0x0;
                x509_pubkey_ex_free(&local_38,local_it_18);
                ERR_clear_last_mark();
                goto LAB_0059b4ee;
              }
            }
            ERR_pop_to_mark();
          }
          goto LAB_0059b4ee;
        }
      }
    }
  }
LAB_0059b4b0:
  puVar2 = (undefined8 *)0x0;
  x509_pubkey_ex_free(&local_38,local_it_18);
  ERR_new();
  ERR_set_debug("../crypto/x509/x_pubkey.c",0x128,"X509_PUBKEY_dup");
  ERR_set_error(0xb,0xc0100,0);
LAB_0059b4ee:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

