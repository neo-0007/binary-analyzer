
ulong FUN_004aaa90(code *param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_19c;
  uint local_198;
  uint local_17c;
  char local_168 [296];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0x40;
  if (param_5 < 0x41) {
    iVar2 = param_5;
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = 6;
  if (iVar3 < 7) {
    iVar2 = iVar3;
  }
  iVar4 = (iVar3 - iVar2) + 3;
  iVar2 = (iVar3 - iVar2) + 6;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = -(iVar2 >> 2) + 0x10;
  iVar11 = param_4 / iVar4 + (uint)(iVar4 * (param_4 / iVar4) < param_4);
  if (iVar11 < 1) {
    uVar6 = 0;
  }
  else {
    local_19c = 0;
    iVar13 = 0;
    local_198 = param_4 - 1;
    local_17c = 0;
    do {
      iVar5 = FUN_004aeb30(local_168,0x121,&DAT_007e8a45,iVar3,&DAT_0083e5c2,iVar13);
      if (iVar4 == 0) {
        lVar10 = (long)iVar5;
        uVar6 = 0x121 - lVar10;
        if (2 < uVar6) {
          pcVar8 = local_168 + lVar10;
          iVar5 = iVar5 + 2;
          pcVar8[0] = ' ';
          pcVar8[1] = ' ';
          local_168[lVar10 + 2] = '\0';
          lVar10 = (long)iVar5;
          uVar6 = 0x121 - lVar10;
        }
      }
      else {
        lVar7 = (long)iVar5;
        uVar14 = 0;
        do {
          uVar6 = 0x121 - lVar7;
          if (3 < uVar6) {
            if (iVar13 + (int)uVar14 < param_4) {
              uVar12 = 0x20;
              if (uVar14 == 7) {
                uVar12 = 0x2d;
              }
              FUN_004aeb30(local_168 + lVar7,4,"%02x%c",*(undefined1 *)(param_3 + uVar14),uVar12);
            }
            else {
              builtin_strncpy(local_168 + lVar7,"   ",4);
            }
            iVar5 = iVar5 + 3;
            lVar7 = (long)iVar5;
            uVar6 = 0x121 - lVar7;
          }
          bVar15 = -(iVar2 >> 2) + 0xf != uVar14;
          uVar14 = uVar14 + 1;
        } while (bVar15);
        if (2 < uVar6) {
          pcVar8 = local_168 + lVar7;
          iVar5 = iVar5 + 2;
          pcVar8[0] = ' ';
          pcVar8[1] = ' ';
          local_168[lVar7 + 2] = '\0';
          lVar7 = (long)iVar5;
          uVar6 = 0x121 - lVar7;
        }
        lVar10 = lVar7;
        if (iVar13 < param_4) {
          lVar9 = 1;
          while( true ) {
            uVar6 = 0x121 - lVar7;
            lVar10 = lVar7;
            if (1 < uVar6) {
              cVar1 = *(char *)(param_3 + -1 + lVar9);
              if (0x5e < (byte)(cVar1 - 0x20U)) {
                cVar1 = '.';
              }
              iVar5 = iVar5 + 1;
              lVar10 = (long)iVar5;
              local_168[lVar7] = cVar1;
              local_168[lVar10] = '\0';
              uVar6 = 0x121 - lVar10;
            }
            if ((iVar4 <= (int)lVar9) || (lVar9 = lVar9 + 1, (ulong)local_198 + 2 == lVar9)) break;
            lVar7 = (long)iVar5;
          }
        }
      }
      if (1 < uVar6) {
        lVar10 = (long)(iVar5 + 1);
        local_168[iVar5] = '\n';
        local_168[lVar10] = '\0';
      }
      uVar6 = (*param_1)(local_168,lVar10,param_2);
      if ((int)uVar6 < 0) goto LAB_004aacfd;
      local_17c = local_17c + (int)uVar6;
      iVar13 = iVar13 + iVar4;
      param_3 = param_3 + iVar4;
      local_19c = local_19c + 1;
      local_198 = local_198 - iVar4;
    } while (iVar11 != local_19c);
    uVar6 = (ulong)local_17c;
  }
LAB_004aacfd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

