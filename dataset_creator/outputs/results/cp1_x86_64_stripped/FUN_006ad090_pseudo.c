
undefined1  [16]
FUN_006ad090(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,uint *param_8)

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
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  uint uVar16;
  ulong extraout_RDX;
  bool bVar17;
  uint uVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int local_c4;
  long **local_c0;
  long **local_a8;
  byte local_7b;
  long *local_78;
  undefined8 local_70;
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
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  lVar12 = FUN_006a8560(&local_4a,param_6 + 0xd0);
  uVar21 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar21 == 0x40) {
    uVar18 = 8;
LAB_006ad11f:
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') {
LAB_006ad146:
      local_a8 = &local_78;
      local_c0 = &local_68;
      iVar8 = FUN_006aa130(local_c0);
      bVar23 = *(int *)(lVar12 + 0xe0) == iVar8;
      if ((bVar23) || (*(int *)(lVar12 + 0xe4) == iVar8)) {
        cVar7 = *(char *)(lVar12 + 0x20);
        if (((cVar7 != '\0') && (*(int *)(lVar12 + 0x4c) == iVar8)) ||
           (*(int *)(lVar12 + 0x48) == iVar8)) goto LAB_006ad25a;
        FUN_0069d900(local_68);
        local_60 = -1;
        cVar5 = FUN_006aa060(local_c0,local_a8);
        if (cVar5 == '\0') {
          iVar8 = FUN_006aa130(local_c0);
          goto LAB_006ad256;
        }
        local_c4 = 0;
        cVar7 = *(char *)(lVar12 + 0x20);
        bVar17 = false;
      }
      else {
LAB_006ad256:
        cVar7 = *(char *)(lVar12 + 0x20);
LAB_006ad25a:
        local_c4 = 0;
        bVar17 = false;
        do {
          if (((cVar7 != '\0') && (*(int *)(lVar12 + 0x4c) == iVar8)) ||
             (*(int *)(lVar12 + 0x48) == iVar8)) {
LAB_006ad7b0:
            cVar5 = '\0';
            goto joined_r0x006ad34e;
          }
          if (*(int *)(lVar12 + 0xf0) == iVar8) {
            bVar15 = (bool)(bVar17 ^ 1U | uVar18 == 10);
            if (!bVar15) goto LAB_006ad29e;
            bVar17 = uVar21 == 0 || uVar18 == 8;
            if (uVar21 != 0 && uVar18 != 8) {
              local_c4 = local_c4 + 1;
              goto LAB_006ad2d9;
            }
            local_c4 = 0;
            uVar18 = 8;
            uVar14 = local_68[2];
            if ((ulong)local_68[3] <= uVar14) goto LAB_006ad550;
LAB_006ad2ec:
            local_68[2] = uVar14 + 4;
LAB_006ad2fc:
            local_60 = -1;
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar11 = *(int *)local_68[2];
            }
            else {
              iVar11 = (**(code **)(*local_68 + 0x48))();
            }
            bVar15 = false;
            if (iVar11 == -1) {
              local_68 = (long *)0x0;
              bVar15 = true;
            }
          }
          else {
            if (!bVar17) goto LAB_006ad7b0;
LAB_006ad29e:
            if ((*(int *)(lVar12 + 0xe8) != iVar8) && (*(int *)(lVar12 + 0xec) != iVar8)) {
              cVar5 = '\0';
              bVar17 = true;
              goto joined_r0x006ad34e;
            }
            cVar5 = uVar18 == 0x10 || uVar21 == 0;
            if (uVar18 != 0x10 && uVar21 != 0) {
              bVar17 = true;
              uVar21 = uVar18;
              goto LAB_006ad361;
            }
            local_c4 = 0;
            bVar15 = false;
            uVar18 = 0x10;
LAB_006ad2d9:
            uVar14 = local_68[2];
            bVar17 = bVar15;
            if (uVar14 < (ulong)local_68[3]) goto LAB_006ad2ec;
LAB_006ad550:
            (**(code **)(*local_68 + 0x50))();
            local_60 = -1;
            if (local_68 != (long *)0x0) goto LAB_006ad2fc;
            bVar15 = true;
          }
          bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar19 = (int)local_70 == -1;
          if (bVar6) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar11 = *(int *)local_78[2];
            }
            else {
              iVar11 = (**(code **)(*local_78 + 0x48))();
            }
            bVar19 = false;
            if (iVar11 == -1) {
              local_78 = (long *)0x0;
              bVar19 = bVar6;
            }
          }
          if (bVar15 == bVar19) {
            cVar7 = *(char *)(lVar12 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x006ad34e;
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
          cVar7 = *(char *)(lVar12 + 0x20);
        } while (bVar17);
        cVar5 = '\0';
      }
joined_r0x006ad34e:
      uVar21 = uVar18;
      if (uVar18 == 0x10) {
        uVar21 = 0x16;
      }
    }
    else {
      cVar7 = *(char *)(lVar12 + 0x20);
      iVar8 = 0;
      bVar17 = false;
      local_c4 = 0;
      bVar23 = false;
      uVar21 = uVar18;
    }
  }
  else {
    uVar18 = 10;
    if (uVar21 != 8) goto LAB_006ad11f;
    uVar18 = 0x10;
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') goto LAB_006ad146;
    bVar23 = false;
    cVar7 = *(char *)(lVar12 + 0x20);
    iVar8 = 0;
    bVar17 = false;
    local_c4 = 0;
    uVar21 = 0x16;
  }
LAB_006ad361:
  local_a8 = &local_78;
  local_c0 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar7 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar14 = 0xffffffff % (ulong)uVar18;
  uVar9 = (uint)(0xffffffff / (ulong)uVar18);
  bVar2 = *(byte *)(lVar12 + 0x148);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      uVar22 = 0;
LAB_006ad3b9:
      if (uVar21 < 0xb) {
        if ((iVar8 < 0x30) || ((int)(uVar21 + 0x30) <= iVar8)) goto LAB_006ad7a8;
        uVar10 = iVar8 - 0x30;
LAB_006ad3dd:
        if (uVar9 < uVar22) goto LAB_006ad3e8;
LAB_006ad5e0:
        uVar16 = uVar22 * uVar18;
        uVar22 = uVar10 + uVar16;
        local_7b = local_7b | CARRY4(uVar10,uVar16);
        uVar14 = local_68[2];
        local_c4 = local_c4 + 1;
        if ((ulong)local_68[3] <= uVar14) goto LAB_006ad60b;
LAB_006ad400:
        local_68[2] = uVar14 + 4;
LAB_006ad410:
        local_60 = -1;
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar8 = *(int *)local_68[2];
        }
        else {
                    /* try { // try from 006ada93 to 006adaad has its CatchHandler @ 006adb19 */
          iVar8 = (**(code **)(*local_68 + 0x48))();
        }
        local_c0._0_1_ = false;
        if (iVar8 == -1) {
          local_68 = (long *)0x0;
          local_c0._0_1_ = true;
        }
      }
      else {
        uVar10 = iVar8 - 0x30;
        if (uVar10 < 10) goto LAB_006ad3dd;
        if (5 < iVar8 - 0x61U) {
          if (iVar8 - 0x41U < 6) {
            uVar10 = iVar8 - 0x37;
            goto LAB_006ad3dd;
          }
          goto LAB_006ad7a8;
        }
        uVar10 = iVar8 - 0x57;
        if (uVar22 <= uVar9) goto LAB_006ad5e0;
LAB_006ad3e8:
        local_7b = 1;
        uVar14 = local_68[2];
        if (uVar14 < (ulong)local_68[3]) goto LAB_006ad400;
LAB_006ad60b:
                    /* try { // try from 006ad61b to 006ad989 has its CatchHandler @ 006adb19 */
        (**(code **)(*local_68 + 0x50))();
        local_60 = -1;
        if (local_68 != (long *)0x0) goto LAB_006ad410;
        local_c0._0_1_ = true;
      }
      bVar19 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar15 = (int)local_70 == -1;
      if (bVar19) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar8 = *(int *)local_78[2];
        }
        else {
          iVar8 = (**(code **)(*local_78 + 0x48))();
        }
        bVar15 = false;
        if (iVar8 == -1) {
          local_78 = (long *)0x0;
          bVar15 = bVar19;
        }
      }
      if (local_c0._0_1_ != bVar15) {
        iVar8 = local_60;
        if ((local_60 == -1) && (local_68 != (long *)0x0)) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar8 = *(int *)local_68[2];
          }
          else {
                    /* try { // try from 006adadd to 006adadf has its CatchHandler @ 006adb19 */
            iVar8 = (**(code **)(*local_68 + 0x48))();
          }
          if (iVar8 == -1) {
            local_68 = (long *)0x0;
          }
        }
        goto LAB_006ad3b9;
      }
      cVar7 = '\x01';
      cVar20 = cVar5;
    }
    else {
      uVar22 = 0;
      cVar20 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    uVar22 = 0;
    cVar20 = *(char *)(lVar12 + 0x20);
    if ((cVar20 != '\0') && (*(int *)(lVar12 + 0x4c) == iVar8)) goto LAB_006ad8c3;
LAB_006ad7fc:
    if ((iVar8 != *(int *)(lVar12 + 0x48)) &&
       (lVar13 = thunk_FUN_00756540(lVar12 + 0xf0,iVar8,uVar21), lVar13 != 0)) {
      uVar10 = (uint)(lVar13 - (lVar12 + 0xf0) >> 2);
      if (0xf < (int)uVar10) {
        uVar10 = uVar10 - 6;
      }
      bVar4 = bVar2;
      if (uVar22 <= uVar9) {
        uVar16 = uVar22 * uVar18;
        uVar22 = uVar10 + uVar16;
        local_c4 = local_c4 + 1;
        bVar4 = local_7b | CARRY4(uVar10,uVar16);
      }
      local_7b = bVar4;
      uVar14 = local_68[2];
      if ((ulong)local_68[3] <= uVar14) goto LAB_006ad8fd;
      do {
        local_68[2] = uVar14 + 4;
        while( true ) {
          local_60 = -1;
          cVar7 = FUN_006aa060(local_c0,local_a8);
          cVar20 = cVar5;
          if (cVar7 != '\0') goto LAB_006ad45b;
          iVar8 = FUN_006aa130(local_c0);
          cVar20 = *(char *)(lVar12 + 0x20);
          if ((cVar20 == '\0') || (uVar14 = extraout_RDX, *(int *)(lVar12 + 0x4c) != iVar8))
          goto LAB_006ad7fc;
LAB_006ad8c3:
          if (local_c4 == 0) {
            cVar7 = '\0';
            goto LAB_006ad45b;
          }
          FUN_006390c0(&local_48,(int)(char)local_c4,uVar14);
          local_c4 = 0;
          uVar14 = local_68[2];
          if (uVar14 < (ulong)local_68[3]) break;
LAB_006ad8fd:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006ad7a8:
    cVar7 = '\0';
    cVar20 = cVar5;
  }
  else {
    local_7b = 0;
    uVar22 = 0;
    cVar20 = '\0';
  }
LAB_006ad45b:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_c4 != 0) || (bVar17)) {
LAB_006ad71a:
      if (cVar20 == '\0') {
        if (local_7b == 0) {
          if (bVar23) {
            uVar22 = -uVar22;
          }
          *param_8 = uVar22;
        }
        else {
          *param_8 = 0xffffffff;
          *param_7 = 4;
        }
        goto LAB_006ad49a;
      }
    }
  }
  else {
    FUN_006390c0(&local_48,(int)(char)local_c4);
    cVar5 = FUN_006c6980(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_c4 != 0) || (bVar17)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006ad71a;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006ad49a:
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

