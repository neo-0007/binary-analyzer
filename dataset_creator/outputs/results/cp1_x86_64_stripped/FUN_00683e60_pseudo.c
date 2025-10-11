
undefined1  [16]
FUN_00683e60(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ushort *param_8)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  ulong extraout_RDX;
  uint uVar16;
  bool bVar17;
  int iVar18;
  bool bVar19;
  char cVar20;
  long in_FS_OFFSET;
  bool bVar21;
  uint local_bc;
  long **local_b8;
  long **local_a0;
  char local_98;
  ushort local_80;
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
    uVar16 = 8;
LAB_00683eeb:
    cVar6 = FUN_00681960();
    if (cVar6 == '\0') {
LAB_00683f1a:
      local_a0 = &local_78;
      local_b8 = &local_68;
      uVar9 = FUN_00681a20();
      cVar6 = (char)uVar9;
      bVar21 = *(char *)(lVar11 + 0x6e) == cVar6;
      if ((bVar21) || (*(char *)(lVar11 + 0x6f) == cVar6)) {
        cVar8 = *(char *)(lVar11 + 0x20);
        if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
           (*(char *)(lVar11 + 0x48) == cVar6)) goto LAB_00683fb8;
        FUN_0069d140(local_68);
        local_60 = 0xffffffff;
        cVar6 = FUN_00681960(local_b8,local_a0);
        if (cVar6 == '\0') {
          uVar9 = FUN_00681a20();
          cVar8 = *(char *)(lVar11 + 0x20);
          goto LAB_00683fb8;
        }
        cVar8 = *(char *)(lVar11 + 0x20);
        iVar18 = 0;
        bVar14 = false;
      }
      else {
        cVar8 = *(char *)(lVar11 + 0x20);
LAB_00683fb8:
        bVar14 = false;
        iVar18 = 0;
        do {
          cVar6 = (char)uVar9;
          if (((cVar8 != '\0') && (*(char *)(lVar11 + 0x49) == cVar6)) ||
             (*(char *)(lVar11 + 0x48) == cVar6)) break;
          if (*(char *)(lVar11 + 0x72) == cVar6) {
            bVar19 = (bool)(bVar14 ^ 1U | uVar16 == 10);
            if (!bVar19) goto LAB_00683ff3;
            bVar14 = uVar15 == 0 || uVar16 == 8;
            if (uVar15 != 0 && uVar16 != 8) {
              iVar18 = iVar18 + 1;
              goto LAB_00684022;
            }
            iVar18 = 0;
            uVar16 = 8;
            uVar13 = local_68[2];
            if ((ulong)local_68[3] <= uVar13) goto LAB_006842d8;
LAB_00684035:
            local_68[2] = uVar13 + 1;
LAB_00684045:
            local_60 = 0xffffffff;
            local_bc._0_1_ = false;
            if ((ulong)local_68[3] <= (ulong)local_68[2]) {
              iVar10 = (**(code **)(*local_68 + 0x48))();
              local_bc._0_1_ = false;
              if (iVar10 == -1) {
                local_68 = (long *)0x0;
                local_bc._0_1_ = true;
              }
            }
          }
          else {
            if (!bVar14) break;
LAB_00683ff3:
            if ((*(char *)(lVar11 + 0x70) != cVar6) && (*(char *)(lVar11 + 0x71) != cVar6)) {
              cVar6 = '\0';
              bVar14 = true;
              goto joined_r0x0068408d;
            }
            cVar6 = uVar16 == 0x10 || uVar15 == 0;
            if (uVar16 != 0x10 && uVar15 != 0) {
              bVar14 = true;
              uVar15 = uVar16;
              goto LAB_006840a0;
            }
            iVar18 = 0;
            bVar19 = false;
            uVar16 = 0x10;
LAB_00684022:
            uVar13 = local_68[2];
            bVar14 = bVar19;
            if (uVar13 < (ulong)local_68[3]) goto LAB_00684035;
LAB_006842d8:
            (**(code **)(*local_68 + 0x50))();
            local_60 = 0xffffffff;
            if (local_68 != (long *)0x0) goto LAB_00684045;
            local_bc._0_1_ = true;
          }
          bVar7 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar19 = (int)local_70 == -1;
          if (bVar7) {
            bVar19 = false;
            if (((ulong)local_78[3] <= (ulong)local_78[2]) &&
               (iVar10 = (**(code **)(*local_78 + 0x48))(), bVar19 = false, iVar10 == -1)) {
              local_78 = (long *)0x0;
              bVar19 = bVar7;
            }
          }
          if (local_bc._0_1_ == bVar19) {
            cVar8 = *(char *)(lVar11 + 0x20);
            cVar6 = '\x01';
            goto joined_r0x0068408d;
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
        } while (bVar14);
        cVar6 = '\0';
      }
joined_r0x0068408d:
      uVar15 = uVar16;
      if (uVar16 == 0x10) {
        uVar15 = 0x16;
      }
    }
    else {
      cVar8 = *(char *)(lVar11 + 0x20);
      uVar9 = 0;
      iVar18 = 0;
      bVar14 = false;
      bVar21 = false;
      uVar15 = uVar16;
    }
  }
  else {
    uVar16 = 10;
    if (uVar15 != 8) goto LAB_00683eeb;
    uVar16 = 0x10;
    cVar6 = FUN_00681960();
    if (cVar6 == '\0') goto LAB_00683f1a;
    bVar21 = false;
    cVar8 = *(char *)(lVar11 + 0x20);
    uVar9 = 0;
    iVar18 = 0;
    bVar14 = false;
    uVar15 = 0x16;
  }
LAB_006840a0:
  local_b8 = &local_68;
  local_48 = &DAT_009452b8;
  if (cVar8 != '\0') {
    FUN_00638bc0();
  }
  uVar13 = 0xffff % (ulong)(long)(int)uVar16;
  bVar2 = *(byte *)(lVar11 + 0x88);
  local_80 = (ushort)(0xffff / (ulong)(long)(int)uVar16);
  cVar8 = cVar6;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar6 == '\0') {
      local_98 = (char)uVar15;
      local_bc = 0;
LAB_006840ff:
      cVar8 = (char)uVar9;
      iVar10 = (int)cVar8;
      if (uVar15 < 0xb) {
        if ((cVar8 < '0') || ((char)(local_98 + '0') <= cVar8)) goto LAB_00684570;
      }
      else if (9 < (byte)(cVar8 - 0x30U)) goto LAB_00684355;
      iVar10 = iVar10 + -0x30;
LAB_00684126:
      if ((ushort)local_bc <= local_80) goto LAB_00684378;
LAB_00684136:
      local_7b = 1;
      uVar13 = local_68[2];
      if ((ulong)local_68[3] <= uVar13) goto LAB_006843b2;
LAB_0068414e:
      local_68[2] = uVar13 + 1;
      do {
        local_60 = 0xffffffff;
        bVar19 = false;
        if ((ulong)local_68[3] <= (ulong)local_68[2]) {
                    /* try { // try from 00684857 to 00684859 has its CatchHandler @ 00684933 */
          iVar10 = (**(code **)(*local_68 + 0x48))();
          bVar19 = false;
          if (iVar10 == -1) {
            local_68 = (long *)0x0;
            bVar19 = true;
          }
        }
        while( true ) {
          bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar7 = (int)local_70 == -1;
          if ((bVar17) && (bVar7 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
            iVar10 = (**(code **)(*local_78 + 0x48))();
            bVar7 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar7 = bVar17;
            }
          }
          if (bVar19 == bVar7) {
            cVar8 = '\x01';
            cVar20 = cVar6;
            goto LAB_0068419e;
          }
          uVar9 = local_60;
          if ((local_60 != 0xffffffff) || (local_68 == (long *)0x0)) goto LAB_006840ff;
          if ((byte *)local_68[2] < (byte *)local_68[3]) {
            uVar9 = (uint)*(byte *)local_68[2];
            goto LAB_006840ff;
          }
                    /* try { // try from 006848c3 to 006848c5 has its CatchHandler @ 00684933 */
          uVar9 = (**(code **)(*local_68 + 0x48))();
          if (uVar9 != 0xffffffff) goto LAB_006840ff;
          local_68 = (long *)0x0;
          if (uVar15 < 0xb) goto LAB_00684570;
          cVar8 = -1;
          iVar10 = -1;
LAB_00684355:
          if (5 < (byte)(cVar8 + 0x9fU)) {
            if (5 < (byte)(cVar8 + 0xbfU)) goto LAB_00684570;
            iVar10 = iVar10 + -0x37;
            goto LAB_00684126;
          }
          iVar10 = iVar10 + -0x57;
          if (local_80 < (ushort)local_bc) goto LAB_00684136;
LAB_00684378:
          local_7b = local_7b | 0xffff - iVar10 < (int)(local_bc * uVar16 & 0xffff);
          iVar18 = iVar18 + 1;
          local_bc = (uint)(ushort)((short)iVar10 + (short)(local_bc * uVar16));
          uVar13 = local_68[2];
          if (uVar13 < (ulong)local_68[3]) goto LAB_0068414e;
LAB_006843b2:
                    /* try { // try from 006843c2 to 006843c4 has its CatchHandler @ 00684933 */
          (**(code **)(*local_68 + 0x50))();
          local_60 = 0xffffffff;
          if (local_68 != (long *)0x0) break;
          bVar19 = true;
        }
      } while( true );
    }
    local_bc._0_2_ = 0;
    cVar20 = '\0';
  }
  else if (cVar6 == '\0') {
    local_7b = 0;
    cVar20 = *(char *)(lVar11 + 0x20);
    local_bc = 0;
    if ((cVar20 != '\0') && (*(char *)(lVar11 + 0x49) == (char)uVar9)) goto LAB_0068468d;
LAB_006845b2:
    if (((char)uVar9 != *(char *)(lVar11 + 0x48)) &&
       (lVar12 = thunk_FUN_007134f0(lVar11 + 0x72,(int)(char)uVar9,uVar15), lVar12 != 0)) {
      iVar10 = (int)lVar12 - (int)(lVar11 + 0x72);
      if (0xf < iVar10) {
        iVar10 = iVar10 + -6;
      }
      bVar5 = bVar2;
      if ((ushort)local_bc <= local_80) {
        uVar9 = local_bc * uVar16;
        iVar18 = iVar18 + 1;
        local_bc = (uint)(ushort)((short)iVar10 + (short)uVar9);
        bVar5 = local_7b | 0xffff - iVar10 < (int)(uVar9 & 0xffff);
      }
      local_7b = bVar5;
      uVar13 = local_68[2];
      if ((ulong)local_68[3] <= uVar13) goto LAB_006846c5;
      do {
        local_68[2] = uVar13 + 1;
        while( true ) {
          local_60 = 0xffffffff;
          cVar8 = FUN_00681960(local_b8);
          cVar20 = cVar6;
          if (cVar8 != '\0') goto LAB_0068419e;
          uVar9 = FUN_00681a20(local_b8);
          cVar20 = *(char *)(lVar11 + 0x20);
          if ((cVar20 == '\0') || (uVar13 = extraout_RDX, *(char *)(lVar11 + 0x49) != (char)uVar9))
          goto LAB_006845b2;
LAB_0068468d:
          if (iVar18 == 0) {
            iVar18 = 0;
            cVar8 = '\0';
            goto LAB_0068419e;
          }
          FUN_006390c0(&local_48,(int)(char)iVar18,uVar13);
          iVar18 = 0;
          uVar13 = local_68[2];
          if (uVar13 < (ulong)local_68[3]) break;
LAB_006846c5:
          (**(code **)(*local_68 + 0x50))();
        }
      } while( true );
    }
LAB_00684570:
    cVar8 = '\0';
    cVar20 = cVar6;
  }
  else {
    local_7b = 0;
    cVar20 = '\0';
    local_bc._0_2_ = 0;
  }
LAB_0068419e:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar14) || (iVar18 != 0)) {
LAB_006844c6:
      if (cVar20 == '\0') {
        if (local_7b == 0) {
          uVar3 = -(ushort)local_bc;
          if (!bVar21) {
            uVar3 = (ushort)local_bc;
          }
          *param_8 = uVar3;
        }
        else {
          *param_8 = 0xffff;
          *param_7 = 4;
        }
        goto LAB_006841d9;
      }
    }
  }
  else {
                    /* try { // try from 00684484 to 00684739 has its CatchHandler @ 00684933 */
    FUN_006390c0(&local_48,(int)(char)iVar18);
    cVar6 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_48);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((iVar18 != 0) || (bVar14)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006844c6;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006841d9:
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
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar18 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar18 + -1;
    }
    if (iVar18 < 1) {
      thunk_FUN_007104f0(local_48 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

