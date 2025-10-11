
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007b0a40(char *param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  long in_FS_OFFSET;
  uint local_ec;
  long local_d8;
  long lStack_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [128];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = *param_1;
  local_c8 = local_c0;
  local_d8 = _DAT_00840fa0;
  lStack_d0 = _UNK_00840fa8;
  while (cVar3 != '\0') {
    while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) {
      cVar3 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar3 == '\0') goto LAB_007b0ed0;
    }
    cVar3 = *param_1;
    pcVar10 = param_1;
    if (cVar3 == '\0') break;
    do {
      if (((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) ||
         (cVar3 == '[')) break;
      cVar3 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    if (pcVar10 == param_1) break;
    lVar5 = FUN_00779b90(param_1,(long)pcVar10 - (long)param_1);
    if (lVar5 == 0) {
      if (local_c8 != local_c0) {
        FUN_007104f0();
      }
LAB_007b0f58:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      uVar7 = 0;
      goto LAB_007b0dfc;
    }
    cVar3 = *pcVar10;
    if (cVar3 != '\0') {
      lVar1 = *(long *)(in_FS_OFFSET + -0x40);
      do {
        if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) {
          if (cVar3 == '[') {
            cVar3 = pcVar10[1];
            pcVar10 = pcVar10 + 1;
            if (cVar3 != '\0') goto LAB_007b0b66;
            goto LAB_007b0b72;
          }
          break;
        }
        cVar3 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
    }
    uVar9 = 0x140;
LAB_007b0e85:
    if (lStack_d0 != -1) {
      if ((lStack_d0 == local_d8) && (cVar3 = FUN_007a2e50(&local_d8,local_c0,0x10), cVar3 == '\0'))
      {
        if (local_c8 != local_c0) {
          FUN_007104f0();
        }
        lStack_d0 = _UNK_0082eb88;
        local_d8 = _DAT_0082eb80;
        local_c8 = local_c0;
      }
      else {
        *(long *)(local_c8 + local_d8 * 0x10) = lVar5;
        *(uint *)((long)(local_c8 + local_d8 * 0x10) + 8) = uVar9;
        local_d8 = local_d8 + 1;
      }
    }
    param_1 = pcVar10;
    cVar3 = *pcVar10;
  }
LAB_007b0ed0:
  lVar5 = local_d8;
  if (lStack_d0 != -1) {
    if ((lStack_d0 == local_d8) && (cVar3 = FUN_007a2e50(&local_d8,local_c0,0x10), cVar3 == '\0')) {
      if (local_c8 != local_c0) {
        FUN_007104f0();
      }
      lStack_d0 = _UNK_0082eb88;
      local_d8 = _DAT_0082eb80;
      lVar5 = 0;
      local_c8 = local_c0;
    }
    else {
      *(undefined8 *)(local_c8 + local_d8 * 0x10) = 0;
      *(undefined4 *)((long)(local_c8 + local_d8 * 0x10) + 8) = 0;
      lVar5 = local_d8 + 1;
      local_d8 = local_d8 + 1;
    }
  }
  uVar7 = FUN_007c76a0(local_c8,lVar5);
LAB_007b0dfc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
  while( true ) {
    cVar3 = pcVar10[1];
    pcVar10 = pcVar10 + 1;
    if (cVar3 == '\0') break;
LAB_007b0b66:
    if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) break;
  }
LAB_007b0b72:
  uVar9 = 0x140;
  do {
    cVar2 = cVar3;
    if (cVar3 == '!') {
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    }
    pcVar11 = pcVar10;
    if (cVar2 == '\0') {
LAB_007b0de0:
      if (lStack_d0 == -1) goto LAB_007b0f58;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      uVar7 = 0;
      goto LAB_007b0dfc;
    }
    do {
      if (((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) != 0) || ((cVar2 - 0x3dU & 0xdf) == 0))
      break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if ((long)pcVar11 - (long)pcVar10 == 7) {
      iVar4 = thunk_FUN_007a3140(pcVar10,"SUCCESS",7);
      if (iVar4 == 0) {
        local_ec = 0xffffff3f;
        bVar13 = 6;
      }
      else {
        iVar4 = thunk_FUN_007a3140(pcVar10,"UNAVAIL",7);
        if (iVar4 != 0) goto LAB_007b0de0;
        local_ec = 0xfffffff3;
        bVar13 = 2;
      }
    }
    else {
      if ((long)pcVar11 - (long)pcVar10 != 8) goto LAB_007b0de0;
      iVar4 = thunk_FUN_007a3140(pcVar10,"NOTFOUND",8);
      if (iVar4 == 0) {
        local_ec = 0xffffffcf;
        bVar13 = 4;
      }
      else {
        iVar4 = thunk_FUN_007a3140(pcVar10,"TRYAGAIN",8);
        bVar13 = (byte)iVar4;
        if (iVar4 != 0) goto LAB_007b0de0;
        local_ec = 0xfffffffc;
      }
    }
    cVar2 = *pcVar11;
    while( true ) {
      if (cVar2 == '\0') goto LAB_007b0de0;
      if ((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) == 0) break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
    }
    if (cVar2 != '=') goto LAB_007b0de0;
    cVar2 = pcVar11[1];
    while( true ) {
      if (cVar2 == '\0') goto LAB_007b0de0;
      pcVar12 = pcVar11 + 1;
      if ((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) == 0) break;
      cVar2 = pcVar11[2];
      pcVar11 = pcVar12;
    }
    cVar2 = *pcVar12;
    pcVar10 = pcVar12;
    if (cVar2 == '\0') goto LAB_007b0de0;
    do {
      if (((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) != 0) || ((cVar2 - 0x3dU & 0xdf) == 0))
      break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    lVar6 = (long)pcVar10 - (long)pcVar12;
    if (lVar6 == 6) {
      iVar4 = thunk_FUN_007a3140(pcVar12,"RETURN",6);
      if (iVar4 == 0) {
        uVar8 = 0x155;
        iVar4 = 1;
        goto LAB_007b0d07;
      }
      goto LAB_007b0de0;
    }
    if (lVar6 == 8) {
      iVar4 = thunk_FUN_007a3140(pcVar12,"CONTINUE",8);
      if (iVar4 == 0) {
        uVar8 = 0;
        iVar4 = 0;
        goto LAB_007b0d07;
      }
      goto LAB_007b0de0;
    }
    if ((lVar6 != 5) || (iVar4 = thunk_FUN_007a3140(pcVar12,"MERGE",5), iVar4 != 0))
    goto LAB_007b0de0;
    uVar8 = 0x2aa;
    iVar4 = 2;
LAB_007b0d07:
    if (cVar3 == '!') {
      uVar9 = (uVar9 >> (bVar13 & 0x1f) & 3) << (bVar13 & 0x1f) | uVar8 & local_ec;
    }
    else {
      uVar9 = local_ec & uVar9 | iVar4 << (bVar13 & 0x1f);
    }
    cVar3 = *pcVar10;
    if (cVar3 == '\0') goto LAB_007b0de0;
    do {
      if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) {
        if (cVar3 == ']') {
          pcVar10 = pcVar10 + 1;
          goto LAB_007b0e85;
        }
        break;
      }
      cVar3 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
  } while( true );
}

