
undefined1  [16]
FUN_006adb90(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 extraout_RDX;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  long **local_b8;
  long **local_a0;
  int local_80;
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
  lVar11 = FUN_006a8560(&local_4a,param_6 + 0xd0);
  uVar23 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar23 == 0x40) {
    uVar9 = 8;
LAB_006adc1f:
    cVar6 = FUN_006aa060(&local_68);
    if (cVar6 == '\0') {
LAB_006adc46:
      local_a0 = &local_78;
      local_b8 = &local_68;
      iVar8 = FUN_006aa130(local_b8);
      bVar24 = *(int *)(lVar11 + 0xe0) == iVar8;
      if ((bVar24) || (*(int *)(lVar11 + 0xe4) == iVar8)) {
        cVar7 = *(char *)(lVar11 + 0x20);
        if (((cVar7 != '\0') && (*(int *)(lVar11 + 0x4c) == iVar8)) ||
           (*(int *)(lVar11 + 0x48) == iVar8)) goto LAB_006add59;
        FUN_0069d900(local_68);
        local_60 = -1;
        cVar6 = FUN_006aa060(local_b8,local_a0);
        if (cVar6 == '\0') {
          iVar8 = FUN_006aa130(local_b8);
          goto LAB_006add55;
        }
        local_80 = 0;
        cVar7 = *(char *)(lVar11 + 0x20);
        bVar20 = false;
      }
      else {
LAB_006add55:
        cVar7 = *(char *)(lVar11 + 0x20);
LAB_006add59:
        local_80 = 0;
        bVar20 = false;
        do {
          if (((cVar7 != '\0') && (*(int *)(lVar11 + 0x4c) == iVar8)) ||
             (*(int *)(lVar11 + 0x48) == iVar8)) {
LAB_006ae2a0:
            cVar6 = '\0';
            goto joined_r0x006ade4a;
          }
          if (*(int *)(lVar11 + 0xf0) == iVar8) {
            bVar21 = (bool)(bVar20 ^ 1U | uVar9 == 10);
            if (!bVar21) goto LAB_006add9b;
            bVar20 = uVar23 == 0 || uVar9 == 8;
            if (uVar23 != 0 && uVar9 != 8) {
              local_80 = local_80 + 1;
              goto LAB_006addd5;
            }
            local_80 = 0;
            uVar9 = 8;
            uVar12 = local_68[2];
            if ((ulong)local_68[3] <= uVar12) goto LAB_006ae040;
LAB_006adde8:
            local_68[2] = uVar12 + 4;
LAB_006addf8:
            local_60 = -1;
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar10 = *(int *)local_68[2];
            }
            else {
              iVar10 = (**(code **)(*local_68 + 0x48))();
            }
            bVar21 = false;
            if (iVar10 == -1) {
              local_68 = (long *)0x0;
              bVar21 = true;
            }
          }
          else {
            if (!bVar20) goto LAB_006ae2a0;
LAB_006add9b:
            if ((*(int *)(lVar11 + 0xe8) != iVar8) && (*(int *)(lVar11 + 0xec) != iVar8)) {
              cVar6 = '\0';
              bVar20 = true;
              goto joined_r0x006ade4a;
            }
            cVar6 = uVar9 == 0x10 || uVar23 == 0;
            if (uVar9 != 0x10 && uVar23 != 0) {
              bVar20 = true;
              uVar23 = uVar9;
              goto LAB_006ade5d;
            }
            local_80 = 0;
            bVar21 = false;
            uVar9 = 0x10;
LAB_006addd5:
            uVar12 = local_68[2];
            bVar20 = bVar21;
            if (uVar12 < (ulong)local_68[3]) goto LAB_006adde8;
LAB_006ae040:
            (**(code **)(*local_68 + 0x50))();
            local_60 = -1;
            if (local_68 != (long *)0x0) goto LAB_006addf8;
            bVar21 = true;
          }
          bVar19 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar16 = (int)local_70 == -1;
          if (bVar19) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar10 = *(int *)local_78[2];
            }
            else {
              iVar10 = (**(code **)(*local_78 + 0x48))();
            }
            bVar16 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar16 = bVar19;
            }
          }
          if (bVar21 == bVar16) {
            cVar7 = *(char *)(lVar11 + 0x20);
            cVar6 = '\x01';
            goto joined_r0x006ade4a;
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
          cVar7 = *(char *)(lVar11 + 0x20);
        } while (bVar20);
        cVar6 = '\0';
      }
joined_r0x006ade4a:
      uVar23 = uVar9;
      if (uVar9 == 0x10) {
        uVar23 = 0x16;
      }
    }
    else {
      cVar7 = *(char *)(lVar11 + 0x20);
      iVar8 = 0;
      bVar20 = false;
      local_80 = 0;
      bVar24 = false;
      uVar23 = uVar9;
    }
  }
  else {
    uVar9 = 10;
    if (uVar23 != 8) goto LAB_006adc1f;
    uVar9 = 0x10;
    cVar6 = FUN_006aa060(&local_68);
    if (cVar6 == '\0') goto LAB_006adc46;
    bVar24 = false;
    cVar7 = *(char *)(lVar11 + 0x20);
    iVar8 = 0;
    bVar20 = false;
    local_80 = 0;
    uVar23 = 0x16;
  }
LAB_006ade5d:
  local_a0 = &local_78;
  local_b8 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar7 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar15 = (ulong)(int)uVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVar12 = SUB168(auVar4 / auVar3,0);
  uVar17 = SUB168(auVar4 % auVar3,0);
  bVar2 = *(byte *)(lVar11 + 0x148);
  cVar7 = cVar6;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar6 == '\0') {
      uVar13 = 0;
LAB_006adebf:
      if (uVar23 < 0xb) {
        if ((iVar8 < 0x30) || ((int)(uVar23 + 0x30) <= iVar8)) goto LAB_006ae290;
        uVar9 = iVar8 - 0x30;
LAB_006adee0:
        if (uVar12 < uVar13) goto LAB_006adeea;
LAB_006ae0c8:
        uVar18 = uVar15 * uVar13;
        uVar13 = (long)(int)uVar9 + uVar18;
        local_7b = local_7b | CARRY8((long)(int)uVar9,uVar18);
        uVar18 = local_68[2];
        local_80 = local_80 + 1;
        if ((ulong)local_68[3] <= uVar18) goto LAB_006ae0f8;
LAB_006adf02:
        local_68[2] = uVar18 + 4;
LAB_006adf12:
        local_60 = -1;
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar8 = *(int *)local_68[2];
        }
        else {
                    /* try { // try from 006ae575 to 006ae58f has its CatchHandler @ 006ae5f8 */
          iVar8 = (**(code **)(*local_68 + 0x48))();
        }
        bVar21 = false;
        if (iVar8 == -1) {
          local_68 = (long *)0x0;
          bVar21 = true;
        }
      }
      else {
        uVar9 = iVar8 - 0x30;
        if (uVar9 < 10) goto LAB_006adee0;
        if (5 < iVar8 - 0x61U) {
          if (iVar8 - 0x41U < 6) {
            uVar9 = iVar8 - 0x37;
            goto LAB_006adee0;
          }
          goto LAB_006ae290;
        }
        uVar9 = iVar8 - 0x57;
        if (uVar13 <= uVar12) goto LAB_006ae0c8;
LAB_006adeea:
        local_7b = 1;
        uVar18 = local_68[2];
        if (uVar18 < (ulong)local_68[3]) goto LAB_006adf02;
LAB_006ae0f8:
                    /* try { // try from 006ae108 to 006ae469 has its CatchHandler @ 006ae5f8 */
        (**(code **)(*local_68 + 0x50))();
        local_60 = -1;
        if (local_68 != (long *)0x0) goto LAB_006adf12;
        bVar21 = true;
      }
      bVar19 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar16 = (int)local_70 == -1;
      if (bVar19) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar8 = *(int *)local_78[2];
        }
        else {
          iVar8 = (**(code **)(*local_78 + 0x48))();
        }
        bVar16 = false;
        if (iVar8 == -1) {
          local_78 = (long *)0x0;
          bVar16 = bVar19;
        }
      }
      if (bVar21 != bVar16) {
        iVar8 = local_60;
        if ((local_60 == -1) && (local_68 != (long *)0x0)) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar8 = *(int *)local_68[2];
          }
          else {
                    /* try { // try from 006ae5be to 006ae5c0 has its CatchHandler @ 006ae5f8 */
            iVar8 = (**(code **)(*local_68 + 0x48))();
          }
          if (iVar8 == -1) {
            local_68 = (long *)0x0;
          }
        }
        goto LAB_006adebf;
      }
      cVar7 = '\x01';
      cVar22 = cVar6;
    }
    else {
      uVar13 = 0;
      cVar22 = '\0';
    }
  }
  else if (cVar6 == '\0') {
    local_7b = 0;
    uVar13 = 0;
    cVar22 = *(char *)(lVar11 + 0x20);
    if ((cVar22 != '\0') && (*(int *)(lVar11 + 0x4c) == iVar8)) goto LAB_006ae3a7;
LAB_006ae2e6:
    if ((iVar8 != *(int *)(lVar11 + 0x48)) &&
       (lVar14 = thunk_FUN_00756540(lVar11 + 0xf0,iVar8,uVar23), lVar14 != 0)) {
      iVar8 = (int)(lVar14 - (lVar11 + 0xf0) >> 2);
      if (0xf < iVar8) {
        iVar8 = iVar8 + -6;
      }
      bVar5 = bVar2;
      if (uVar13 <= uVar12) {
        uVar18 = uVar15 * uVar13;
        uVar13 = (long)iVar8 + uVar18;
        local_80 = local_80 + 1;
        bVar5 = local_7b | CARRY8((long)iVar8,uVar18);
      }
      local_7b = bVar5;
      uVar18 = local_68[2];
      if ((ulong)local_68[3] <= uVar18) goto LAB_006ae3e1;
      do {
        local_68[2] = uVar18 + 4;
        while( true ) {
          local_60 = -1;
          cVar7 = FUN_006aa060(local_b8,local_a0);
          cVar22 = cVar6;
          if (cVar7 != '\0') goto LAB_006adf59;
          iVar8 = FUN_006aa130(local_b8);
          cVar22 = *(char *)(lVar11 + 0x20);
          if ((cVar22 == '\0') || (uVar17 = extraout_RDX, *(int *)(lVar11 + 0x4c) != iVar8))
          goto LAB_006ae2e6;
LAB_006ae3a7:
          if (local_80 == 0) {
            cVar7 = '\0';
            goto LAB_006adf59;
          }
          FUN_006390c0(&local_48,(int)(char)local_80,uVar17);
          local_80 = 0;
          uVar18 = local_68[2];
          if (uVar18 < (ulong)local_68[3]) break;
LAB_006ae3e1:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006ae290:
    cVar7 = '\0';
    cVar22 = cVar6;
  }
  else {
    local_7b = 0;
    uVar13 = 0;
    cVar22 = '\0';
  }
LAB_006adf59:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_80 != 0) || (bVar20)) {
LAB_006ae202:
      if (cVar22 == '\0') {
        if (local_7b == 0) {
          if (bVar24) {
            uVar13 = -uVar13;
          }
          *param_8 = uVar13;
        }
        else {
          *param_8 = 0xffffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_006adf99;
      }
    }
  }
  else {
    FUN_006390c0(&local_48,(int)(char)local_80);
    cVar6 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_48);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((local_80 != 0) || (bVar20)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006ae202;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006adf99:
  if (cVar7 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  auVar4._12_4_ = uStack_5c;
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
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

