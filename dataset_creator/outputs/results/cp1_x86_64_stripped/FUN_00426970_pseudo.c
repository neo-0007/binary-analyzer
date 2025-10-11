
ulong FUN_00426970(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

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
    uVar5 = FUN_00426340(param_1,&local_48,(int)cVar3,param_3,param_4);
    uVar6 = (ulong)uVar5;
LAB_00426a40:
    pcVar7 = local_48;
    if ((int)uVar6 == 0) {
LAB_004269f0:
      uVar6 = 0;
    }
    else {
LAB_00426a49:
      *param_2 = (long)pcVar7;
    }
  }
  else {
    if (cVar3 == '+') {
      local_48 = pcVar7 + 1;
      uVar5 = FUN_004264b0(&local_48,param_3);
      uVar6 = (ulong)uVar5;
      goto LAB_00426a40;
    }
    if (cVar3 == '-') {
      local_48 = pcVar7 + 1;
      uVar5 = FUN_004264b0(&local_48,param_3);
      *(long *)(param_3 + 0x10) = -*(long *)(param_3 + 0x10);
      uVar6 = (ulong)uVar5;
      goto LAB_00426a40;
    }
    local_48 = pcVar7;
    if (cVar3 != '0') {
LAB_004269ce:
      iVar4 = FUN_005466e0((int)cVar3);
      if (iVar4 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = FUN_004264b0(param_2,param_3);
          return uVar6;
        }
        goto LAB_00426cfc;
      }
      iVar4 = FUN_005466b0((int)*pcVar7,3);
      if (iVar4 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = FUN_004265a0(param_1,param_2,param_3,param_4);
          return uVar6;
        }
        goto LAB_00426cfc;
      }
      goto LAB_004269f0;
    }
    if (pcVar7[1] != 'x') {
      iVar4 = FUN_005466e0();
      if (iVar4 == 0) {
        cVar3 = *pcVar7;
        goto LAB_004269ce;
      }
      pcVar1 = pcVar7 + 1;
      local_48 = pcVar1;
      if ((1 < (byte)(pcVar7[1] - 0x38U)) && (iVar4 = FUN_005466e0(), iVar4 != 0)) {
        cVar3 = pcVar7[1];
        lVar8 = 0;
        pcVar7 = pcVar1;
        do {
          pcVar2 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          lVar8 = (long)(cVar3 + -0x30) + lVar8 * 8;
          iVar4 = FUN_005466e0((int)*pcVar2);
          if (iVar4 == 0) break;
          cVar3 = *pcVar7;
        } while (1 < (byte)(cVar3 - 0x38U));
        uVar5 = FUN_005466b0((int)*pcVar7,8);
        uVar6 = (ulong)uVar5;
        if (((uVar5 != 0) || (*pcVar7 == ',')) || (*pcVar7 == '\0')) {
          while (iVar4 = FUN_005466b0((int)*pcVar7,8), iVar4 != 0) {
            pcVar7 = pcVar7 + 1;
          }
          goto LAB_00426bb5;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/property/property_parse.c",0x98,"parse_oct");
        FUN_0051f8f0(0x37,0x68,"HERE-->%s",pcVar1);
        goto LAB_004269f3;
      }
      goto LAB_004269f0;
    }
    pcVar1 = pcVar7 + 2;
    lVar8 = 0;
    local_48 = pcVar1;
    iVar4 = FUN_005466b0((int)pcVar7[2],0x10);
    pcVar7 = pcVar1;
    if (iVar4 == 0) goto LAB_004269f0;
    do {
      iVar4 = FUN_005466e0((int)*pcVar7);
      if (iVar4 == 0) {
        iVar4 = FUN_00546710((int)*pcVar7);
        iVar4 = iVar4 + -0x61;
      }
      else {
        iVar4 = *pcVar7 + -0x30;
      }
      lVar8 = lVar8 * 0x10 + (long)iVar4;
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      iVar4 = FUN_005466b0((int)*pcVar2,0x10);
    } while (iVar4 != 0);
    uVar5 = FUN_005466b0((int)*pcVar7,8);
    uVar6 = (ulong)uVar5;
    if (((uVar5 != 0) || (*pcVar7 == ',')) || (*pcVar7 == '\0')) {
      while (iVar4 = FUN_005466b0((int)*pcVar7,8), iVar4 != 0) {
        pcVar7 = pcVar7 + 1;
      }
LAB_00426bb5:
      *(undefined4 *)(param_3 + 4) = 1;
      uVar6 = 1;
      *(long *)(param_3 + 0x10) = lVar8;
      goto LAB_00426a49;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/property/property_parse.c",0x83,"parse_hex");
    FUN_0051f8f0(0x37,0x66,"HERE-->%s",pcVar1);
  }
LAB_004269f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00426cfc:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

