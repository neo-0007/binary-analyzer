
undefined1  [16]
FUN_006ae710(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  ulong extraout_RDX;
  bool bVar17;
  bool bVar18;
  ulong uVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  long **local_c0;
  long **local_a0;
  int local_80;
  byte local_7b;
  bool local_7a;
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
  lVar10 = FUN_006a8560(&local_4a,param_6 + 0xd0);
  uVar22 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar22 == 0x40) {
    uVar8 = 8;
LAB_006ae7a2:
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') {
LAB_006ae7c9:
      local_a0 = &local_78;
      local_c0 = &local_68;
      iVar7 = FUN_006aa130(local_c0);
      local_7a = *(int *)(lVar10 + 0xe0) == iVar7;
      if ((local_7a) || (*(int *)(lVar10 + 0xe4) == iVar7)) {
        cVar6 = *(char *)(lVar10 + 0x20);
        if (((cVar6 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar7)) ||
           (*(int *)(lVar10 + 0x48) == iVar7)) goto LAB_006ae8d9;
        FUN_0069d900(local_68);
        local_60 = -1;
        cVar5 = FUN_006aa060(local_c0,local_a0);
        if (cVar5 == '\0') {
          iVar7 = FUN_006aa130(local_c0);
          goto LAB_006ae8d5;
        }
        local_80 = 0;
        cVar6 = *(char *)(lVar10 + 0x20);
        bVar18 = false;
      }
      else {
LAB_006ae8d5:
        cVar6 = *(char *)(lVar10 + 0x20);
LAB_006ae8d9:
        local_80 = 0;
        bVar18 = false;
        do {
          if (((cVar6 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar7)) ||
             (*(int *)(lVar10 + 0x48) == iVar7)) {
LAB_006aee60:
            cVar5 = '\0';
            goto joined_r0x006ae9ca;
          }
          if (*(int *)(lVar10 + 0xf0) == iVar7) {
            bVar20 = (bool)(bVar18 ^ 1U | uVar8 == 10);
            if (!bVar20) goto LAB_006ae91b;
            bVar18 = uVar22 == 0 || uVar8 == 8;
            if (uVar22 != 0 && uVar8 != 8) {
              local_80 = local_80 + 1;
              goto LAB_006ae955;
            }
            local_80 = 0;
            uVar8 = 8;
            uVar15 = local_68[2];
            if ((ulong)local_68[3] <= uVar15) goto LAB_006aebe0;
LAB_006ae968:
            local_68[2] = uVar15 + 4;
LAB_006ae978:
            local_60 = -1;
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar9 = *(int *)local_68[2];
            }
            else {
              iVar9 = (**(code **)(*local_68 + 0x48))();
            }
            bVar20 = false;
            if (iVar9 == -1) {
              local_68 = (long *)0x0;
              bVar20 = true;
            }
          }
          else {
            if (!bVar18) goto LAB_006aee60;
LAB_006ae91b:
            if ((*(int *)(lVar10 + 0xe8) != iVar7) && (*(int *)(lVar10 + 0xec) != iVar7)) {
              cVar5 = '\0';
              bVar18 = true;
              goto joined_r0x006ae9ca;
            }
            cVar5 = uVar8 == 0x10 || uVar22 == 0;
            if (uVar8 != 0x10 && uVar22 != 0) {
              bVar18 = true;
              uVar22 = uVar8;
              goto LAB_006ae9dd;
            }
            local_80 = 0;
            bVar20 = false;
            uVar8 = 0x10;
LAB_006ae955:
            uVar15 = local_68[2];
            bVar18 = bVar20;
            if (uVar15 < (ulong)local_68[3]) goto LAB_006ae968;
LAB_006aebe0:
            (**(code **)(*local_68 + 0x50))();
            local_60 = -1;
            if (local_68 != (long *)0x0) goto LAB_006ae978;
            bVar20 = true;
          }
          bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar14 = (int)local_70 == -1;
          if (bVar17) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar9 = *(int *)local_78[2];
            }
            else {
              iVar9 = (**(code **)(*local_78 + 0x48))();
            }
            bVar14 = false;
            if (iVar9 == -1) {
              local_78 = (long *)0x0;
              bVar14 = bVar17;
            }
          }
          if (bVar20 == bVar14) {
            cVar6 = *(char *)(lVar10 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x006ae9ca;
          }
          iVar7 = local_60;
          if ((local_60 == -1) && (local_68 != (long *)0x0)) {
            if ((int *)local_68[2] < (int *)local_68[3]) {
              iVar7 = *(int *)local_68[2];
            }
            else {
              iVar7 = (**(code **)(*local_68 + 0x48))();
            }
            if (iVar7 == -1) {
              local_68 = (long *)0x0;
            }
          }
          cVar6 = *(char *)(lVar10 + 0x20);
        } while (bVar18);
        cVar5 = '\0';
      }
joined_r0x006ae9ca:
      uVar22 = uVar8;
      if (uVar8 == 0x10) {
        uVar22 = 0x16;
      }
    }
    else {
      cVar6 = *(char *)(lVar10 + 0x20);
      iVar7 = 0;
      bVar18 = false;
      local_80 = 0;
      local_7a = false;
      uVar22 = uVar8;
    }
  }
  else {
    uVar8 = 10;
    if (uVar22 != 8) goto LAB_006ae7a2;
    uVar8 = 0x10;
    cVar5 = FUN_006aa060(&local_68);
    if (cVar5 == '\0') goto LAB_006ae7c9;
    local_7a = false;
    cVar6 = *(char *)(lVar10 + 0x20);
    iVar7 = 0;
    bVar18 = false;
    local_80 = 0;
    uVar22 = 0x16;
  }
LAB_006ae9dd:
  local_a0 = &local_78;
  local_c0 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar6 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar19 = (ulong)(int)uVar8;
  uVar11 = (ulong)local_7a + 0x7fffffffffffffff;
  uVar12 = uVar11 / uVar19;
  uVar15 = uVar11 % uVar19;
  bVar2 = *(byte *)(lVar10 + 0x148);
  cVar6 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      uVar23 = 0;
LAB_006aea50:
      if (uVar22 < 0xb) {
        if ((iVar7 < 0x30) || ((int)(uVar22 + 0x30) <= iVar7)) goto LAB_006aee50;
        uVar8 = iVar7 - 0x30;
LAB_006aea71:
        if (uVar12 < uVar23) goto LAB_006aea7c;
LAB_006aec70:
        uVar16 = uVar19 * uVar23;
        uVar23 = (long)(int)uVar8 + uVar16;
        uVar15 = local_68[2];
        local_80 = local_80 + 1;
        local_7b = local_7b | uVar11 - (long)(int)uVar8 < uVar16;
        if ((ulong)local_68[3] <= uVar15) goto LAB_006aeca9;
LAB_006aea94:
        local_68[2] = uVar15 + 4;
LAB_006aeaa4:
        local_60 = -1;
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar7 = *(int *)local_68[2];
        }
        else {
                    /* try { // try from 006af138 to 006af152 has its CatchHandler @ 006af1bb */
          iVar7 = (**(code **)(*local_68 + 0x48))();
        }
        bVar20 = false;
        if (iVar7 == -1) {
          local_68 = (long *)0x0;
          bVar20 = true;
        }
      }
      else {
        uVar8 = iVar7 - 0x30;
        if (uVar8 < 10) goto LAB_006aea71;
        if (5 < iVar7 - 0x61U) {
          if (iVar7 - 0x41U < 6) {
            uVar8 = iVar7 - 0x37;
            goto LAB_006aea71;
          }
          goto LAB_006aee50;
        }
        uVar8 = iVar7 - 0x57;
        if (uVar23 <= uVar12) goto LAB_006aec70;
LAB_006aea7c:
        local_7b = 1;
        uVar15 = local_68[2];
        if (uVar15 < (ulong)local_68[3]) goto LAB_006aea94;
LAB_006aeca9:
                    /* try { // try from 006aecb9 to 006af029 has its CatchHandler @ 006af1bb */
        (**(code **)(*local_68 + 0x50))();
        local_60 = -1;
        if (local_68 != (long *)0x0) goto LAB_006aeaa4;
        bVar20 = true;
      }
      bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar14 = (int)local_70 == -1;
      if (bVar17) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar7 = *(int *)local_78[2];
        }
        else {
          iVar7 = (**(code **)(*local_78 + 0x48))();
        }
        bVar14 = false;
        if (iVar7 == -1) {
          local_78 = (long *)0x0;
          bVar14 = bVar17;
        }
      }
      if (bVar14 != bVar20) {
        iVar7 = local_60;
        if ((local_60 == -1) && (local_68 != (long *)0x0)) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar7 = *(int *)local_68[2];
          }
          else {
                    /* try { // try from 006af181 to 006af183 has its CatchHandler @ 006af1bb */
            iVar7 = (**(code **)(*local_68 + 0x48))();
          }
          if (iVar7 == -1) {
            local_68 = (long *)0x0;
          }
        }
        goto LAB_006aea50;
      }
      cVar6 = '\x01';
      cVar21 = cVar5;
    }
    else {
      uVar23 = 0;
      cVar21 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    uVar23 = 0;
    cVar21 = *(char *)(lVar10 + 0x20);
    if ((cVar21 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar7)) goto LAB_006aef71;
LAB_006aeea6:
    if ((iVar7 != *(int *)(lVar10 + 0x48)) &&
       (lVar13 = thunk_FUN_00756540(lVar10 + 0xf0,iVar7,uVar22), lVar13 != 0)) {
      iVar7 = (int)(lVar13 - (lVar10 + 0xf0) >> 2);
      if (0xf < iVar7) {
        iVar7 = iVar7 + -6;
      }
      bVar4 = bVar2;
      if (uVar23 <= uVar12) {
        uVar15 = uVar19 * uVar23;
        uVar23 = (long)iVar7 + uVar15;
        local_80 = local_80 + 1;
        bVar4 = local_7b | uVar11 - (long)iVar7 < uVar15;
      }
      local_7b = bVar4;
      uVar15 = local_68[2];
      if ((ulong)local_68[3] <= uVar15) goto LAB_006aefab;
      do {
        local_68[2] = uVar15 + 4;
        while( true ) {
          local_60 = -1;
          cVar6 = FUN_006aa060(local_c0,local_a0);
          cVar21 = cVar5;
          if (cVar6 != '\0') goto LAB_006aeaeb;
          iVar7 = FUN_006aa130(local_c0);
          cVar21 = *(char *)(lVar10 + 0x20);
          if ((cVar21 == '\0') || (uVar15 = extraout_RDX, *(int *)(lVar10 + 0x4c) != iVar7))
          goto LAB_006aeea6;
LAB_006aef71:
          if (local_80 == 0) {
            cVar6 = '\0';
            goto LAB_006aeaeb;
          }
          FUN_006390c0(&local_48,(int)(char)local_80,uVar15);
          local_80 = 0;
          uVar15 = local_68[2];
          if (uVar15 < (ulong)local_68[3]) break;
LAB_006aefab:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006aee50:
    cVar6 = '\0';
    cVar21 = cVar5;
  }
  else {
    local_7b = 0;
    uVar23 = 0;
    cVar21 = '\0';
  }
LAB_006aeaeb:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar18) || (local_80 != 0)) {
LAB_006aedb2:
      if (cVar21 == '\0') {
        if (local_7b == 0) {
          uVar15 = -uVar23;
          if (local_7a == false) {
            uVar15 = uVar23;
          }
          *param_8 = uVar15;
        }
        else {
          uVar15 = 0x8000000000000000;
          if (local_7a == false) {
            uVar15 = 0x7fffffffffffffff;
          }
          *param_8 = uVar15;
          *param_7 = 4;
        }
        goto LAB_006aeb2b;
      }
    }
  }
  else {
    FUN_006390c0(&local_48,(int)(char)local_80);
    cVar5 = FUN_006c6980(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_80 != 0) || (bVar18)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006aedb2;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006aeb2b:
  if (cVar6 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_60;
  auVar3._0_8_ = local_68;
  auVar3._12_4_ = uStack_5c;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar7 + -1;
    }
    if (iVar7 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

