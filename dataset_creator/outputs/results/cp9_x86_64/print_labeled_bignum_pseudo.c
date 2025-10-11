
uint print_labeled_bignum(BIO *param_1,undefined1 *param_2,BIGNUM *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *ptr;
  __int32_t **pp_Var5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long in_FS_OFFSET;
  undefined4 local_45;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_45 = 0x20202020;
  local_41 = 0;
  if (param_3 == (BIGNUM *)0x0) {
LAB_0045fd40:
    uVar4 = 0;
    goto LAB_0045fce3;
  }
  puVar12 = &DAT_00813159;
  if (param_2 == (undefined1 *)0x0) {
    puVar12 = &DAT_008343a2;
    param_2 = &DAT_008343a2;
  }
  iVar2 = BN_is_zero(param_3);
  if (iVar2 != 0) {
    uVar4 = BIO_printf(param_1,"%s%s0\n",param_2,puVar12);
    goto LAB_0045fce3;
  }
  iVar2 = BN_num_bits(param_3);
  if (iVar2 < 0x41) {
    puVar6 = (undefined8 *)bn_get_words();
    iVar2 = BN_is_negative(param_3);
    puVar11 = &DAT_008343a2;
    if (iVar2 != 0) {
      puVar11 = &DAT_0080042c;
    }
    uVar4 = BIO_printf(param_1,"%s%s%s%lu (%s0x%lx)\n",param_2,puVar12,puVar11,*puVar6,puVar11,
                       *puVar6);
    goto LAB_0045fce3;
  }
  ptr = BN_bn2hex(param_3);
  if (ptr == (char *)0x0) goto LAB_0045fd40;
  pcVar7 = "";
  pcVar9 = ptr;
  if (*ptr == '-') {
    pcVar9 = ptr + 1;
    pcVar7 = " (Negative)";
  }
  iVar2 = BIO_printf(param_1,"%s%s\n",param_2,pcVar7);
  uVar4 = 0;
  if (0 < iVar2) {
    iVar2 = BIO_printf(param_1,"%s",&local_45);
    if (0 < iVar2) {
      cVar1 = *pcVar9;
      iVar2 = 0;
      iVar3 = iVar2;
      if ('7' < cVar1) {
        iVar2 = BIO_printf(param_1,"%02x",0);
        if (iVar2 < 1) goto LAB_0045fccd;
        cVar1 = *pcVar9;
        iVar2 = 1;
        iVar3 = iVar2;
      }
      while (cVar1 != '\0') {
        if (((uint)(iVar2 * -0x11111111) < 0x11111112) && (iVar2 != 0)) {
          iVar3 = BIO_printf(param_1,":\n%s",&local_45);
          if (iVar3 < 1) goto LAB_0045fccd;
          pp_Var5 = __ctype_tolower_loc();
          uVar10 = (ulong)(uint)(*pp_Var5)[pcVar9[1]];
          uVar8 = (ulong)(uint)(*pp_Var5)[*pcVar9];
          pcVar7 = "";
        }
        else {
          pp_Var5 = __ctype_tolower_loc();
          pcVar7 = "";
          uVar10 = (ulong)(uint)(*pp_Var5)[pcVar9[1]];
          uVar8 = (ulong)(uint)(*pp_Var5)[*pcVar9];
          if (iVar3 != 0) {
            pcVar7 = ":";
          }
        }
        iVar3 = BIO_printf(param_1,"%s%c%c",pcVar7,uVar8,uVar10);
        if (iVar3 < 1) goto LAB_0045fccd;
        pcVar9 = pcVar9 + 2;
        iVar2 = iVar2 + 1;
        iVar3 = 1;
        cVar1 = *pcVar9;
      }
      iVar2 = BIO_printf(param_1,"\n");
      uVar4 = (uint)(0 < iVar2);
    }
  }
LAB_0045fccd:
  CRYPTO_free(ptr);
LAB_0045fce3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

