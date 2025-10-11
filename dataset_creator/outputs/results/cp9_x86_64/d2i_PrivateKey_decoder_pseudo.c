
long d2i_PrivateKey_decoder
               (int param_1,long *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char **ppcVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  char *local_50 [4];
  
  lVar4 = 0;
  local_50[2] = *(char **)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50[0] = "PrivateKeyInfo";
  local_50[1] = (char *)0x0;
  local_68 = param_4;
  if ((param_1 != 0) && (lVar4 = evp_pkey_type2name(), lVar4 == 0)) {
LAB_005a742d:
    lVar4 = 0;
LAB_005a742f:
    if (local_50[2] != (char *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    return lVar4;
  }
  ppcVar6 = &local_58;
  plVar7 = &local_60;
  local_70 = *param_3;
  pcVar5 = "type-specific";
  if (param_2 == (long *)0x0) goto LAB_005a73cb;
LAB_005a7341:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    plVar7 = param_2;
  }
  lVar3 = OSSL_DECODER_CTX_new_for_pkey(plVar7,"DER",pcVar5,lVar4,0x87,param_5,param_6);
  *param_2 = lVar1;
  do {
    if (lVar3 != 0) {
      iVar2 = OSSL_DECODER_from_data(lVar3,param_3,&local_68);
      OSSL_DECODER_CTX_free(lVar3);
      if (iVar2 == 0) goto LAB_005a73aa;
      if ((*plVar7 == 0) || (iVar2 = evp_keymgmt_util_has(*plVar7,1), iVar2 == 0)) {
        *param_3 = local_70;
LAB_005a7420:
        if (param_2 != plVar7) {
          EVP_PKEY_free((EVP_PKEY *)*plVar7);
        }
        goto LAB_005a742d;
      }
      if (param_2 != (long *)0x0) {
        *param_2 = *plVar7;
      }
      lVar4 = *plVar7;
      goto LAB_005a742f;
    }
LAB_005a73aa:
    ppcVar6 = ppcVar6 + 1;
    if (local_50 + 2 == ppcVar6) goto LAB_005a7420;
    local_70 = *param_3;
    pcVar5 = *ppcVar6;
    if (param_2 != (long *)0x0) goto LAB_005a7341;
LAB_005a73cb:
    lVar3 = OSSL_DECODER_CTX_new_for_pkey(plVar7,"DER",pcVar5,lVar4,0x87,param_5,param_6);
  } while( true );
}

