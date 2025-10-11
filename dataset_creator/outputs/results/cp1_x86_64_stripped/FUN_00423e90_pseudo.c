
int FUN_00423e90(char *param_1,int param_2,long param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  int local_84;
  char *local_80;
  int local_78;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  if ((param_3 == 0) || (pbVar5 = *(byte **)(param_3 + 0x18), pbVar5 == (byte *)0x0)) {
    local_84 = 0;
  }
  else {
    if (param_4 == 0) {
      iVar9 = FUN_00423da0(param_3);
      if ((iVar9 != 0) &&
         ((lVar7 = FUN_00423c40(iVar9), lVar7 != 0 || (lVar7 = FUN_00423b00(iVar9), lVar7 != 0)))) {
        if (param_1 != (char *)0x0) {
          FUN_0041c470(param_1,lVar7,(long)param_2);
        }
        local_84 = thunk_FUN_007129d0(lVar7);
        goto LAB_00423faf;
      }
      pbVar5 = *(byte **)(param_3 + 0x18);
    }
    iVar9 = *(int *)(param_3 + 0x14);
    if (iVar9 < 0x24b) {
      local_84 = 0;
      lVar7 = 0;
      if (0 < iVar9) {
        bVar3 = true;
        local_80 = param_1;
        local_78 = param_2;
LAB_00423f1c:
        uVar10 = (uint)*pbVar5;
        iVar9 = iVar9 + -1;
        if ((iVar9 != 0) || (-1 < (char)*pbVar5)) {
          uVar11 = 0;
          bVar2 = false;
          pbVar5 = pbVar5 + 1;
LAB_00423f38:
          if (bVar2) {
            iVar4 = FUN_004bcc70(lVar7);
            if (iVar4 == 0) goto LAB_00423f9f;
            if (-1 < (char)uVar10) goto code_r0x00423ff1;
LAB_00423f73:
            iVar4 = FUN_004bc220(lVar7,lVar7,7);
            if (iVar4 == 0) goto LAB_00423f9f;
            bVar2 = true;
          }
          else {
            uVar11 = uVar11 | uVar10 & 0x7f;
            if (-1 < (char)uVar10) {
              if (!bVar3) goto LAB_00424049;
              if (uVar11 < 0x50) {
                bVar3 = false;
                goto LAB_00424007;
              }
              uVar11 = uVar11 - 0x50;
              if (local_80 != (char *)0x0) {
                bVar3 = false;
                iVar4 = 2;
                if (1 < local_78) goto LAB_0042422f;
              }
              local_84 = local_84 + 1;
              goto LAB_00424049;
            }
            if (0x1ffffffffffffff < uVar11) {
              if ((lVar7 != 0) || (lVar7 = FUN_004b7690(), lVar7 != 0)) {
                iVar4 = FUN_004b8190(lVar7,uVar11);
                if (iVar4 != 0) goto LAB_00423f73;
                goto LAB_00423f9f;
              }
              goto LAB_004240b9;
            }
            uVar11 = uVar11 << 7;
          }
          pbVar12 = pbVar5 + 1;
          bVar1 = *pbVar5;
          uVar10 = (uint)bVar1;
          iVar9 = iVar9 + -1;
          pbVar5 = pbVar12;
          if ((iVar9 == 0) && ((char)bVar1 < '\0')) goto LAB_00423f9f;
          goto LAB_00423f38;
        }
        goto LAB_00423f9f;
      }
LAB_004242fb:
      FUN_004b7fa0(lVar7);
    }
    else {
LAB_004240b9:
      lVar7 = 0;
LAB_00423f9f:
      FUN_004b7fa0(lVar7);
      local_84 = -1;
    }
  }
LAB_00423faf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_84;
code_r0x00423ff1:
  if (bVar3) {
    if (uVar11 < 0x50) {
LAB_00424007:
      iVar4 = (int)(uVar11 / 0x28);
      uVar11 = uVar11 - (long)(iVar4 * 0x28);
      if ((local_80 != (char *)0x0) && (1 < local_78)) goto LAB_0042422f;
      local_84 = local_84 + 1;
      if (bVar3) goto LAB_004240fa;
LAB_00424049:
      FUN_004aeb30(local_68,0x25,&DAT_007cfacf,uVar11);
      lVar6 = thunk_FUN_007129d0(local_68);
      iVar4 = (int)lVar6;
      if ((local_80 != (char *)0x0) && (0 < local_78)) goto LAB_00424289;
    }
    else {
      iVar4 = FUN_004bcb60(lVar7,0x50);
      if (iVar4 == 0) goto LAB_00423f9f;
      if ((local_78 < 2) || (local_80 == (char *)0x0)) {
        local_84 = local_84 + 1;
        goto LAB_004240fa;
      }
      iVar4 = 2;
LAB_0042422f:
      local_78 = local_78 + -1;
      local_84 = local_84 + 1;
      *local_80 = (char)iVar4 + '0';
      local_80[1] = '\0';
      if (bVar3) {
        lVar6 = FUN_004b2330(lVar7);
        if (lVar6 == 0) goto LAB_00423f9f;
        iVar4 = thunk_FUN_007129d0(lVar6);
        local_80 = local_80 + 1;
        goto LAB_00424120;
      }
      FUN_004aeb30(local_68,0x25,&DAT_007cfacf,uVar11);
      lVar6 = thunk_FUN_007129d0(local_68);
      local_80 = local_80 + 1;
LAB_00424289:
      lVar8 = (long)local_78;
      iVar4 = (int)lVar6;
      FUN_0041c470(local_80,local_68);
      if (local_78 < iVar4) {
        local_78 = 0;
        local_80 = local_80 + lVar8;
      }
      else {
        local_80 = local_80 + lVar6;
        local_78 = local_78 - iVar4;
      }
    }
    local_84 = local_84 + iVar4;
  }
  else {
LAB_004240fa:
    lVar6 = FUN_004b2330(lVar7);
    if (lVar6 == 0) goto LAB_00423f9f;
    iVar4 = thunk_FUN_007129d0(lVar6);
    if (local_80 != (char *)0x0) {
LAB_00424120:
      if (1 < local_78) {
        local_78 = local_78 + -1;
        local_80[0] = '.';
        local_80[1] = '\0';
        local_80 = local_80 + 1;
      }
      FUN_0041c470(local_80,lVar6,(long)local_78);
      if (local_78 < iVar4) {
        local_80 = local_80 + local_78;
        local_78 = 0;
      }
      else {
        local_78 = local_78 - iVar4;
        local_80 = local_80 + iVar4;
      }
    }
    local_84 = iVar4 + 1 + local_84;
    FUN_0041ad60(lVar6,"../crypto/objects/obj_dat.c",0x21a);
  }
  bVar3 = false;
  if (iVar9 < 1) goto LAB_004242fb;
  goto LAB_00423f1c;
}

