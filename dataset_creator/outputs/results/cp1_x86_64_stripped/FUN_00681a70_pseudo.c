
long * FUN_00681a70(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
                   long param_6,undefined4 *param_7,long *param_8)

{
  ulong uVar1;
  int *piVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  bool bVar14;
  undefined1 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  bool bVar18;
  byte bVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  long in_FS_OFFSET;
  undefined1 **local_b8;
  int local_98;
  byte local_93;
  byte local_92;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  local_60 = param_3;
  lVar11 = FUN_0067fd80(&local_4a,param_6 + 0xd0);
  cVar6 = FUN_00681960(&local_68);
  if (cVar6 == '\0') {
    uVar8 = FUN_00681a20(&local_68);
    uVar20 = (ulong)uVar8;
    cVar7 = (char)uVar8;
    if ((*(char *)(lVar11 + 0x6f) == cVar7) || (*(char *)(lVar11 + 0x6e) == cVar7)) {
      cVar13 = *(char *)(lVar11 + 0x20);
      if (((cVar13 != '\0') && (*(char *)(lVar11 + 0x49) == cVar7)) ||
         (*(char *)(lVar11 + 0x48) == cVar7)) goto LAB_00682269;
      FUN_006390c0(param_8,(*(char *)(lVar11 + 0x6f) != cVar7) * '\x02' + '+');
      FUN_0069d140(local_68);
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      cVar7 = FUN_00681960(&local_68,&local_78);
      if (cVar7 != '\0') {
        cVar13 = *(char *)(lVar11 + 0x20);
        bVar21 = 0;
        local_98 = 0;
        cVar6 = cVar7;
        goto LAB_00681b20;
      }
      uVar8 = FUN_00681a20(&local_68);
      uVar20 = (ulong)uVar8;
    }
    cVar13 = *(char *)(lVar11 + 0x20);
LAB_00682269:
    bVar21 = 0;
    iVar9 = 0;
    do {
      cVar7 = (char)uVar20;
      local_98 = iVar9;
      if ((cVar13 != '\0') && (*(char *)(lVar11 + 0x49) == cVar7)) goto LAB_0068221e;
      if ((*(char *)(lVar11 + 0x48) == cVar7) || (*(char *)(lVar11 + 0x72) != cVar7))
      goto LAB_00681b20;
      if (bVar21 == 0) {
        lVar12 = *param_8;
        lVar4 = *(long *)(lVar12 + -0x18);
        uVar1 = lVar4 + 1;
        if ((*(ulong *)(lVar12 + -0x10) < uVar1) || (0 < *(int *)(lVar12 + -8))) {
          FUN_00638bc0(param_8,uVar1);
        }
        *(undefined1 *)(*param_8 + *(long *)(*param_8 + -0x18)) = 0x30;
        puVar15 = (undefined1 *)*param_8;
        if (puVar15 != &DAT_009452b8) {
          *(undefined4 *)(puVar15 + -8) = 0;
          *(ulong *)(puVar15 + -0x18) = uVar1;
          puVar15[lVar4 + 1] = 0;
        }
      }
      iVar9 = iVar9 + 1;
      if ((ulong)local_68[2] < (ulong)local_68[3]) {
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        local_68[2] = local_68[2] + 1;
LAB_006822d2:
        local_98._0_1_ = false;
        if ((ulong)local_68[3] <= (ulong)local_68[2]) {
          iVar10 = (**(code **)(*local_68 + 0x48))();
          local_98._0_1_ = false;
          if (iVar10 == -1) {
            local_68 = (long *)0x0;
            local_98._0_1_ = true;
          }
        }
      }
      else {
        (**(code **)(*local_68 + 0x50))();
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        if (local_68 != (long *)0x0) goto LAB_006822d2;
        local_98._0_1_ = true;
      }
      bVar14 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar18 = (int)local_70 == -1;
      if (((bVar14) && (bVar18 = false, (ulong)local_78[3] <= (ulong)local_78[2])) &&
         (iVar10 = (**(code **)(*local_78 + 0x48))(), iVar10 == -1)) {
        local_78 = (long *)0x0;
        bVar18 = bVar14;
      }
      if ((bool)(char)local_98 == bVar18) goto code_r0x0068230a;
      uVar20 = local_60 & 0xffffffff;
      if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
        if ((byte *)local_68[2] < (byte *)local_68[3]) {
          uVar20 = (ulong)*(byte *)local_68[2];
        }
        else {
          uVar8 = (**(code **)(*local_68 + 0x48))();
          uVar20 = (ulong)uVar8;
          if (uVar8 == 0xffffffff) {
            local_68 = (long *)0x0;
          }
        }
      }
      cVar13 = *(char *)(lVar11 + 0x20);
      bVar21 = 1;
    } while( true );
  }
  cVar13 = *(char *)(lVar11 + 0x20);
  uVar20 = 0;
  bVar21 = 0;
  local_98 = 0;
  goto LAB_00681b20;
code_r0x00682047:
  uVar20 = local_60 & 0xffffffff;
  if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
    if ((byte *)local_68[2] < (byte *)local_68[3]) {
      uVar20 = (ulong)*(byte *)local_68[2];
    }
    else {
      uVar8 = (**(code **)(*local_68 + 0x48))();
      uVar20 = (ulong)uVar8;
      if (uVar8 == 0xffffffff) {
        local_68 = (long *)0x0;
        uVar20 = 0xffffffff;
      }
    }
  }
  bVar19 = *(byte *)(lVar11 + 0x20);
  cVar6 = (char)uVar20;
  if ((((*(char *)(lVar11 + 0x6f) != cVar6) &&
       (bVar21 = bVar22, local_93 = bVar22, *(char *)(lVar11 + 0x6e) != cVar6)) ||
      ((bVar19 != 0 && (bVar21 = bVar19, local_93 = bVar19, *(char *)(lVar11 + 0x49) == cVar6)))) ||
     (bVar21 = bVar22, local_93 = bVar22, *(char *)(lVar11 + 0x48) == cVar6)) goto LAB_00681d98;
  FUN_006390c0(param_8,(*(char *)(lVar11 + 0x6f) != cVar6) * '\x02' + '+');
LAB_00681deb:
  uVar20 = local_68[2];
  if (uVar20 < (ulong)local_68[3]) {
LAB_00681dfe:
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    local_68[2] = uVar20 + 1;
  }
  else {
LAB_00681f5c:
    (**(code **)(*local_68 + 0x50))();
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    bVar19 = bVar3;
    if (local_68 == (long *)0x0) goto LAB_00681e1f;
  }
  bVar19 = 0;
                    /* try { // try from 006825fc to 0068268d has its CatchHandler @ 006827c2 */
  if (((ulong)local_68[3] <= (ulong)local_68[2]) &&
     (iVar9 = (**(code **)(*local_68 + 0x48))(), bVar19 = 0, iVar9 == -1)) {
    local_68 = (long *)0x0;
    bVar19 = bVar3;
  }
LAB_00681e1f:
  bVar14 = local_78 != (long *)0x0 && (int)local_70 == -1;
  bVar18 = (int)local_70 == -1;
  if ((bVar14) && (bVar18 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
    iVar9 = (**(code **)(*local_78 + 0x48))();
    bVar18 = false;
    if (iVar9 == -1) {
      local_78 = (long *)0x0;
      bVar18 = bVar14;
    }
  }
  if (bVar18 == (bool)bVar19) goto LAB_00681e4c;
  uVar20 = local_60 & 0xffffffff;
  if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
    if ((byte *)local_68[2] < (byte *)local_68[3]) {
      uVar20 = (ulong)*(byte *)local_68[2];
    }
    else {
                    /* try { // try from 006826f3 to 0068271f has its CatchHandler @ 006827c2 */
      uVar8 = (**(code **)(*local_68 + 0x48))();
      uVar20 = (ulong)uVar8;
      if (uVar8 == 0xffffffff) {
        local_68 = (long *)0x0;
        uVar20 = 0xffffffff;
      }
    }
  }
  bVar19 = *(byte *)(lVar11 + 0x20);
  goto LAB_00681d98;
LAB_00681e4c:
  puVar15 = local_48;
  if (*(long *)(local_48 + -0x18) == 0) goto LAB_00681ea7;
  if ((local_92 == 0) && (local_93 == 0)) goto LAB_00681e6c;
  goto LAB_00681e87;
code_r0x0068230a:
  cVar13 = *(char *)(lVar11 + 0x20);
  bVar21 = 1;
  cVar6 = '\x01';
  local_98 = iVar9;
LAB_00681b20:
  local_48 = &DAT_009452b8;
  if (cVar13 != '\0') {
LAB_0068221e:
    local_48 = &DAT_009452b8;
    FUN_00638bc0(&local_48,0x20);
  }
  bVar3 = *(byte *)(lVar11 + 0x88);
  if (bVar3 == 0) {
    if (cVar6 == '\0') {
      local_93 = 0;
      local_92 = 0;
LAB_00681b70:
      cVar6 = (char)uVar20;
      if (9 < (byte)(cVar6 - 0x30U)) goto LAB_00681c70;
LAB_00681b81:
      lVar12 = *param_8;
      lVar4 = *(long *)(lVar12 + -0x18);
      uVar20 = lVar4 + 1;
      if ((*(ulong *)(lVar12 + -0x10) < uVar20) || (0 < *(int *)(lVar12 + -8))) {
                    /* try { // try from 00681ba8 to 00682233 has its CatchHandler @ 006827c2 */
        FUN_00638bc0(param_8,uVar20);
      }
      bVar21 = 1;
      *(char *)(*param_8 + *(long *)(*param_8 + -0x18)) = cVar6;
      puVar15 = (undefined1 *)*param_8;
      if (puVar15 != &DAT_009452b8) {
        *(undefined4 *)(puVar15 + -8) = 0;
        *(ulong *)(puVar15 + -0x18) = uVar20;
        puVar15[lVar4 + 1] = 0;
      }
LAB_00681bd0:
      uVar20 = local_68[2];
      if ((ulong)local_68[3] <= uVar20) goto LAB_00681d40;
LAB_00681be3:
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      local_68[2] = uVar20 + 1;
      do {
        bVar18 = false;
        if (((ulong)local_68[3] <= (ulong)local_68[2]) &&
           (iVar9 = (**(code **)(*local_68 + 0x48))(), bVar18 = false, iVar9 == -1)) {
          local_68 = (long *)0x0;
          bVar18 = true;
        }
        while( true ) {
          bVar16 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar14 = (int)local_70 == -1;
          if ((bVar16) && (bVar14 = false, (ulong)local_78[3] <= (ulong)local_78[2])) {
            iVar9 = (**(code **)(*local_78 + 0x48))();
            bVar14 = false;
            if (iVar9 == -1) {
              local_78 = (long *)0x0;
              bVar14 = bVar16;
            }
          }
          if (bVar18 == bVar14) goto LAB_00681e4c;
          uVar20 = local_60 & 0xffffffff;
          if (((int)local_60 != -1) || (local_68 == (long *)0x0)) goto LAB_00681b70;
          if ((char *)local_68[3] <= (char *)local_68[2]) {
            uVar8 = (**(code **)(*local_68 + 0x48))();
            uVar20 = (ulong)uVar8;
            if (uVar8 == 0xffffffff) {
              local_68 = (long *)0x0;
              uVar20 = 0xffffffff;
            }
            goto LAB_00681b70;
          }
          cVar6 = *(char *)local_68[2];
          if ((byte)(cVar6 - 0x30U) < 10) goto LAB_00681b81;
LAB_00681c70:
          if ((*(char *)(lVar11 + 0x48) == cVar6) && (local_92 == 0 && local_93 == 0)) {
            FUN_006390c0(param_8,0x2e);
            local_93 = 0;
            local_92 = 1;
            goto LAB_00681bd0;
          }
          if (((*(char *)(lVar11 + 0x80) != cVar6) && (*(char *)(lVar11 + 0x86) != cVar6)) ||
             (bVar21 = bVar21 & (local_93 ^ 1), bVar21 == 0)) goto LAB_00681e4c;
          FUN_006390c0(param_8,0x65);
          FUN_0069d140(local_68);
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          cVar6 = FUN_00681960(&local_68,&local_78);
          if (cVar6 != '\0') goto LAB_006826ae;
          uVar8 = FUN_00681a20(&local_68);
          uVar20 = (ulong)uVar8;
          local_93 = bVar21;
          if (*(char *)(lVar11 + 0x6f) == (char)uVar8) {
            uVar17 = 0x2b;
          }
          else {
            uVar17 = 0x2d;
            if (*(char *)(lVar11 + 0x6e) != (char)uVar8) goto LAB_00681b70;
          }
          FUN_006390c0(param_8,uVar17);
          uVar20 = local_68[2];
          if (uVar20 < (ulong)local_68[3]) goto LAB_00681be3;
LAB_00681d40:
          (**(code **)(*local_68 + 0x50))();
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          if (local_68 != (long *)0x0) break;
          bVar18 = true;
        }
      } while( true );
    }
LAB_00682461:
    puVar15 = local_48;
    if (*(long *)(local_48 + -0x18) == 0) goto LAB_00681ea7;
LAB_00681e6c:
    FUN_006390c0(&local_48,(int)(char)local_98);
  }
  else {
    if (cVar6 != '\0') goto LAB_00682461;
    local_93 = 0;
    bVar19 = *(byte *)(lVar11 + 0x20);
    local_92 = 0;
LAB_00681d98:
    cVar6 = (char)uVar20;
    if ((bVar19 != 0) && (*(char *)(lVar11 + 0x49) == cVar6)) {
      if (local_92 != 0 || local_93 != 0) {
LAB_00682663:
        lVar12 = *(long *)(local_48 + -0x18);
        goto joined_r0x00682674;
      }
      if (local_98 != 0) {
        FUN_006390c0(&local_48,(int)(char)local_98);
        local_93 = 0;
        local_98 = 0;
        local_92 = 0;
        goto LAB_00681deb;
      }
      puVar15 = (undefined1 *)*param_8;
      if (*(int *)(*param_8 + -8) < 1) {
        if (puVar15 != &DAT_009452b8) {
          *(undefined4 *)(puVar15 + -8) = 0;
          *(undefined8 *)(puVar15 + -0x18) = 0;
          *puVar15 = 0;
        }
      }
      else {
        if ((undefined8 *)(puVar15 + -0x18) != &DAT_009452a0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar2 = (int *)(puVar15 + -8);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(puVar15 + -8);
            *(int *)(puVar15 + -8) = iVar9 + -1;
          }
          if (iVar9 < 1) {
            thunk_FUN_007104f0(puVar15 + -0x18,&local_49);
          }
        }
        *param_8 = (long)&DAT_009452b8;
      }
      goto LAB_00682461;
    }
    if (*(char *)(lVar11 + 0x48) == cVar6) {
      if (local_93 != 0 || local_92 != 0) goto LAB_00682663;
      if (*(long *)(local_48 + -0x18) != 0) {
        FUN_006390c0(&local_48,(int)(char)local_98);
      }
      FUN_006390c0(param_8,0x2e);
      uVar20 = local_68[2];
      local_93 = 0;
      local_92 = bVar3;
      if ((ulong)local_68[3] <= uVar20) goto LAB_00681f5c;
      goto LAB_00681dfe;
    }
    lVar12 = thunk_FUN_007134f0(lVar11 + 0x72,(int)cVar6,10);
    if (lVar12 != 0) {
      FUN_006390c0(param_8,(int)(char)(((char)lVar12 - (char)(lVar11 + 0x72)) + '0'));
      local_98 = local_98 + 1;
      bVar21 = bVar3;
      goto LAB_00681deb;
    }
    if ((*(char *)(lVar11 + 0x80) != cVar6) && (*(char *)(lVar11 + 0x86) != cVar6))
    goto LAB_00681e4c;
    bVar22 = bVar21 & (local_93 ^ 1);
    if (bVar22 == 0) goto LAB_00681e4c;
    if ((*(long *)(local_48 + -0x18) != 0) && (local_92 == 0)) {
      FUN_006390c0(&local_48,(int)(char)local_98);
    }
    FUN_006390c0(param_8,0x65);
    if ((ulong)local_68[2] < (ulong)local_68[3]) {
      local_68[2] = local_68[2] + 1;
    }
    else {
                    /* try { // try from 0068232f to 00682394 has its CatchHandler @ 006827c2 */
      (**(code **)(*local_68 + 0x50))();
    }
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    cVar6 = FUN_00681960(&local_68,&local_78);
    if (cVar6 == '\0') goto code_r0x00682047;
LAB_006826ae:
    lVar12 = *(long *)(local_48 + -0x18);
joined_r0x00682674:
    puVar15 = local_48;
    if (lVar12 == 0) goto LAB_00681ea7;
  }
LAB_00681e87:
  puVar15 = local_48;
  local_b8 = &local_48;
  cVar6 = FUN_006c6980(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),local_b8);
  if (cVar6 == '\0') {
    *param_7 = 4;
  }
LAB_00681ea7:
  plVar5 = local_68;
  if ((undefined8 *)(puVar15 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar2 = (int *)(puVar15 + -8);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar9 = *(int *)(puVar15 + -8);
      *(int *)(puVar15 + -8) = iVar9 + -1;
    }
    if (iVar9 < 1) {
      thunk_FUN_007104f0(puVar15 + -0x18,&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

