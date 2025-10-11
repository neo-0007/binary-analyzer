
undefined1  [16]
FUN_006ac590(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,int param_5,
            long param_6,uint *param_7,ushort *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  bool bVar14;
  ulong extraout_RDX;
  bool bVar15;
  uint uVar16;
  bool bVar17;
  char cVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  long in_FS_OFFSET;
  bool bVar22;
  int local_bc;
  long **local_b8;
  ushort local_80;
  byte local_7b;
  long *local_78;
  long *local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_60 = (int)param_3;
  uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  lVar10 = FUN_006a8560(&local_4a,param_6 + 0xd0);
  uVar20 = *(uint *)(param_6 + 0x18) & 0x4a;
  local_78 = param_4;
  if (uVar20 == 0x40) {
    uVar16 = 8;
LAB_006ac61f:
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') {
LAB_006ac646:
      local_b8 = &local_68;
      iVar8 = FUN_006aa130(local_b8);
      bVar22 = *(int *)(lVar10 + 0xe0) == iVar8;
      if ((bVar22) || (*(int *)(lVar10 + 0xe4) == iVar8)) {
        cVar7 = *(char *)(lVar10 + 0x20);
        if (((cVar7 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar8)) ||
           (*(int *)(lVar10 + 0x48) == iVar8)) goto LAB_006ac75a;
        FUN_0069d900(local_68);
        local_60 = -1;
        cVar5 = FUN_006aa060(local_b8);
        if (cVar5 == '\0') {
          iVar8 = FUN_006aa130(local_b8);
          goto LAB_006ac756;
        }
        local_bc = 0;
        cVar7 = *(char *)(lVar10 + 0x20);
        bVar15 = false;
      }
      else {
LAB_006ac756:
        cVar7 = *(char *)(lVar10 + 0x20);
LAB_006ac75a:
        local_bc = 0;
        bVar15 = false;
        do {
          if (((cVar7 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar8)) ||
             (*(int *)(lVar10 + 0x48) == iVar8)) {
LAB_006accb0:
            cVar5 = '\0';
            goto joined_r0x006ac84e;
          }
          if (*(int *)(lVar10 + 0xf0) == iVar8) {
            bVar14 = (bool)(bVar15 ^ 1U | uVar16 == 10);
            if (!bVar14) goto LAB_006ac79e;
            bVar15 = uVar20 == 0 || uVar16 == 8;
            if (uVar20 != 0 && uVar16 != 8) {
              local_bc = local_bc + 1;
              goto LAB_006ac7d9;
            }
            local_bc = 0;
            uVar16 = 8;
            uVar12 = local_68[2];
            if ((ulong)local_68[3] <= uVar12) goto LAB_006aca40;
LAB_006ac7ec:
            local_68[2] = uVar12 + 4;
LAB_006ac7fc:
            local_60 = -1;
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar21 = *(int *)local_68[2];
            }
            else {
              iVar21 = (**(code **)(*local_68 + 0x48))();
            }
            bVar14 = false;
            if (iVar21 == -1) {
              local_68 = (long *)0x0;
              bVar14 = true;
            }
          }
          else {
            if (!bVar15) goto LAB_006accb0;
LAB_006ac79e:
            if ((*(int *)(lVar10 + 0xe8) != iVar8) && (*(int *)(lVar10 + 0xec) != iVar8)) {
              cVar5 = '\0';
              bVar15 = true;
              goto joined_r0x006ac84e;
            }
            cVar5 = uVar16 == 0x10 || uVar20 == 0;
            if (uVar16 != 0x10 && uVar20 != 0) {
              bVar15 = true;
              uVar20 = uVar16;
              goto LAB_006ac861;
            }
            local_bc = 0;
            bVar14 = false;
            uVar16 = 0x10;
LAB_006ac7d9:
            uVar12 = local_68[2];
            bVar15 = bVar14;
            if (uVar12 < (ulong)local_68[3]) goto LAB_006ac7ec;
LAB_006aca40:
            (**(code **)(*local_68 + 0x50))();
            local_60 = -1;
            if (local_68 != (long *)0x0) goto LAB_006ac7fc;
            bVar14 = true;
          }
          bVar6 = local_78 != (long *)0x0 && param_5 == -1;
          bVar17 = param_5 == -1;
          if (bVar6) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar21 = *(int *)local_78[2];
            }
            else {
              iVar21 = (**(code **)(*local_78 + 0x48))();
            }
            bVar17 = false;
            if (iVar21 == -1) {
              local_78 = (long *)0x0;
              bVar17 = bVar6;
            }
          }
          if (bVar14 == bVar17) {
            cVar7 = *(char *)(lVar10 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x006ac84e;
          }
          iVar8 = local_60;
          if ((local_60 == -1) && (local_68 != (long *)0x0)) {
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar8 = *(int *)local_68[2];
            }
            else {
              iVar8 = (**(code **)(*local_68 + 0x48))();
            }
            if (iVar8 == -1) {
              local_68 = (long *)0x0;
            }
          }
          cVar7 = *(char *)(lVar10 + 0x20);
        } while (bVar15);
        cVar5 = '\0';
      }
joined_r0x006ac84e:
      uVar20 = uVar16;
      if (uVar16 == 0x10) {
        uVar20 = 0x16;
      }
    }
    else {
      cVar7 = *(char *)(lVar10 + 0x20);
      iVar8 = 0;
      bVar15 = false;
      local_bc = 0;
      bVar22 = false;
      uVar20 = uVar16;
    }
  }
  else {
    uVar16 = 10;
    if (uVar20 != 8) goto LAB_006ac61f;
    uVar16 = 0x10;
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') goto LAB_006ac646;
    bVar22 = false;
    cVar7 = *(char *)(lVar10 + 0x20);
    iVar8 = 0;
    bVar15 = false;
    local_bc = 0;
    uVar20 = 0x16;
  }
LAB_006ac861:
  local_b8 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar7 != '\0') {
    FUN_00638bc0(&local_48);
  }
  uVar12 = 0xffff % (ulong)(long)(int)uVar16;
  bVar2 = *(byte *)(lVar10 + 0x148);
  local_80 = (ushort)(0xffff / (ulong)(long)(int)uVar16);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      iVar21 = 0;
LAB_006ac8b8:
      uVar19 = (ushort)iVar21;
      if (uVar20 < 0xb) {
        if ((iVar8 < 0x30) || ((int)(uVar20 + 0x30) <= iVar8)) goto LAB_006acca8;
        uVar9 = iVar8 - 0x30;
LAB_006ac8dc:
        if (local_80 < uVar19) goto LAB_006ac8e8;
LAB_006acad0:
        uVar13 = iVar21 * uVar16;
        iVar21 = uVar13 + uVar9;
        uVar12 = local_68[2];
        local_bc = local_bc + 1;
        local_7b = local_7b | (int)(0xffff - uVar9) < (int)(uVar13 & 0xffff);
        if ((ulong)local_68[3] <= uVar12) goto LAB_006acb06;
LAB_006ac900:
        local_68[2] = uVar12 + 4;
LAB_006ac910:
        local_60 = -1;
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar8 = *(int *)local_68[2];
        }
        else {
                    /* try { // try from 006acf93 to 006acfad has its CatchHandler @ 006ad019 */
          iVar8 = (**(code **)(*local_68 + 0x48))();
        }
        local_b8._0_1_ = false;
        if (iVar8 == -1) {
          local_68 = (long *)0x0;
          local_b8._0_1_ = true;
        }
      }
      else {
        uVar9 = iVar8 - 0x30;
        if (uVar9 < 10) goto LAB_006ac8dc;
        if (5 < iVar8 - 0x61U) {
          if (iVar8 - 0x41U < 6) {
            uVar9 = iVar8 - 0x37;
            goto LAB_006ac8dc;
          }
          goto LAB_006acca8;
        }
        uVar9 = iVar8 - 0x57;
        if (uVar19 <= local_80) goto LAB_006acad0;
LAB_006ac8e8:
        local_7b = 1;
        uVar12 = local_68[2];
        if (uVar12 < (ulong)local_68[3]) goto LAB_006ac900;
LAB_006acb06:
                    /* try { // try from 006acb16 to 006ace89 has its CatchHandler @ 006ad019 */
        (**(code **)(*local_68 + 0x50))();
        local_60 = -1;
        if (local_68 != (long *)0x0) goto LAB_006ac910;
        local_b8._0_1_ = true;
      }
      uVar19 = (ushort)iVar21;
      bVar17 = local_78 != (long *)0x0 && param_5 == -1;
      bVar14 = param_5 == -1;
      if (bVar17) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar8 = *(int *)local_78[2];
        }
        else {
          iVar8 = (**(code **)(*local_78 + 0x48))();
        }
        bVar14 = false;
        if (iVar8 == -1) {
          local_78 = (long *)0x0;
          bVar14 = bVar17;
        }
      }
      if (local_b8._0_1_ != bVar14) {
        iVar8 = local_60;
        if ((local_60 == -1) && (local_68 != (long *)0x0)) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar8 = *(int *)local_68[2];
          }
          else {
                    /* try { // try from 006acfdd to 006acfdf has its CatchHandler @ 006ad019 */
            iVar8 = (**(code **)(*local_68 + 0x48))();
          }
          if (iVar8 == -1) {
            local_68 = (long *)0x0;
          }
        }
        goto LAB_006ac8b8;
      }
      cVar7 = '\x01';
      cVar18 = cVar5;
    }
    else {
      uVar19 = 0;
      cVar18 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    iVar21 = 0;
    cVar18 = *(char *)(lVar10 + 0x20);
    if ((cVar18 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar8)) goto LAB_006acdc8;
LAB_006accef:
    uVar19 = (ushort)iVar21;
    if ((iVar8 != *(int *)(lVar10 + 0x48)) &&
       (lVar11 = thunk_FUN_00756540(lVar10 + 0xf0,iVar8,uVar20), lVar11 != 0)) {
      iVar8 = (int)(lVar11 - (lVar10 + 0xf0) >> 2);
      if (0xf < iVar8) {
        iVar8 = iVar8 + -6;
      }
      bVar4 = bVar2;
      if (uVar19 <= local_80) {
        uVar9 = iVar21 * uVar16;
        iVar21 = uVar9 + iVar8;
        local_bc = local_bc + 1;
        bVar4 = local_7b | 0xffff - iVar8 < (int)(uVar9 & 0xffff);
      }
      local_7b = bVar4;
      uVar12 = local_68[2];
      if ((ulong)local_68[3] <= uVar12) goto LAB_006ace08;
      do {
        local_68[2] = uVar12 + 4;
        while( true ) {
          uVar19 = (ushort)iVar21;
          local_60 = -1;
          cVar7 = FUN_006aa060(local_b8);
          cVar18 = cVar5;
          if (cVar7 != '\0') goto LAB_006ac95b;
          iVar8 = FUN_006aa130(local_b8);
          cVar18 = *(char *)(lVar10 + 0x20);
          if ((cVar18 == '\0') || (uVar12 = extraout_RDX, *(int *)(lVar10 + 0x4c) != iVar8))
          goto LAB_006accef;
LAB_006acdc8:
          uVar19 = (ushort)iVar21;
          if (local_bc == 0) {
            cVar7 = '\0';
            goto LAB_006ac95b;
          }
          FUN_006390c0(&local_48,(int)(char)local_bc,uVar12);
          local_bc = 0;
          uVar12 = local_68[2];
          if (uVar12 < (ulong)local_68[3]) break;
LAB_006ace08:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006acca8:
    cVar7 = '\0';
    cVar18 = cVar5;
  }
  else {
    local_7b = 0;
    uVar19 = 0;
    cVar18 = '\0';
  }
LAB_006ac95b:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_bc != 0) || (bVar15)) {
LAB_006acc1a:
      if (cVar18 == '\0') {
        if (local_7b == 0) {
          if (bVar22) {
            uVar19 = -uVar19;
          }
          *param_8 = uVar19;
        }
        else {
          *param_8 = 0xffff;
          *param_7 = 4;
        }
        goto LAB_006ac999;
      }
    }
  }
  else {
    FUN_006390c0(&local_48,(int)(char)local_bc);
    cVar5 = FUN_006c6980(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_bc != 0) || (bVar15)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006acc1a;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006ac999:
  if (cVar7 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_60;
  auVar3._0_8_ = local_68;
  auVar3._12_4_ = uStack_5c;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar8 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar8 + -1;
    }
    if (iVar8 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

