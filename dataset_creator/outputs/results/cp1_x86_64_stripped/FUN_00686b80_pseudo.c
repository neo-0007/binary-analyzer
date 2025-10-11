
undefined1  [16]
FUN_00686b80(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 extraout_RDX;
  bool bVar19;
  char cVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  long **local_b8;
  long **local_a0;
  char local_98;
  int local_80;
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
  uVar23 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar23 == 0x40) {
    uVar22 = 8;
LAB_00686c0f:
    cVar6 = FUN_00681960(&local_68);
    if (cVar6 == '\0') {
LAB_00686c36:
      local_b8 = &local_68;
      uVar9 = FUN_00681a20(local_b8);
      cVar6 = (char)uVar9;
      bVar24 = *(char *)(lVar11 + 0x6e) == cVar6;
      if ((bVar24) || (*(char *)(lVar11 + 0x6f) == cVar6)) {
        cVar8 = *(char *)(lVar11 + 0x20);
        if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
           (*(char *)(lVar11 + 0x48) == cVar6)) goto LAB_00686d39;
        FUN_0069d140(local_68);
        local_60 = 0xffffffff;
        cVar6 = FUN_00681960(local_b8);
        if (cVar6 == '\0') {
          uVar9 = FUN_00681a20(local_b8);
          goto LAB_00686d35;
        }
        local_80 = 0;
        cVar8 = *(char *)(lVar11 + 0x20);
        bVar15 = false;
      }
      else {
LAB_00686d35:
        cVar8 = *(char *)(lVar11 + 0x20);
LAB_00686d39:
        local_80 = 0;
        bVar15 = false;
        do {
          cVar6 = (char)uVar9;
          if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
             (*(char *)(lVar11 + 0x48) == cVar6)) {
LAB_00687290:
            cVar6 = '\0';
            goto joined_r0x00686e18;
          }
          if (*(char *)(lVar11 + 0x72) == cVar6) {
            bVar21 = (bool)(bVar15 ^ 1U | uVar22 == 10);
            if (!bVar21) goto LAB_00686d78;
            bVar15 = uVar23 == 0 || uVar22 == 8;
            if (uVar23 != 0 && uVar22 != 8) {
              local_80 = local_80 + 1;
              goto LAB_00686dac;
            }
            local_80 = 0;
            uVar22 = 8;
            uVar12 = local_68[2];
            if ((ulong)local_68[3] <= uVar12) goto LAB_00687010;
LAB_00686dbf:
            local_68[2] = uVar12 + 1;
LAB_00686dcf:
            local_60 = 0xffffffff;
            bVar21 = false;
            if ((ulong)local_68[3] <= (ulong)local_68[2]) {
              iVar10 = (**(code **)(*local_68 + 0x48))();
              bVar21 = false;
              if (iVar10 == -1) {
                local_68 = (long *)0x0;
                bVar21 = true;
              }
            }
          }
          else {
            if (!bVar15) goto LAB_00687290;
LAB_00686d78:
            if ((*(char *)(lVar11 + 0x70) != cVar6) && (*(char *)(lVar11 + 0x71) != cVar6)) {
              cVar6 = '\0';
              bVar15 = true;
              goto joined_r0x00686e18;
            }
            cVar6 = uVar22 == 0x10 || uVar23 == 0;
            if (uVar22 != 0x10 && uVar23 != 0) {
              bVar15 = true;
              uVar23 = uVar22;
              goto LAB_00686e2b;
            }
            local_80 = 0;
            bVar21 = false;
            uVar22 = 0x10;
LAB_00686dac:
            uVar12 = local_68[2];
            bVar15 = bVar21;
            if (uVar12 < (ulong)local_68[3]) goto LAB_00686dbf;
LAB_00687010:
            (**(code **)(*local_68 + 0x50))();
            local_60 = 0xffffffff;
            if (local_68 != (long *)0x0) goto LAB_00686dcf;
            bVar21 = true;
          }
          bVar19 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar7 = (int)local_70 == -1;
          if (((bVar19) && (bVar7 = false, (ulong)local_78[3] <= (ulong)local_78[2])) &&
             (iVar10 = (**(code **)(*local_78 + 0x48))(), iVar10 == -1)) {
            local_78 = (long *)0x0;
            bVar7 = bVar19;
          }
          if (bVar21 == bVar7) {
            cVar8 = *(char *)(lVar11 + 0x20);
            cVar6 = '\x01';
            goto joined_r0x00686e18;
          }
          uVar9 = local_60;
          if ((local_60 == 0xffffffff) && (local_68 != (long *)0x0)) {
            if ((byte *)local_68[2] < (byte *)local_68[3]) {
              uVar9 = (uint)*(byte *)local_68[2];
            }
            else {
              uVar9 = (**(code **)(*local_68 + 0x48))();
              if (uVar9 == 0xffffffff) {
                local_68 = (long *)0x0;
              }
            }
          }
          cVar8 = *(char *)(lVar11 + 0x20);
        } while (bVar15);
        cVar6 = '\0';
      }
joined_r0x00686e18:
      uVar23 = uVar22;
      if (uVar22 == 0x10) {
        uVar23 = 0x16;
      }
    }
    else {
      cVar8 = *(char *)(lVar11 + 0x20);
      uVar9 = 0;
      bVar15 = false;
      local_80 = 0;
      bVar24 = false;
      uVar23 = uVar22;
    }
  }
  else {
    uVar22 = 10;
    if (uVar23 != 8) goto LAB_00686c0f;
    uVar22 = 0x10;
    cVar6 = FUN_00681960(&local_68);
    if (cVar6 == '\0') goto LAB_00686c36;
    bVar24 = false;
    cVar8 = *(char *)(lVar11 + 0x20);
    uVar9 = 0;
    bVar15 = false;
    local_80 = 0;
    uVar23 = 0x16;
  }
LAB_00686e2b:
  local_a0 = &local_78;
  local_b8 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar8 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar16 = (ulong)(int)uVar22;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar16;
  auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVar12 = SUB168(auVar4 / auVar3,0);
  uVar17 = SUB168(auVar4 % auVar3,0);
  bVar2 = *(byte *)(lVar11 + 0x88);
  cVar8 = cVar6;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar6 == '\0') {
      local_98 = (char)uVar23;
      uVar13 = 0;
LAB_00686e8e:
      cVar8 = (char)uVar9;
      iVar10 = (int)cVar8;
      if (uVar23 < 0xb) {
        if ((cVar8 < '0') || ((char)(local_98 + '0') <= cVar8)) goto LAB_00687280;
      }
      else if (9 < (byte)(cVar8 - 0x30U)) goto LAB_0068707c;
      iVar10 = iVar10 + -0x30;
LAB_00686eb2:
      if (uVar13 <= uVar12) goto LAB_00687098;
LAB_00686ebc:
      local_7b = 1;
      uVar18 = local_68[2];
      if ((ulong)local_68[3] <= uVar18) goto LAB_006870c8;
LAB_00686ed4:
      local_68[2] = uVar18 + 1;
      do {
        local_60 = 0xffffffff;
        bVar21 = false;
                    /* try { // try from 00687529 to 0068752b has its CatchHandler @ 006875e8 */
        if (((ulong)local_68[3] <= (ulong)local_68[2]) &&
           (iVar10 = (**(code **)(*local_68 + 0x48))(), iVar10 == -1)) {
          local_68 = (long *)0x0;
          bVar21 = true;
        }
        while( true ) {
          bVar19 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar7 = (int)local_70 == -1;
          if ((bVar19) && (bVar7 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
            iVar10 = (**(code **)(*local_78 + 0x48))();
            bVar7 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar7 = bVar19;
            }
          }
          if (bVar21 == bVar7) {
            cVar8 = '\x01';
            cVar20 = cVar6;
            goto LAB_00686f1e;
          }
          uVar9 = local_60;
          if ((local_60 != 0xffffffff) || (local_68 == (long *)0x0)) goto LAB_00686e8e;
          if ((byte *)local_68[2] < (byte *)local_68[3]) {
            uVar9 = (uint)*(byte *)local_68[2];
            goto LAB_00686e8e;
          }
                    /* try { // try from 00687587 to 00687589 has its CatchHandler @ 006875e8 */
          uVar9 = (**(code **)(*local_68 + 0x48))();
          if (uVar9 != 0xffffffff) goto LAB_00686e8e;
          local_68 = (long *)0x0;
          if (uVar23 < 0xb) goto LAB_00687280;
          cVar8 = -1;
          iVar10 = -1;
LAB_0068707c:
          if (5 < (byte)(cVar8 + 0x9fU)) {
            if (5 < (byte)(cVar8 + 0xbfU)) goto LAB_00687280;
            iVar10 = iVar10 + -0x37;
            goto LAB_00686eb2;
          }
          iVar10 = iVar10 + -0x57;
          if (uVar12 < uVar13) goto LAB_00686ebc;
LAB_00687098:
          uVar18 = uVar16 * uVar13;
          uVar13 = (long)iVar10 + uVar18;
          local_7b = local_7b | CARRY8((long)iVar10,uVar18);
          uVar18 = local_68[2];
          local_80 = local_80 + 1;
          if (uVar18 < (ulong)local_68[3]) goto LAB_00686ed4;
LAB_006870c8:
                    /* try { // try from 006870d8 to 006870da has its CatchHandler @ 006875e8 */
          (**(code **)(*local_68 + 0x50))();
          local_60 = 0xffffffff;
          if (local_68 != (long *)0x0) break;
          bVar21 = true;
        }
      } while( true );
    }
    uVar13 = 0;
    cVar20 = '\0';
  }
  else if (cVar6 == '\0') {
    local_7b = 0;
    uVar13 = 0;
    cVar20 = *(char *)(lVar11 + 0x20);
    if ((cVar20 != '\0') && (*(char *)(lVar11 + 0x49) == (char)uVar9)) goto LAB_00687391;
LAB_006872d3:
    if (((char)uVar9 != *(char *)(lVar11 + 0x48)) &&
       (lVar14 = thunk_FUN_007134f0(lVar11 + 0x72,(int)(char)uVar9,uVar23), lVar14 != 0)) {
      iVar10 = (int)lVar14 - (int)(lVar11 + 0x72);
      if (0xf < iVar10) {
        iVar10 = iVar10 + -6;
      }
      bVar5 = bVar2;
      if (uVar13 <= uVar12) {
        uVar18 = uVar16 * uVar13;
        uVar13 = (long)iVar10 + uVar18;
        local_80 = local_80 + 1;
        bVar5 = local_7b | CARRY8((long)iVar10,uVar18);
      }
      local_7b = bVar5;
      uVar18 = local_68[2];
      if ((ulong)local_68[3] <= uVar18) goto LAB_006873ca;
      do {
        local_68[2] = uVar18 + 1;
        while( true ) {
          local_60 = 0xffffffff;
          cVar8 = FUN_00681960(local_b8,local_a0);
          cVar20 = cVar6;
          if (cVar8 != '\0') goto LAB_00686f1e;
          uVar9 = FUN_00681a20(local_b8);
          cVar20 = *(char *)(lVar11 + 0x20);
          if ((cVar20 == '\0') || (uVar17 = extraout_RDX, *(char *)(lVar11 + 0x49) != (char)uVar9))
          goto LAB_006872d3;
LAB_00687391:
          if (local_80 == 0) {
            cVar8 = '\0';
            goto LAB_00686f1e;
          }
          FUN_006390c0(&local_48,(int)(char)local_80,uVar17);
          local_80 = 0;
          uVar18 = local_68[2];
          if (uVar18 < (ulong)local_68[3]) break;
LAB_006873ca:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_00687280:
    cVar8 = '\0';
    cVar20 = cVar6;
  }
  else {
    local_7b = 0;
    uVar13 = 0;
    cVar20 = '\0';
  }
LAB_00686f1e:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar15) || (local_80 != 0)) {
LAB_006871da:
      if (cVar20 == '\0') {
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
        goto LAB_00686f5e;
      }
    }
  }
  else {
                    /* try { // try from 00687195 to 00687439 has its CatchHandler @ 006875e8 */
    FUN_006390c0(&local_48,(int)(char)local_80);
    cVar6 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_48);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((local_80 != 0) || (bVar15)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006871da;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00686f5e:
  if (cVar8 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  auVar4._12_4_ = uStack_5c;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar10 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar10 + -1;
    }
    if (iVar10 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

