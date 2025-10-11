
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __nss_action_parse(char *param_1)

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
  char *__s1;
  sbyte sVar12;
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
  local_d8 = _DAT_00836d80;
  lStack_d0 = _UNK_00836d88;
  while (cVar3 != '\0') {
    while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) {
      cVar3 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar3 == '\0') goto LAB_007a7590;
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
    lVar5 = __nss_module_allocate(param_1,(long)pcVar10 - (long)param_1);
    if (lVar5 == 0) {
      if (local_c8 != local_c0) {
        free(local_c8);
      }
LAB_007a7618:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      uVar7 = 0;
      goto LAB_007a74bc;
    }
    cVar3 = *pcVar10;
    if (cVar3 != '\0') {
      lVar1 = *(long *)(in_FS_OFFSET + -0x40);
      do {
        if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) {
          if (cVar3 == '[') {
            cVar3 = pcVar10[1];
            pcVar10 = pcVar10 + 1;
            if (cVar3 != '\0') goto LAB_007a7226;
            goto LAB_007a7232;
          }
          break;
        }
        cVar3 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
    }
    uVar9 = 0x140;
LAB_007a7545:
    if (lStack_d0 != -1) {
      if ((lStack_d0 == local_d8) &&
         (cVar3 = __libc_dynarray_emplace_enlarge(&local_d8,local_c0,0x10), cVar3 == '\0')) {
        if (local_c8 != local_c0) {
          free(local_c8);
        }
        lStack_d0 = _UNK_00824968;
        local_d8 = _DAT_00824960;
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
LAB_007a7590:
  lVar5 = local_d8;
  if (lStack_d0 != -1) {
    if ((lStack_d0 == local_d8) &&
       (cVar3 = __libc_dynarray_emplace_enlarge(&local_d8,local_c0,0x10), cVar3 == '\0')) {
      if (local_c8 != local_c0) {
        free(local_c8);
      }
      lStack_d0 = _UNK_00824968;
      local_d8 = _DAT_00824960;
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
  uVar7 = __nss_action_allocate(local_c8,lVar5);
LAB_007a74bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
  while( true ) {
    cVar3 = pcVar10[1];
    pcVar10 = pcVar10 + 1;
    if (cVar3 == '\0') break;
LAB_007a7226:
    if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) break;
  }
LAB_007a7232:
  uVar9 = 0x140;
  do {
    cVar2 = cVar3;
    if (cVar3 == '!') {
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    }
    pcVar11 = pcVar10;
    if (cVar2 == '\0') {
LAB_007a74a0:
      if (lStack_d0 == -1) goto LAB_007a7618;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      uVar7 = 0;
      goto LAB_007a74bc;
    }
    do {
      if (((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) != 0) || ((cVar2 - 0x3dU & 0xdf) == 0))
      break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if ((long)pcVar11 - (long)pcVar10 == 7) {
      iVar4 = strncasecmp(pcVar10,"SUCCESS",7);
      if (iVar4 == 0) {
        local_ec = 0xffffff3f;
        sVar12 = 6;
      }
      else {
        iVar4 = strncasecmp(pcVar10,"UNAVAIL",7);
        if (iVar4 != 0) goto LAB_007a74a0;
        local_ec = 0xfffffff3;
        sVar12 = 2;
      }
    }
    else {
      if ((long)pcVar11 - (long)pcVar10 != 8) goto LAB_007a74a0;
      iVar4 = strncasecmp(pcVar10,"NOTFOUND",8);
      if (iVar4 == 0) {
        local_ec = 0xffffffcf;
        sVar12 = 4;
      }
      else {
        iVar4 = strncasecmp(pcVar10,"TRYAGAIN",8);
        if (iVar4 != 0) goto LAB_007a74a0;
        local_ec = 0xfffffffc;
        sVar12 = 0;
      }
    }
    cVar2 = *pcVar11;
    while( true ) {
      if (cVar2 == '\0') goto LAB_007a74a0;
      if ((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) == 0) break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
    }
    if (cVar2 != '=') goto LAB_007a74a0;
    cVar2 = pcVar11[1];
    while( true ) {
      if (cVar2 == '\0') goto LAB_007a74a0;
      __s1 = pcVar11 + 1;
      if ((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) == 0) break;
      cVar2 = pcVar11[2];
      pcVar11 = __s1;
    }
    cVar2 = *__s1;
    pcVar10 = __s1;
    if (cVar2 == '\0') goto LAB_007a74a0;
    do {
      if (((*(byte *)(lVar1 + 1 + (long)cVar2 * 2) & 0x20) != 0) || ((cVar2 - 0x3dU & 0xdf) == 0))
      break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    lVar6 = (long)pcVar10 - (long)__s1;
    if (lVar6 == 6) {
      iVar4 = strncasecmp(__s1,"RETURN",6);
      if (iVar4 == 0) {
        uVar8 = 0x155;
        iVar4 = 1;
        goto LAB_007a73c7;
      }
      goto LAB_007a74a0;
    }
    if (lVar6 == 8) {
      iVar4 = strncasecmp(__s1,"CONTINUE",8);
      if (iVar4 == 0) {
        uVar8 = 0;
        iVar4 = 0;
        goto LAB_007a73c7;
      }
      goto LAB_007a74a0;
    }
    if ((lVar6 != 5) || (iVar4 = strncasecmp(__s1,"MERGE",5), iVar4 != 0)) goto LAB_007a74a0;
    uVar8 = 0x2aa;
    iVar4 = 2;
LAB_007a73c7:
    if (cVar3 == '!') {
      uVar9 = (uVar9 >> sVar12 & 3) << sVar12 | uVar8 & local_ec;
    }
    else {
      uVar9 = local_ec & uVar9 | iVar4 << sVar12;
    }
    cVar3 = *pcVar10;
    if (cVar3 == '\0') goto LAB_007a74a0;
    do {
      if ((*(byte *)(lVar1 + 1 + (long)cVar3 * 2) & 0x20) == 0) {
        if (cVar3 == ']') {
          pcVar10 = pcVar10 + 1;
          goto LAB_007a7545;
        }
        break;
      }
      cVar3 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
  } while( true );
}

