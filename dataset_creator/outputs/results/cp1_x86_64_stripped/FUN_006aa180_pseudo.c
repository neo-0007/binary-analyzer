
long * FUN_006aa180(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5,long param_6,undefined4 *param_7,long *param_8)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  long in_FS_OFFSET;
  undefined1 **local_b8;
  int local_98;
  byte local_93;
  byte local_92;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  local_60 = param_3;
  lVar10 = FUN_006a8560(&local_4a,param_6 + 0xd0);
  cVar5 = FUN_006aa060(&local_68);
  if (cVar5 == '\0') {
    iVar8 = FUN_006aa130(&local_68);
    if ((*(int *)(lVar10 + 0xe4) == iVar8) || (*(int *)(lVar10 + 0xe0) == iVar8)) {
      cVar13 = *(char *)(lVar10 + 0x20);
      if (((cVar13 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar8)) ||
         (*(int *)(lVar10 + 0x48) == iVar8)) goto LAB_006aa9c7;
      FUN_006390c0(param_8,(*(int *)(lVar10 + 0xe4) != iVar8) * '\x02' + '+');
      FUN_0069d900(local_68);
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      cVar7 = FUN_006aa060(&local_68,&local_78);
      if (cVar7 != '\0') {
        cVar13 = *(char *)(lVar10 + 0x20);
        bVar19 = 0;
        local_98 = 0;
        cVar5 = cVar7;
        goto LAB_006aa230;
      }
      iVar8 = FUN_006aa130(&local_68);
    }
    cVar13 = *(char *)(lVar10 + 0x20);
LAB_006aa9c7:
    bVar19 = 0;
    local_98 = 0;
    do {
      if ((cVar13 != '\0') && (*(int *)(lVar10 + 0x4c) == iVar8)) goto LAB_006aa97a;
      if ((*(int *)(lVar10 + 0x48) == iVar8) || (*(int *)(lVar10 + 0xf0) != iVar8))
      goto LAB_006aa230;
      if (bVar19 == 0) {
        lVar12 = *param_8;
        lVar3 = *(long *)(lVar12 + -0x18);
        uVar11 = lVar3 + 1;
        if ((*(ulong *)(lVar12 + -0x10) < uVar11) || (0 < *(int *)(lVar12 + -8))) {
          FUN_00638bc0(param_8,uVar11);
        }
        *(undefined1 *)(*param_8 + *(long *)(*param_8 + -0x18)) = 0x30;
        puVar14 = (undefined1 *)*param_8;
        if (puVar14 != &DAT_009452b8) {
          *(undefined4 *)(puVar14 + -8) = 0;
          *(ulong *)(puVar14 + -0x18) = uVar11;
          puVar14[lVar3 + 1] = 0;
        }
      }
      local_98 = local_98 + 1;
      if ((ulong)local_68[2] < (ulong)local_68[3]) {
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        local_68[2] = local_68[2] + 4;
LAB_006aaa35:
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar9 = *(int *)local_68[2];
        }
        else {
          iVar9 = (**(code **)(*local_68 + 0x48))();
        }
        bVar17 = false;
        if (iVar9 == -1) {
          local_68 = (long *)0x0;
          bVar17 = true;
        }
      }
      else {
        (**(code **)(*local_68 + 0x50))();
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        if (local_68 != (long *)0x0) goto LAB_006aaa35;
        bVar17 = true;
      }
      bVar15 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar6 = (int)local_70 == -1;
      if (bVar15) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar9 = *(int *)local_78[2];
        }
        else {
          iVar9 = (**(code **)(*local_78 + 0x48))();
        }
        bVar6 = false;
        if (iVar9 == -1) {
          local_78 = (long *)0x0;
          bVar6 = bVar15;
        }
      }
      if (bVar17 == bVar6) goto code_r0x006aaa76;
      iVar8 = (int)local_60;
      if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
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
      cVar13 = *(char *)(lVar10 + 0x20);
      bVar19 = 1;
    } while( true );
  }
  cVar13 = *(char *)(lVar10 + 0x20);
  iVar8 = 0;
  bVar19 = 0;
  local_98 = 0;
  goto LAB_006aa230;
code_r0x006aa787:
  iVar8 = (int)local_60;
  if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
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
  bVar18 = *(byte *)(lVar10 + 0x20);
  if ((((*(int *)(lVar10 + 0xe4) != iVar8) &&
       (bVar19 = bVar20, local_93 = bVar20, *(int *)(lVar10 + 0xe0) != iVar8)) ||
      ((bVar18 != 0 && (bVar19 = bVar18, local_93 = bVar18, *(int *)(lVar10 + 0x4c) == iVar8)))) ||
     (bVar19 = bVar20, local_93 = bVar20, *(int *)(lVar10 + 0x48) == iVar8)) goto LAB_006aa4d8;
  FUN_006390c0(param_8,(*(int *)(lVar10 + 0xe4) != iVar8) * '\x02' + '+');
LAB_006aa52e:
  uVar11 = local_68[2];
  if (uVar11 < (ulong)local_68[3]) {
LAB_006aa541:
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    local_68[2] = uVar11 + 4;
  }
  else {
LAB_006aa69c:
    (**(code **)(*local_68 + 0x50))();
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    bVar18 = bVar2;
    if (local_68 == (long *)0x0) goto LAB_006aa56d;
  }
  if ((int *)local_68[2] < (int *)local_68[3]) {
    iVar8 = *(int *)local_68[2];
  }
  else {
                    /* try { // try from 006aad78 to 006aae00 has its CatchHandler @ 006aaedb */
    iVar8 = (**(code **)(*local_68 + 0x48))();
  }
  bVar18 = 0;
  if (iVar8 == -1) {
    local_68 = (long *)0x0;
    bVar18 = bVar2;
  }
LAB_006aa56d:
  bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
  bVar17 = (int)local_70 == -1;
  if (bVar6) {
    if ((int *)local_78[2] < (int *)local_78[3]) {
      iVar8 = *(int *)local_78[2];
    }
    else {
      iVar8 = (**(code **)(*local_78 + 0x48))();
    }
    bVar17 = false;
    if (iVar8 == -1) {
      local_78 = (long *)0x0;
      bVar17 = bVar6;
    }
  }
  if (bVar17 == (bool)bVar18) goto LAB_006aa59a;
  iVar8 = (int)local_60;
  if (((int)local_60 == -1) && (local_68 != (long *)0x0)) {
    if ((int *)local_68[2] < (int *)local_68[3]) {
      iVar8 = *(int *)local_68[2];
    }
    else {
                    /* try { // try from 006aae3c to 006aae50 has its CatchHandler @ 006aaedb */
      iVar8 = (**(code **)(*local_68 + 0x48))();
    }
    if (iVar8 == -1) {
      local_68 = (long *)0x0;
    }
  }
  bVar18 = *(byte *)(lVar10 + 0x20);
  goto LAB_006aa4d8;
LAB_006aa59a:
  puVar14 = local_48;
  if (*(long *)(local_48 + -0x18) == 0) goto LAB_006aa5f1;
  if ((local_92 == 0) && (local_93 == 0)) goto LAB_006aa5b6;
  goto LAB_006aa5d1;
code_r0x006aaa76:
  cVar13 = *(char *)(lVar10 + 0x20);
  bVar19 = 1;
  cVar5 = '\x01';
LAB_006aa230:
  local_48 = &DAT_009452b8;
  if (cVar13 != '\0') {
LAB_006aa97a:
    local_48 = &DAT_009452b8;
    FUN_00638bc0(&local_48,0x20);
  }
  bVar2 = *(byte *)(lVar10 + 0x148);
  if (bVar2 == 0) {
    if (cVar5 == '\0') {
      local_93 = 0;
      local_92 = 0;
LAB_006aa280:
      if (9 < iVar8 - 0x30U) goto LAB_006aa3a0;
      lVar12 = *param_8;
      lVar3 = *(long *)(lVar12 + -0x18);
      uVar11 = lVar3 + 1;
      if ((*(ulong *)(lVar12 + -0x10) < uVar11) || (0 < *(int *)(lVar12 + -8))) {
                    /* try { // try from 006aa2b8 to 006aa98f has its CatchHandler @ 006aaedb */
        FUN_00638bc0(param_8,uVar11);
      }
      bVar19 = 1;
      *(char *)(*param_8 + *(long *)(*param_8 + -0x18)) = (char)(iVar8 - 0x30U) + '0';
      puVar14 = (undefined1 *)*param_8;
      if (puVar14 != &DAT_009452b8) {
        *(undefined4 *)(puVar14 + -8) = 0;
        *(ulong *)(puVar14 + -0x18) = uVar11;
        puVar14[lVar3 + 1] = 0;
      }
LAB_006aa2e0:
      uVar11 = local_68[2];
      if ((ulong)local_68[3] <= uVar11) goto LAB_006aa478;
LAB_006aa2f3:
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      local_68[2] = uVar11 + 4;
      do {
        if ((int *)local_68[2] < (int *)local_68[3]) {
          iVar8 = *(int *)local_68[2];
        }
        else {
          iVar8 = (**(code **)(*local_68 + 0x48))();
        }
        bVar17 = false;
        if (iVar8 == -1) {
          local_68 = (long *)0x0;
          bVar17 = true;
        }
        while( true ) {
          bVar15 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar6 = (int)local_70 == -1;
          if (bVar15) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar8 = *(int *)local_78[2];
            }
            else {
              iVar8 = (**(code **)(*local_78 + 0x48))();
            }
            bVar6 = false;
            if (iVar8 == -1) {
              local_78 = (long *)0x0;
              bVar6 = bVar15;
            }
          }
          if (bVar17 == bVar6) goto LAB_006aa59a;
          iVar8 = (int)local_60;
          if ((local_68 == (long *)0x0) || ((int)local_60 != -1)) goto LAB_006aa280;
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar8 = *(int *)local_68[2];
          }
          else {
            iVar8 = (**(code **)(*local_68 + 0x48))();
          }
          if (iVar8 != -1) goto LAB_006aa280;
          local_68 = (long *)0x0;
LAB_006aa3a0:
          if ((*(int *)(lVar10 + 0x48) == iVar8) && (local_92 == 0 && local_93 == 0)) {
            FUN_006390c0(param_8,0x2e);
            local_93 = 0;
            local_92 = 1;
            goto LAB_006aa2e0;
          }
          if (((*(int *)(lVar10 + 0x128) != iVar8) && (*(int *)(lVar10 + 0x140) != iVar8)) ||
             (bVar19 = bVar19 & (local_93 ^ 1), bVar19 == 0)) goto LAB_006aa59a;
          FUN_006390c0(param_8,0x65);
          FUN_0069d900(local_68);
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          cVar5 = FUN_006aa060(&local_68,&local_78);
          if (cVar5 != '\0') goto LAB_006aae09;
          iVar8 = FUN_006aa130(&local_68);
          local_93 = bVar19;
          if (*(int *)(lVar10 + 0xe4) == iVar8) {
            uVar16 = 0x2b;
          }
          else {
            uVar16 = 0x2d;
            if (*(int *)(lVar10 + 0xe0) != iVar8) goto LAB_006aa280;
          }
          FUN_006390c0(param_8,uVar16);
          uVar11 = local_68[2];
          if (uVar11 < (ulong)local_68[3]) goto LAB_006aa2f3;
LAB_006aa478:
          (**(code **)(*local_68 + 0x50))();
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          if (local_68 != (long *)0x0) break;
          bVar17 = true;
        }
      } while( true );
    }
LAB_006aabe2:
    puVar14 = local_48;
    if (*(long *)(local_48 + -0x18) == 0) goto LAB_006aa5f1;
LAB_006aa5b6:
    FUN_006390c0(&local_48,(int)(char)local_98);
  }
  else {
    if (cVar5 != '\0') goto LAB_006aabe2;
    local_93 = 0;
    bVar18 = *(byte *)(lVar10 + 0x20);
    local_92 = 0;
LAB_006aa4d8:
    if ((bVar18 != 0) && (*(int *)(lVar10 + 0x4c) == iVar8)) {
      if (local_92 != 0 || local_93 != 0) {
LAB_006aadd6:
        lVar12 = *(long *)(local_48 + -0x18);
        goto joined_r0x006aade7;
      }
      if (local_98 != 0) {
        FUN_006390c0(&local_48,(int)(char)local_98);
        local_93 = 0;
        local_98 = 0;
        local_92 = 0;
        goto LAB_006aa52e;
      }
      puVar14 = (undefined1 *)*param_8;
      if (*(int *)(*param_8 + -8) < 1) {
        if (puVar14 != &DAT_009452b8) {
          *(undefined4 *)(puVar14 + -8) = 0;
          *(undefined8 *)(puVar14 + -0x18) = 0;
          *puVar14 = 0;
        }
      }
      else {
        if ((undefined8 *)(puVar14 + -0x18) != &DAT_009452a0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            piVar1 = (int *)(puVar14 + -8);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(puVar14 + -8);
            *(int *)(puVar14 + -8) = iVar8 + -1;
          }
          if (iVar8 < 1) {
            thunk_FUN_007104f0(puVar14 + -0x18,&local_49);
          }
        }
        *param_8 = (long)&DAT_009452b8;
      }
      goto LAB_006aabe2;
    }
    if (*(int *)(lVar10 + 0x48) == iVar8) {
      if (local_93 != 0 || local_92 != 0) goto LAB_006aadd6;
      if (*(long *)(local_48 + -0x18) != 0) {
        FUN_006390c0(&local_48,(int)(char)local_98);
      }
      FUN_006390c0(param_8,0x2e);
      uVar11 = local_68[2];
      local_93 = 0;
      local_92 = bVar2;
      if (uVar11 < (ulong)local_68[3]) goto LAB_006aa541;
      goto LAB_006aa69c;
    }
    lVar12 = thunk_FUN_00756540(lVar10 + 0xf0,iVar8,10);
    if (lVar12 != 0) {
      FUN_006390c0(param_8,(int)(char)((char)(lVar12 - (lVar10 + 0xf0) >> 2) + '0'));
      local_98 = local_98 + 1;
      bVar19 = bVar2;
      goto LAB_006aa52e;
    }
    if ((*(int *)(lVar10 + 0x128) != iVar8) && (*(int *)(lVar10 + 0x140) != iVar8))
    goto LAB_006aa59a;
    bVar20 = bVar19 & (local_93 ^ 1);
    if (bVar20 == 0) goto LAB_006aa59a;
    if ((*(long *)(local_48 + -0x18) != 0) && (local_92 == 0)) {
      FUN_006390c0(&local_48,(int)(char)local_98);
    }
    FUN_006390c0(param_8,0x65);
    if ((ulong)local_68[2] < (ulong)local_68[3]) {
      local_68[2] = local_68[2] + 4;
    }
    else {
                    /* try { // try from 006aaaaf to 006aab14 has its CatchHandler @ 006aaedb */
      (**(code **)(*local_68 + 0x50))();
    }
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    cVar5 = FUN_006aa060(&local_68,&local_78);
    if (cVar5 == '\0') goto code_r0x006aa787;
LAB_006aae09:
    lVar12 = *(long *)(local_48 + -0x18);
joined_r0x006aade7:
    puVar14 = local_48;
    if (lVar12 == 0) goto LAB_006aa5f1;
  }
LAB_006aa5d1:
  puVar14 = local_48;
  local_b8 = &local_48;
  cVar5 = FUN_006c6980(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),local_b8);
  if (cVar5 == '\0') {
    *param_7 = 4;
  }
LAB_006aa5f1:
  plVar4 = local_68;
  if ((undefined8 *)(puVar14 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(puVar14 + -8);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar8 = *(int *)(puVar14 + -8);
      *(int *)(puVar14 + -8) = iVar8 + -1;
    }
    if (iVar8 < 1) {
      thunk_FUN_007104f0(puVar14 + -0x18,&local_49);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar4;
}

