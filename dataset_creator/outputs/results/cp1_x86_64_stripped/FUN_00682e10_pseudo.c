
undefined1  [16]
FUN_00682e10(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
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
  ulong uVar15;
  bool bVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong extraout_RDX;
  bool bVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  bool bVar24;
  char cVar25;
  long in_FS_OFFSET;
  long **local_d0;
  long **local_a8;
  char local_a0;
  bool local_80;
  bool local_7a;
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
  uVar17 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar17 == 0x40) {
    uVar21 = 8;
LAB_00682e9e:
    cVar6 = FUN_00681960(&local_68);
    if (cVar6 == '\0') {
LAB_00682ecd:
      local_a8 = &local_78;
      local_d0 = &local_68;
      uVar9 = FUN_00681a20(local_d0);
      cVar6 = (char)uVar9;
      local_7a = *(char *)(lVar11 + 0x6e) == cVar6;
      if ((local_7a) || (*(char *)(lVar11 + 0x6f) == cVar6)) {
        cVar8 = *(char *)(lVar11 + 0x20);
        if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
           (*(char *)(lVar11 + 0x48) == cVar6)) goto LAB_00682f68;
        FUN_0069d140(local_68);
        local_60 = 0xffffffff;
        cVar6 = FUN_00681960(local_d0,local_a8);
        if (cVar6 == '\0') {
          uVar9 = FUN_00681a20(local_d0);
          cVar8 = *(char *)(lVar11 + 0x20);
          goto LAB_00682f68;
        }
        cVar8 = *(char *)(lVar11 + 0x20);
        iVar23 = 0;
        bVar16 = false;
      }
      else {
        cVar8 = *(char *)(lVar11 + 0x20);
LAB_00682f68:
        bVar16 = false;
        iVar23 = 0;
        do {
          cVar6 = (char)uVar9;
          if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
             (*(char *)(lVar11 + 0x48) == cVar6)) break;
          if (*(char *)(lVar11 + 0x72) == cVar6) {
            bVar24 = (bool)(bVar16 ^ 1U | uVar21 == 10);
            if (!bVar24) goto LAB_00682fa8;
            bVar16 = uVar17 == 0 || uVar21 == 8;
            if (uVar17 != 0 && uVar21 != 8) {
              iVar23 = iVar23 + 1;
              goto LAB_00682fd6;
            }
            iVar23 = 0;
            uVar21 = 8;
            uVar18 = local_68[2];
            if ((ulong)local_68[3] <= uVar18) goto LAB_00683298;
LAB_00682fe9:
            local_68[2] = uVar18 + 1;
LAB_00682ff9:
            local_60 = 0xffffffff;
            local_80 = false;
            if ((ulong)local_68[3] <= (ulong)local_68[2]) {
              iVar10 = (**(code **)(*local_68 + 0x48))();
              local_80 = false;
              if (iVar10 == -1) {
                local_68 = (long *)0x0;
                local_80 = true;
              }
            }
          }
          else {
            if (!bVar16) break;
LAB_00682fa8:
            if ((*(char *)(lVar11 + 0x70) != cVar6) && (*(char *)(lVar11 + 0x71) != cVar6)) {
              cVar6 = '\0';
              bVar16 = true;
              goto joined_r0x00683042;
            }
            cVar6 = uVar21 == 0x10 || uVar17 == 0;
            if (uVar21 != 0x10 && uVar17 != 0) {
              bVar16 = true;
              uVar17 = uVar21;
              goto LAB_00683055;
            }
            iVar23 = 0;
            bVar24 = false;
            uVar21 = 0x10;
LAB_00682fd6:
            uVar18 = local_68[2];
            bVar16 = bVar24;
            if (uVar18 < (ulong)local_68[3]) goto LAB_00682fe9;
LAB_00683298:
            (**(code **)(*local_68 + 0x50))();
            local_60 = 0xffffffff;
            if (local_68 != (long *)0x0) goto LAB_00682ff9;
            local_80 = true;
          }
          bVar7 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar24 = (int)local_70 == -1;
          if (bVar7) {
            bVar24 = false;
            if (((ulong)local_78[3] <= (ulong)local_78[2]) &&
               (iVar10 = (**(code **)(*local_78 + 0x48))(), bVar24 = false, iVar10 == -1)) {
              local_78 = (long *)0x0;
              bVar24 = bVar7;
            }
          }
          if (local_80 == bVar24) {
            cVar8 = *(char *)(lVar11 + 0x20);
            cVar6 = '\x01';
            goto joined_r0x00683042;
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
        } while (bVar16);
        cVar6 = '\0';
      }
joined_r0x00683042:
      uVar17 = uVar21;
      if (uVar21 == 0x10) {
        uVar17 = 0x16;
      }
    }
    else {
      cVar8 = *(char *)(lVar11 + 0x20);
      uVar9 = 0;
      iVar23 = 0;
      bVar16 = false;
      local_7a = false;
      uVar17 = uVar21;
    }
  }
  else {
    uVar21 = 10;
    if (uVar17 != 8) goto LAB_00682e9e;
    uVar21 = 0x10;
    cVar6 = FUN_00681960(&local_68);
    if (cVar6 == '\0') goto LAB_00682ecd;
    local_7a = false;
    cVar8 = *(char *)(lVar11 + 0x20);
    uVar9 = 0;
    iVar23 = 0;
    bVar16 = false;
    uVar17 = 0x16;
  }
LAB_00683055:
  local_a8 = &local_78;
  local_d0 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar8 != '\0') {
    FUN_00638bc0(&local_48,0x20);
  }
  uVar15 = (ulong)(int)uVar21;
  uVar12 = (ulong)local_7a + 0x7fffffffffffffff;
  uVar13 = uVar12 / uVar15;
  uVar18 = uVar12 % uVar15;
  bVar3 = *(byte *)(lVar11 + 0x88);
  cVar8 = cVar6;
  if (bVar3 == 0) {
    bVar2 = 0;
    if (cVar6 == '\0') {
      local_a0 = (char)uVar17;
      uVar22 = 0;
LAB_006830c9:
      cVar8 = (char)uVar9;
      iVar10 = (int)cVar8;
      if (uVar17 < 0xb) {
        if ((cVar8 < '0') || ((char)(local_a0 + '0') <= cVar8)) goto LAB_00683540;
      }
      else if (9 < (byte)(cVar8 - 0x30U)) goto LAB_00683314;
      iVar10 = iVar10 + -0x30;
LAB_006830ed:
      if (uVar22 <= uVar13) goto LAB_00683330;
LAB_006830f7:
      bVar2 = 1;
      uVar18 = local_68[2];
      if ((ulong)local_68[3] <= uVar18) goto LAB_00683368;
LAB_0068310f:
      local_68[2] = uVar18 + 1;
      do {
        local_60 = 0xffffffff;
        bVar24 = false;
        if ((ulong)local_68[3] <= (ulong)local_68[2]) {
                    /* try { // try from 00683814 to 00683816 has its CatchHandler @ 006838e0 */
          iVar10 = (**(code **)(*local_68 + 0x48))();
          bVar24 = false;
          if (iVar10 == -1) {
            local_68 = (long *)0x0;
            bVar24 = true;
          }
        }
        while( true ) {
          bVar20 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar7 = (int)local_70 == -1;
          if ((bVar20) && (bVar7 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
            iVar10 = (**(code **)(*local_78 + 0x48))();
            bVar7 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar7 = bVar20;
            }
          }
          if (bVar7 == bVar24) {
            cVar8 = '\x01';
            cVar25 = cVar6;
            goto LAB_0068315c;
          }
          uVar9 = local_60;
          if ((local_60 != 0xffffffff) || (local_68 == (long *)0x0)) goto LAB_006830c9;
          if ((byte *)local_68[2] < (byte *)local_68[3]) {
            uVar9 = (uint)*(byte *)local_68[2];
            goto LAB_006830c9;
          }
                    /* try { // try from 0068387f to 00683881 has its CatchHandler @ 006838e0 */
          uVar9 = (**(code **)(*local_68 + 0x48))();
          if (uVar9 != 0xffffffff) goto LAB_006830c9;
          local_68 = (long *)0x0;
          if (uVar17 < 0xb) goto LAB_00683540;
          cVar8 = -1;
          iVar10 = -1;
LAB_00683314:
          if (5 < (byte)(cVar8 + 0x9fU)) {
            if (5 < (byte)(cVar8 + 0xbfU)) goto LAB_00683540;
            iVar10 = iVar10 + -0x37;
            goto LAB_006830ed;
          }
          iVar10 = iVar10 + -0x57;
          if (uVar13 < uVar22) goto LAB_006830f7;
LAB_00683330:
          uVar19 = uVar15 * uVar22;
          uVar22 = (long)iVar10 + uVar19;
          uVar18 = local_68[2];
          iVar23 = iVar23 + 1;
          bVar2 = bVar2 | uVar12 - (long)iVar10 < uVar19;
          if (uVar18 < (ulong)local_68[3]) goto LAB_0068310f;
LAB_00683368:
                    /* try { // try from 00683378 to 0068337a has its CatchHandler @ 006838e0 */
          (**(code **)(*local_68 + 0x50))();
          local_60 = 0xffffffff;
          if (local_68 != (long *)0x0) break;
          bVar24 = true;
        }
      } while( true );
    }
    uVar22 = 0;
    cVar25 = '\0';
  }
  else if (cVar6 == '\0') {
    bVar2 = 0;
    uVar22 = 0;
    cVar25 = *(char *)(lVar11 + 0x20);
    if ((cVar25 != '\0') && (*(char *)(lVar11 + 0x49) == (char)uVar9)) goto LAB_00683653;
LAB_00683588:
    if (((char)uVar9 != *(char *)(lVar11 + 0x48)) &&
       (lVar14 = thunk_FUN_007134f0(lVar11 + 0x72,(int)(char)uVar9,uVar17), lVar14 != 0)) {
      iVar10 = (int)lVar14 - (int)(lVar11 + 0x72);
      if (0xf < iVar10) {
        iVar10 = iVar10 + -6;
      }
      bVar5 = bVar3;
      if (uVar22 <= uVar13) {
        uVar18 = uVar15 * uVar22;
        uVar22 = (long)iVar10 + uVar18;
        iVar23 = iVar23 + 1;
        bVar5 = bVar2 | uVar12 - (long)iVar10 < uVar18;
      }
      uVar18 = local_68[2];
      bVar2 = bVar5;
      if ((ulong)local_68[3] <= uVar18) goto LAB_00683685;
      do {
        local_68[2] = uVar18 + 1;
        while( true ) {
          local_60 = 0xffffffff;
          cVar8 = FUN_00681960(local_d0,local_a8);
          cVar25 = cVar6;
          if (cVar8 != '\0') goto LAB_0068315c;
          uVar9 = FUN_00681a20(local_d0);
          cVar25 = *(char *)(lVar11 + 0x20);
          if ((cVar25 == '\0') || (uVar18 = extraout_RDX, *(char *)(lVar11 + 0x49) != (char)uVar9))
          goto LAB_00683588;
LAB_00683653:
          if (iVar23 == 0) {
            iVar23 = 0;
            cVar8 = '\0';
            goto LAB_0068315c;
          }
          FUN_006390c0(&local_48,(int)(char)iVar23,uVar18);
          iVar23 = 0;
          uVar18 = local_68[2];
          if (uVar18 < (ulong)local_68[3]) break;
LAB_00683685:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_00683540:
    cVar8 = '\0';
    cVar25 = cVar6;
  }
  else {
    bVar2 = 0;
    uVar22 = 0;
    cVar25 = '\0';
  }
LAB_0068315c:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar16) || (iVar23 != 0)) {
LAB_00683480:
      if (cVar25 == '\0') {
        if (bVar2 == 0) {
          uVar18 = -uVar22;
          if (local_7a == false) {
            uVar18 = uVar22;
          }
          *param_8 = uVar18;
        }
        else {
          uVar18 = 0x8000000000000000;
          if (local_7a == false) {
            uVar18 = 0x7fffffffffffffff;
          }
          *param_8 = uVar18;
          *param_7 = 4;
        }
        goto LAB_00683199;
      }
    }
  }
  else {
                    /* try { // try from 0068343c to 006836f9 has its CatchHandler @ 006838e0 */
    FUN_006390c0(&local_48,(int)(char)iVar23);
    cVar6 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_48);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((iVar23 != 0) || (bVar16)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_00683480;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00683199:
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
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar23 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar23 + -1;
    }
    if (iVar23 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

