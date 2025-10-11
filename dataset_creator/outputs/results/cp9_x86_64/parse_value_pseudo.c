
ulong parse_value(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar7 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = *pcVar7;
  if ((cVar3 == '\"') || (cVar3 == '\'')) {
    local_48 = pcVar7 + 1;
    uVar5 = parse_string(param_1,&local_48,(int)cVar3,param_3,param_4);
    uVar6 = (ulong)uVar5;
LAB_0042d020:
    pcVar7 = local_48;
    if ((int)uVar6 == 0) {
LAB_0042cfd0:
      uVar6 = 0;
    }
    else {
LAB_0042d029:
      *param_2 = (long)pcVar7;
    }
  }
  else {
    if (cVar3 == '+') {
      local_48 = pcVar7 + 1;
      uVar5 = parse_number(&local_48,param_3);
      uVar6 = (ulong)uVar5;
      goto LAB_0042d020;
    }
    if (cVar3 == '-') {
      local_48 = pcVar7 + 1;
      uVar5 = parse_number(&local_48,param_3);
      *(long *)(param_3 + 0x10) = -*(long *)(param_3 + 0x10);
      uVar6 = (ulong)uVar5;
      goto LAB_0042d020;
    }
    local_48 = pcVar7;
    if (cVar3 != '0') {
LAB_0042cfae:
      iVar4 = ossl_isdigit((int)cVar3);
      if (iVar4 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = parse_number(param_2,param_3);
          return uVar6;
        }
        goto LAB_0042d2dc;
      }
      iVar4 = ossl_ctype_check((int)*pcVar7,3);
      if (iVar4 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = parse_unquoted(param_1,param_2,param_3,param_4);
          return uVar6;
        }
        goto LAB_0042d2dc;
      }
      goto LAB_0042cfd0;
    }
    if (pcVar7[1] != 'x') {
      iVar4 = ossl_isdigit();
      if (iVar4 == 0) {
        cVar3 = *pcVar7;
        goto LAB_0042cfae;
      }
      pcVar1 = pcVar7 + 1;
      local_48 = pcVar1;
      if ((1 < (byte)(pcVar7[1] - 0x38U)) && (iVar4 = ossl_isdigit(), iVar4 != 0)) {
        cVar3 = pcVar7[1];
        lVar8 = 0;
        pcVar7 = pcVar1;
        do {
          pcVar2 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          lVar8 = (long)(cVar3 + -0x30) + lVar8 * 8;
          iVar4 = ossl_isdigit((int)*pcVar2);
          if (iVar4 == 0) break;
          cVar3 = *pcVar7;
        } while (1 < (byte)(cVar3 - 0x38U));
        uVar5 = ossl_ctype_check((int)*pcVar7,8);
        uVar6 = (ulong)uVar5;
        if (((uVar5 != 0) || (*pcVar7 == ',')) || (*pcVar7 == '\0')) {
          while (iVar4 = ossl_ctype_check((int)*pcVar7,8), iVar4 != 0) {
            pcVar7 = pcVar7 + 1;
          }
          goto LAB_0042d195;
        }
        ERR_new();
        ERR_set_debug("../crypto/property/property_parse.c",0x98,"parse_oct");
        ERR_set_error(0x37,0x68,"HERE-->%s",pcVar1);
        goto LAB_0042cfd3;
      }
      goto LAB_0042cfd0;
    }
    pcVar1 = pcVar7 + 2;
    lVar8 = 0;
    local_48 = pcVar1;
    iVar4 = ossl_ctype_check((int)pcVar7[2],0x10);
    pcVar7 = pcVar1;
    if (iVar4 == 0) goto LAB_0042cfd0;
    do {
      iVar4 = ossl_isdigit((int)*pcVar7);
      if (iVar4 == 0) {
        iVar4 = ossl_tolower((int)*pcVar7);
        iVar4 = iVar4 + -0x61;
      }
      else {
        iVar4 = *pcVar7 + -0x30;
      }
      lVar8 = lVar8 * 0x10 + (long)iVar4;
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      iVar4 = ossl_ctype_check((int)*pcVar2,0x10);
    } while (iVar4 != 0);
    uVar5 = ossl_ctype_check((int)*pcVar7,8);
    uVar6 = (ulong)uVar5;
    if (((uVar5 != 0) || (*pcVar7 == ',')) || (*pcVar7 == '\0')) {
      while (iVar4 = ossl_ctype_check((int)*pcVar7,8), iVar4 != 0) {
        pcVar7 = pcVar7 + 1;
      }
LAB_0042d195:
      *(undefined4 *)(param_3 + 4) = 1;
      uVar6 = 1;
      *(long *)(param_3 + 0x10) = lVar8;
      goto LAB_0042d029;
    }
    ERR_new();
    ERR_set_debug("../crypto/property/property_parse.c",0x83,"parse_hex");
    ERR_set_error(0x37,0x66,"HERE-->%s",pcVar1);
  }
LAB_0042cfd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_0042d2dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

