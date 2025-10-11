
undefined1  [16]
FUN_006849a0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,uint *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ulong extraout_RDX;
  uint uVar17;
  bool bVar18;
  int iVar19;
  bool bVar20;
  char cVar21;
  long in_FS_OFFSET;
  bool bVar22;
  uint local_c4;
  long **local_c0;
  long **local_a8;
  char local_a0;
  byte local_7b;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_60 = (uint)param_3;
  uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  lVar11 = FUN_0067fd80(&local_4a,param_6 + 0xd0);
  uVar15 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar15 == 0x40) {
    uVar17 = 8;
LAB_00684a2b:
    cVar5 = FUN_00681960(&local_68);
    if (cVar5 == '\0') {
LAB_00684a5a:
      local_a8 = &local_78;
      local_c0 = &local_68;
      uVar8 = FUN_00681a20(local_c0);
      cVar5 = (char)uVar8;
      bVar22 = *(char *)(lVar11 + 0x6e) == cVar5;
      if ((bVar22) || (*(char *)(lVar11 + 0x6f) == cVar5)) {
        cVar7 = *(char *)(lVar11 + 0x20);
        if (((cVar7 != '\0') && (*(char *)(lVar11 + 0x49) == cVar5)) ||
           (*(char *)(lVar11 + 0x48) == cVar5)) goto LAB_00684af8;
        FUN_0069d140(local_68);
        local_60 = 0xffffffff;
        cVar5 = FUN_00681960(local_c0,local_a8);
        if (cVar5 == '\0') {
          uVar8 = FUN_00681a20(local_c0);
          cVar7 = *(char *)(lVar11 + 0x20);
          goto LAB_00684af8;
        }
        cVar7 = *(char *)(lVar11 + 0x20);
        iVar19 = 0;
        bVar14 = false;
      }
      else {
        cVar7 = *(char *)(lVar11 + 0x20);
LAB_00684af8:
        bVar14 = false;
        iVar19 = 0;
        do {
          cVar5 = (char)uVar8;
          if (((cVar7 != '\0') && (*(char *)(lVar11 + 0x49) == cVar5)) ||
             (*(char *)(lVar11 + 0x48) == cVar5)) break;
          if (*(char *)(lVar11 + 0x72) == cVar5) {
            bVar20 = (bool)(bVar14 ^ 1U | uVar17 == 10);
            if (!bVar20) goto LAB_00684b33;
            bVar14 = uVar15 == 0 || uVar17 == 8;
            if (uVar15 != 0 && uVar17 != 8) {
              iVar19 = iVar19 + 1;
              goto LAB_00684b62;
            }
            iVar19 = 0;
            uVar17 = 8;
            uVar13 = local_68[2];
            if ((ulong)local_68[3] <= uVar13) goto LAB_00684e18;
LAB_00684b75:
            local_68[2] = uVar13 + 1;
LAB_00684b85:
            local_60 = 0xffffffff;
            local_c4._0_1_ = false;
            if ((ulong)local_68[3] <= (ulong)local_68[2]) {
              iVar10 = (**(code **)(*local_68 + 0x48))();
              local_c4._0_1_ = false;
              if (iVar10 == -1) {
                local_68 = (long *)0x0;
                local_c4._0_1_ = true;
              }
            }
          }
          else {
            if (!bVar14) break;
LAB_00684b33:
            if ((*(char *)(lVar11 + 0x70) != cVar5) && (*(char *)(lVar11 + 0x71) != cVar5)) {
              cVar5 = '\0';
              bVar14 = true;
              goto joined_r0x00684bcd;
            }
            cVar5 = uVar17 == 0x10 || uVar15 == 0;
            if (uVar17 != 0x10 && uVar15 != 0) {
              bVar14 = true;
              uVar15 = uVar17;
              goto LAB_00684be0;
            }
            iVar19 = 0;
            bVar20 = false;
            uVar17 = 0x10;
LAB_00684b62:
            uVar13 = local_68[2];
            bVar14 = bVar20;
            if (uVar13 < (ulong)local_68[3]) goto LAB_00684b75;
LAB_00684e18:
            (**(code **)(*local_68 + 0x50))();
            local_60 = 0xffffffff;
            if (local_68 != (long *)0x0) goto LAB_00684b85;
            local_c4._0_1_ = true;
          }
          bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar20 = (int)local_70 == -1;
          if (bVar6) {
            bVar20 = false;
            if (((ulong)local_78[3] <= (ulong)local_78[2]) &&
               (iVar10 = (**(code **)(*local_78 + 0x48))(), bVar20 = false, iVar10 == -1)) {
              local_78 = (long *)0x0;
              bVar20 = bVar6;
            }
          }
          if (local_c4._0_1_ == bVar20) {
            cVar7 = *(char *)(lVar11 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x00684bcd;
          }
          uVar8 = local_60;
          if ((local_60 == 0xffffffff) && (local_68 != (long *)0x0)) {
            if ((byte *)local_68[2] < (byte *)local_68[3]) {
              uVar8 = (uint)*(byte *)local_68[2];
            }
            else {
              uVar8 = (**(code **)(*local_68 + 0x48))();
              if (uVar8 == 0xffffffff) {
                local_68 = (long *)0x0;
              }
            }
          }
          cVar7 = *(char *)(lVar11 + 0x20);
        } while (bVar14);
        cVar5 = '\0';
      }
joined_r0x00684bcd:
      uVar15 = uVar17;
      if (uVar17 == 0x10) {
        uVar15 = 0x16;
      }
    }
    else {
      cVar7 = *(char *)(lVar11 + 0x20);
      uVar8 = 0;
      iVar19 = 0;
      bVar14 = false;
      bVar22 = false;
      uVar15 = uVar17;
    }
  }
  else {
    uVar17 = 10;
    if (uVar15 != 8) goto LAB_00684a2b;
    uVar17 = 0x10;
    cVar5 = FUN_00681960(&local_68);
    if (cVar5 == '\0') goto LAB_00684a5a;
    bVar22 = false;
    cVar7 = *(char *)(lVar11 + 0x20);
    uVar8 = 0;
    iVar19 = 0;
    bVar14 = false;
    uVar15 = 0x16;
  }
LAB_00684be0:
  local_a8 = &local_78;
  local_c0 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar7 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar13 = 0xffffffff % (ulong)uVar17;
  uVar9 = (uint)(0xffffffff / (ulong)uVar17);
  bVar2 = *(byte *)(lVar11 + 0x88);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      local_a0 = (char)uVar15;
      local_c4 = 0;
LAB_00684c3f:
      cVar7 = (char)uVar8;
      iVar10 = (int)cVar7;
      if (uVar15 < 0xb) {
        if ((cVar7 < '0') || ((char)(local_a0 + '0') <= cVar7)) goto LAB_006850a0;
      }
      else if (9 < (byte)(cVar7 - 0x30U)) goto LAB_00684e95;
      uVar8 = iVar10 - 0x30;
LAB_00684c66:
      if (local_c4 <= uVar9) goto LAB_00684eb8;
LAB_00684c74:
      local_7b = 1;
      uVar13 = local_68[2];
      if ((ulong)local_68[3] <= uVar13) goto LAB_00684ee4;
LAB_00684c8c:
      local_68[2] = uVar13 + 1;
      do {
        local_60 = 0xffffffff;
        bVar20 = false;
        if ((ulong)local_68[3] <= (ulong)local_68[2]) {
                    /* try { // try from 0068536f to 00685371 has its CatchHandler @ 0068544b */
          iVar10 = (**(code **)(*local_68 + 0x48))();
          bVar20 = false;
          if (iVar10 == -1) {
            local_68 = (long *)0x0;
            bVar20 = true;
          }
        }
        while( true ) {
          bVar18 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar6 = (int)local_70 == -1;
          if ((bVar18) && (bVar6 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
            iVar10 = (**(code **)(*local_78 + 0x48))();
            bVar6 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar6 = bVar18;
            }
          }
          if (bVar20 == bVar6) {
            cVar7 = '\x01';
            cVar21 = cVar5;
            goto LAB_00684cdc;
          }
          uVar8 = local_60;
          if ((local_60 != 0xffffffff) || (local_68 == (long *)0x0)) goto LAB_00684c3f;
          if ((byte *)local_68[2] < (byte *)local_68[3]) {
            uVar8 = (uint)*(byte *)local_68[2];
            goto LAB_00684c3f;
          }
                    /* try { // try from 006853db to 006853dd has its CatchHandler @ 0068544b */
          uVar8 = (**(code **)(*local_68 + 0x48))();
          if (uVar8 != 0xffffffff) goto LAB_00684c3f;
          local_68 = (long *)0x0;
          if (uVar15 < 0xb) goto LAB_006850a0;
          cVar7 = -1;
          iVar10 = -1;
LAB_00684e95:
          if (5 < (byte)(cVar7 + 0x9fU)) {
            if (5 < (byte)(cVar7 + 0xbfU)) goto LAB_006850a0;
            uVar8 = iVar10 - 0x37;
            goto LAB_00684c66;
          }
          uVar8 = iVar10 - 0x57;
          if (uVar9 < local_c4) goto LAB_00684c74;
LAB_00684eb8:
          uVar16 = local_c4 * uVar17;
          local_c4 = uVar8 + uVar16;
          iVar19 = iVar19 + 1;
          uVar13 = local_68[2];
          local_7b = local_7b | CARRY4(uVar8,uVar16);
          if (uVar13 < (ulong)local_68[3]) goto LAB_00684c8c;
LAB_00684ee4:
                    /* try { // try from 00684ef4 to 00684ef6 has its CatchHandler @ 0068544b */
          (**(code **)(*local_68 + 0x50))();
          local_60 = 0xffffffff;
          if (local_68 != (long *)0x0) break;
          bVar20 = true;
        }
      } while( true );
    }
    local_c4 = 0;
    cVar21 = '\0';
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    cVar21 = *(char *)(lVar11 + 0x20);
    local_c4 = 0;
    if ((cVar21 != '\0') && (*(char *)(lVar11 + 0x49) == (char)uVar8)) goto LAB_006851b4;
LAB_006850ee:
    if (((char)uVar8 != *(char *)(lVar11 + 0x48)) &&
       (lVar12 = thunk_FUN_007134f0(lVar11 + 0x72,(int)(char)uVar8,uVar15), lVar12 != 0)) {
      uVar8 = (int)lVar12 - (int)(lVar11 + 0x72);
      if (0xf < (int)uVar8) {
        uVar8 = uVar8 - 6;
      }
      bVar4 = bVar2;
      if (local_c4 <= uVar9) {
        uVar16 = local_c4 * uVar17;
        local_c4 = uVar8 + uVar16;
        iVar19 = iVar19 + 1;
        bVar4 = local_7b | CARRY4(uVar8,uVar16);
      }
      local_7b = bVar4;
      uVar13 = local_68[2];
      if ((ulong)local_68[3] <= uVar13) goto LAB_006851e6;
      do {
        local_68[2] = uVar13 + 1;
        while( true ) {
          local_60 = 0xffffffff;
          cVar7 = FUN_00681960(local_c0,local_a8);
          cVar21 = cVar5;
          if (cVar7 != '\0') goto LAB_00684cdc;
          uVar8 = FUN_00681a20(local_c0);
          cVar21 = *(char *)(lVar11 + 0x20);
          if ((cVar21 == '\0') || (uVar13 = extraout_RDX, *(char *)(lVar11 + 0x49) != (char)uVar8))
          goto LAB_006850ee;
LAB_006851b4:
          if (iVar19 == 0) {
            iVar19 = 0;
            cVar7 = '\0';
            goto LAB_00684cdc;
          }
          FUN_006390c0(&local_48,(int)(char)iVar19,uVar13);
          iVar19 = 0;
          uVar13 = local_68[2];
          if (uVar13 < (ulong)local_68[3]) break;
LAB_006851e6:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006850a0:
    cVar7 = '\0';
    cVar21 = cVar5;
  }
  else {
    local_c4 = 0;
    cVar21 = '\0';
    local_7b = 0;
  }
LAB_00684cdc:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar14) || (iVar19 != 0)) {
LAB_00684ffe:
      if (cVar21 == '\0') {
        if (local_7b == 0) {
          uVar15 = -local_c4;
          if (!bVar22) {
            uVar15 = local_c4;
          }
          *param_8 = uVar15;
        }
        else {
          *param_8 = 0xffffffff;
          *param_7 = 4;
        }
        goto LAB_00684d18;
      }
    }
  }
  else {
                    /* try { // try from 00684fbc to 00685259 has its CatchHandler @ 0068544b */
    FUN_006390c0(&local_48,(int)(char)iVar19);
    cVar5 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((iVar19 != 0) || (bVar14)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_00684ffe;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00684d18:
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
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar19 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar19 + -1;
    }
    if (iVar19 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

