
undefined1  [16]
FUN_006a7080(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
            undefined8 *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  int *piVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  ulong local_b0;
  undefined4 *local_90;
  ulong local_88;
  undefined1 local_59;
  undefined *local_58;
  undefined *local_50;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)FUN_006a4ba0(param_4 + 0xd0);
  lVar7 = FUN_00625ba0(&DAT_00945548);
  plVar13 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + lVar7 * 8);
  lVar9 = *plVar13;
  if (lVar9 == 0) {
                    /* try { // try from 006a759d to 006a75a1 has its CatchHandler @ 006a775a */
    puVar10 = (undefined8 *)FUN_006c31f0(0xa0);
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR_FUN_00933f78;
    *(undefined1 *)(puVar10 + 4) = 0;
    *(undefined8 *)((long)puVar10 + 0x24) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
                    /* try { // try from 006a7625 to 006a7629 has its CatchHandler @ 006a7751 */
    FUN_006a58d0(puVar10,param_4 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar7);
    lVar9 = *plVar13;
  }
  piVar2 = (int *)*param_6;
  piVar17 = piVar2;
  if (*piVar2 == *(int *)(lVar9 + 0x6c)) {
    local_90 = *(undefined4 **)(lVar9 + 0x50);
    local_44 = *(undefined1 (*) [4])(lVar9 + 0x68);
    local_b0 = *(ulong *)(lVar9 + 0x58);
    if (*(long *)(piVar2 + -6) != 0) {
      piVar17 = piVar2 + 1;
    }
  }
  else {
    local_44 = *(undefined1 (*) [4])(lVar9 + 100);
    local_90 = *(undefined4 **)(lVar9 + 0x40);
    local_b0 = *(ulong *)(lVar9 + 0x48);
  }
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,0x800,piVar17,piVar17 + *(long *)(piVar2 + -6));
  lVar7 = lVar7 - (long)piVar17 >> 2;
  if (lVar7 != 0) {
    local_58 = &DAT_009452d8;
                    /* try { // try from 006a71ec to 006a72b2 has its CatchHandler @ 006a772d */
    FUN_0063c070(&local_58,lVar7 * 2);
    iVar5 = *(int *)(lVar9 + 0x60);
    lVar12 = lVar7 - iVar5;
    if (0 < lVar12) {
      if (iVar5 < 0) {
        lVar12 = lVar7;
      }
      if (*(long *)(lVar9 + 0x18) == 0) {
                    /* try { // try from 006a7659 to 006a7723 has its CatchHandler @ 006a772d */
        FUN_0063baf0(&local_58,piVar17,lVar12);
      }
      else {
        FUN_0063b880(&local_58,0,*(undefined8 *)(local_58 + -0x18),lVar12 * 2,0);
        uVar3 = *(undefined8 *)(lVar9 + 0x18);
        uVar4 = *(undefined8 *)(lVar9 + 0x10);
        uVar1 = *(undefined4 *)(lVar9 + 0x28);
        if (-1 < *(int *)(local_58 + -8)) {
          FUN_0063b560(&local_58);
        }
        lVar8 = FUN_006a6de0(local_58,uVar1,uVar4,uVar3,piVar17,piVar17 + lVar12);
        if (-1 < *(int *)(local_58 + -8)) {
          FUN_0063b560(&local_58);
        }
        uVar14 = lVar8 - (long)local_58 >> 2;
        if (*(ulong *)(local_58 + -0x18) < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase",uVar14);
        }
        FUN_0063b2f0(&local_58,uVar14,*(ulong *)(local_58 + -0x18) - uVar14,0);
      }
      iVar5 = *(int *)(lVar9 + 0x60);
    }
    if (0 < iVar5) {
                    /* try { // try from 006a753f to 006a755c has its CatchHandler @ 006a772d */
      FUN_0063c590(&local_58,*(undefined4 *)(lVar9 + 0x24));
      if (lVar12 < 0) {
        FUN_0063c460(&local_58,-lVar12,*(undefined4 *)(lVar9 + 0x70));
        FUN_0063c2e0(&local_58,piVar17,lVar7);
      }
      else {
        FUN_0063c2e0(&local_58,piVar17 + lVar12,(long)*(int *)(lVar9 + 0x60));
      }
    }
    local_88 = local_b0 + *(long *)(local_58 + -0x18);
    uVar15 = *(uint *)(param_4 + 0x18) & 0xb0;
    if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
      local_88 = local_88 + *(long *)(lVar9 + 0x38);
    }
    local_50 = &DAT_009452d8;
                    /* try { // try from 006a7310 to 006a7517 has its CatchHandler @ 006a7724 */
    FUN_0063c070(&local_50,local_88 * 2);
    uVar14 = *(ulong *)(param_4 + 0x10);
    plVar13 = (long *)local_44;
    bVar11 = uVar15 == 0x10 && local_88 < uVar14;
    do {
      switch((char)*plVar13) {
      case '\0':
        if (bVar11) {
LAB_006a73b3:
          FUN_0063c460(&local_50,uVar14 - local_88,param_5);
        }
        break;
      case '\x01':
        if (bVar11) goto LAB_006a73b3;
                    /* try { // try from 006a756f to 006a758e has its CatchHandler @ 006a7724 */
        FUN_0063c590(&local_50,param_5);
        break;
      case '\x02':
        if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
          FUN_0063c2e0(&local_50,*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x38));
        }
        break;
      case '\x03':
        if (local_b0 != 0) {
          FUN_0063c590(&local_50,*local_90);
        }
        break;
      case '\x04':
        FUN_0063c140(&local_50,&local_58);
      }
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar13 != local_40);
    if (local_b0 < 2) {
      uVar18 = *(ulong *)(local_50 + -0x18);
    }
    else {
      FUN_0063c2e0(&local_50,local_90 + 1,local_b0 - 1);
      uVar18 = *(ulong *)(local_50 + -0x18);
    }
    if (uVar18 < uVar14) {
      if (uVar15 == 0x20) {
        FUN_0063c460(&local_50,uVar14 - uVar18,param_5);
        uVar18 = uVar14;
      }
      else {
        FUN_0063b880(&local_50,0,0,uVar14 - uVar18,param_5);
        uVar18 = uVar14;
      }
    }
    bVar16 = (byte)param_3;
    if ((bVar16 == 0) &&
       (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_50,(long)(int)uVar18),
       (int)uVar18 != lVar9)) {
      bVar16 = 1;
    }
    param_3 = (ulong)bVar16 | param_3 & 0xffffffffffffff00;
    if ((undefined8 *)(local_50 + -0x18) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar2 = (int *)(local_50 + -8);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(local_50 + -8);
        *(int *)(local_50 + -8) = iVar5 + -1;
      }
      if (iVar5 < 1) {
        thunk_FUN_007104f0(local_50 + -0x18,&local_59);
      }
    }
    if ((undefined8 *)(local_58 + -0x18) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar2 = (int *)(local_58 + -8);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(local_58 + -8);
        *(int *)(local_58 + -8) = iVar5 + -1;
      }
      if (iVar5 < 1) {
        thunk_FUN_007104f0(local_58 + -0x18,&local_50);
      }
    }
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = param_2;
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

