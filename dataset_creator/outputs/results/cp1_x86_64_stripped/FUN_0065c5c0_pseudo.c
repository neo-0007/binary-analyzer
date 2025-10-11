
undefined1  [16]
FUN_0065c5c0(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
            undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  undefined4 **ppuVar15;
  undefined4 *puVar16;
  int *piVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  ulong local_f8;
  undefined4 *local_e0;
  undefined1 local_8c [4];
  undefined4 *local_88;
  ulong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 *local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)FUN_006a4ba0(param_4 + 0xd0);
  lVar6 = FUN_00625ba0(&DAT_009453d0);
  plVar2 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + lVar6 * 8);
  lVar7 = *plVar2;
  if (lVar7 == 0) {
                    /* try { // try from 0065cbf5 to 0065cbf9 has its CatchHandler @ 0065cdd9 */
    puVar8 = (undefined8 *)FUN_006c31f0(0xa0);
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_00933f78;
    *(undefined1 *)(puVar8 + 4) = 0;
    *(undefined8 *)((long)puVar8 + 0x24) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    *(undefined4 *)(puVar8 + 0xd) = 0;
    *(undefined1 *)(puVar8 + 0x13) = 0;
                    /* try { // try from 0065cc7d to 0065cc81 has its CatchHandler @ 0065cdd0 */
    FUN_006a58d0(puVar8,param_4 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar6);
    lVar7 = *plVar2;
  }
  piVar17 = (int *)*param_6;
  if (*piVar17 == *(int *)(lVar7 + 0x6c)) {
    local_8c = *(undefined1 (*) [4])(lVar7 + 0x68);
    local_e0 = *(undefined4 **)(lVar7 + 0x50);
    local_f8 = *(ulong *)(lVar7 + 0x58);
    if (param_6[1] != 0) {
      piVar17 = piVar17 + 1;
    }
  }
  else {
    local_8c = *(undefined1 (*) [4])(lVar7 + 100);
    local_e0 = *(undefined4 **)(lVar7 + 0x40);
    local_f8 = *(ulong *)(lVar7 + 0x48);
  }
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,0x800,piVar17,piVar17 + param_6[1]);
  uVar18 = lVar6 - (long)piVar17 >> 2;
  if (uVar18 != 0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = &local_78;
                    /* try { // try from 0065c753 to 0065c79a has its CatchHandler @ 0065ce0e */
    FUN_006b5de0(&local_88,uVar18 * 2);
    iVar4 = *(int *)(lVar7 + 0x60);
    uVar14 = uVar18 - (long)iVar4;
    if (0 < (long)uVar14) {
      if (iVar4 < 0) {
        uVar14 = uVar18;
      }
      if (*(long *)(lVar7 + 0x18) == 0) {
                    /* try { // try from 0065ccc0 to 0065ccf8 has its CatchHandler @ 0065ce0e */
        FUN_006b6740(&local_88,0,local_80,piVar17,uVar14);
        iVar4 = *(int *)(lVar7 + 0x60);
      }
      else {
        FUN_006b6430(&local_88,0,local_80,uVar14 * 2,0);
        puVar16 = local_88;
        lVar6 = FUN_006a6de0(local_88,*(undefined4 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x10),
                             *(undefined8 *)(lVar7 + 0x18),piVar17,piVar17 + uVar14);
        uVar11 = lVar6 - (long)puVar16 >> 2;
        if (local_80 < uVar11) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065cdcb to 0065cdcf has its CatchHandler @ 0065ce0e */
          FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase");
        }
        *(undefined4 *)((long)local_88 + (lVar6 - (long)puVar16)) = 0;
        iVar4 = *(int *)(lVar7 + 0x60);
        local_80 = uVar11;
      }
    }
    uVar11 = local_80;
    if (0 < iVar4) {
      uVar3 = *(undefined4 *)(lVar7 + 0x24);
      uVar1 = local_80 + 1;
      uVar12 = 3;
      if (local_88 != &local_78) {
        uVar12 = CONCAT44(uStack_74,local_78);
      }
      if (uVar12 < uVar1) {
                    /* try { // try from 0065cd5a to 0065cd5e has its CatchHandler @ 0065ce0e */
        FUN_006b5810(&local_88,local_80,0,0,1);
      }
      local_88[uVar11] = uVar3;
      local_88[uVar11 + 1] = 0;
      local_80 = uVar1;
      if ((long)uVar14 < 0) {
        FUN_006b6430(&local_88,uVar1,0,-uVar14,*(undefined4 *)(lVar7 + 0x70));
        if (0xfffffffffffffff - local_80 < uVar18) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065cd9e to 0065cdae has its CatchHandler @ 0065ce0e */
          FUN_00403998("basic_string::append");
        }
      }
      else {
        uVar18 = (ulong)*(int *)(lVar7 + 0x60);
        piVar17 = piVar17 + uVar14;
        if (0xfffffffffffffff - uVar1 < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00403998("basic_string::append",piVar17);
        }
      }
                    /* try { // try from 0065cba5 to 0065cba9 has its CatchHandler @ 0065ce0e */
      FUN_006b7280(&local_88,piVar17,uVar18);
    }
    uVar18 = local_80 + local_f8;
    uVar9 = *(uint *)(param_4 + 0x18) & 0xb0;
    if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
      uVar18 = uVar18 + *(long *)(lVar7 + 0x38);
    }
    local_60 = 0;
    local_58 = 0;
    local_68 = &local_58;
                    /* try { // try from 0065c85d to 0065cb15 has its CatchHandler @ 0065ce05 */
    FUN_006b5de0(&local_68,uVar18 * 2);
    ppuVar15 = (undefined4 **)local_8c;
    uVar14 = *(ulong *)(param_4 + 0x10);
    bVar10 = uVar9 == 0x10 && uVar18 < uVar14;
    do {
      uVar11 = local_60;
      switch(*(undefined1 *)ppuVar15) {
      case 0:
        if (bVar10) {
          FUN_006b6430(&local_68,local_60,0,uVar14 - uVar18,param_5);
        }
        break;
      case 1:
        if (bVar10) {
                    /* try { // try from 0065cbd2 to 0065cbea has its CatchHandler @ 0065ce05 */
          FUN_006b6430(&local_68,local_60,0,uVar14 - uVar18,param_5);
        }
        else {
          uVar1 = local_60 + 1;
          uVar12 = 3;
          if (local_68 != &local_58) {
            uVar12 = CONCAT44(uStack_54,local_58);
          }
          if (uVar12 < uVar1) {
                    /* try { // try from 0065cd80 to 0065cd84 has its CatchHandler @ 0065ce05 */
            FUN_006b5810(&local_68,local_60,0,0,1);
          }
          local_68[uVar11] = param_5;
          local_60 = uVar1;
          local_68[uVar11 + 1] = 0;
        }
        break;
      case 2:
        if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
          uVar11 = *(ulong *)(lVar7 + 0x38);
          puVar16 = *(undefined4 **)(lVar7 + 0x30);
          if (0xfffffffffffffff - local_60 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00403998("basic_string::append");
          }
          goto LAB_0065c9f8;
        }
        break;
      case 3:
        if (local_f8 != 0) {
          uVar3 = *local_e0;
          uVar1 = local_60 + 1;
          uVar12 = 3;
          if (local_68 != &local_58) {
            uVar12 = CONCAT44(uStack_54,local_58);
          }
          if (uVar12 < uVar1) {
                    /* try { // try from 0065cd30 to 0065cd34 has its CatchHandler @ 0065ce05 */
            FUN_006b5810(&local_68,local_60,0,0,1);
          }
          local_68[uVar11] = uVar3;
          local_60 = uVar1;
          local_68[uVar11 + 1] = 0;
        }
        break;
      case 4:
        uVar11 = local_80;
        puVar16 = local_88;
LAB_0065c9f8:
        FUN_006b7280(&local_68,puVar16,uVar11);
      }
      ppuVar15 = (undefined4 **)((long)ppuVar15 + 1);
    } while (&local_88 != ppuVar15);
    uVar18 = local_60;
    if (1 < local_f8) {
      if (0xfffffffffffffff - local_60 < local_f8 - 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065cdb6 to 0065cdba has its CatchHandler @ 0065ce05 */
        FUN_00403998("basic_string::append",local_e0 + 1);
      }
      FUN_006b7280(&local_68);
      uVar18 = local_60;
    }
    local_60 = uVar18;
    if (uVar18 < uVar14) {
      if (uVar9 == 0x20) {
        FUN_006b6430(&local_68,uVar18,0,uVar14 - uVar18,param_5);
        uVar18 = uVar14;
      }
      else {
        FUN_006b6430(&local_68,0,0,uVar14 - uVar18,param_5);
        uVar18 = uVar14;
      }
    }
    bVar13 = (byte)param_3;
    if ((bVar13 == 0) &&
       (lVar7 = (**(code **)(*param_2 + 0x60))(param_2,local_68,(long)(int)uVar18),
       (int)uVar18 != lVar7)) {
      bVar13 = 1;
    }
    param_3 = (ulong)bVar13 | param_3 & 0xffffffffffffff00;
    if (local_68 != &local_58) {
      thunk_FUN_007104f0(local_68);
    }
    if (local_88 != &local_78) {
      thunk_FUN_007104f0();
    }
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = param_2;
  return auVar19;
}

