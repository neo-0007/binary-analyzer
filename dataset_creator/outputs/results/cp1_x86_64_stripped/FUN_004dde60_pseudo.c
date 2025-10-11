
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dde60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long in_FS_OFFSET;
  int local_10b0;
  int local_10a0;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined1 local_1048 [128];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined1 local_e88 [64];
  int local_e48 [156];
  int local_bd8 [228];
  undefined1 local_848 [192];
  undefined1 local_788 [64];
  undefined1 local_748 [256];
  undefined1 local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004db870(local_e48,param_2,5);
  FUN_004db870(local_bd8,param_4,3);
  FUN_004db9c0(local_848,param_3);
  FUN_004dc770(local_1048,param_3);
  FUN_004db9c0(&local_f48,local_1048);
  FUN_005cd6f0(&local_1088,&local_fc8,local_788);
  local_fc8 = local_1088;
  uStack_fc0 = uStack_1080;
  local_fb8 = local_1078;
  uStack_fb0 = uStack_1070;
  local_fa8 = local_1068;
  uStack_fa0 = uStack_1060;
  local_f98 = local_1058;
  uStack_f90 = uStack_1050;
  FUN_004dc330(local_1048,local_848,0);
  FUN_004db9c0(local_748,local_1048);
  puVar14 = local_648;
  do {
    FUN_005cd6f0(&local_1088,&local_fc8,local_e88);
    local_fc8 = local_1088;
    uStack_fc0 = uStack_1080;
    local_fb8 = local_1078;
    uStack_fb0 = uStack_1070;
    local_fa8 = local_1068;
    uStack_fa0 = uStack_1060;
    local_f98 = local_1058;
    uStack_f90 = uStack_1050;
    FUN_004dc330(local_1048,&local_f48,0);
    puVar15 = puVar14 + 0x100;
    FUN_004db9c0(puVar14,local_1048);
    puVar14 = puVar15;
  } while (puVar15 != local_48);
  FUN_004dd920(local_1048);
  FUN_004227b0(&local_f48,0x100);
  uVar10 = _UNK_007ebb18;
  uVar9 = _DAT_007ebb10;
  uVar8 = _UNK_007ebb08;
  uVar7 = _DAT_007ebb00;
  uVar6 = _UNK_007ebaf8;
  uVar5 = _DAT_007ebaf0;
  uVar4 = _UNK_007ebae8;
  if (local_bd8[0] < 0) {
    *param_1 = _DAT_007ebae0;
    param_1[1] = uVar4;
    uVar11 = _UNK_007ebb28;
    uVar4 = _DAT_007ebb20;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar6 = _UNK_007ebb38;
    uVar5 = _DAT_007ebb30;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    uVar8 = _UNK_007ebb48;
    uVar7 = _DAT_007ebb40;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    uVar10 = _UNK_007ebb58;
    uVar9 = _DAT_007ebb50;
    param_1[8] = uVar4;
    param_1[9] = uVar11;
    uVar11 = _UNK_007ebb68;
    uVar4 = _DAT_007ebb60;
    param_1[10] = uVar5;
    param_1[0xb] = uVar6;
    uVar6 = _UNK_007ebb78;
    uVar5 = _DAT_007ebb70;
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar8;
    uVar8 = _UNK_007ebb88;
    uVar7 = _DAT_007ebb80;
    param_1[0xe] = uVar9;
    param_1[0xf] = uVar10;
    uVar10 = _UNK_007ebb98;
    uVar9 = _DAT_007ebb90;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar11;
    uVar11 = _UNK_007ebba8;
    uVar4 = _DAT_007ebba0;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar6;
    uVar6 = _UNK_007ebbb8;
    uVar5 = _DAT_007ebbb0;
    param_1[0x14] = uVar7;
    param_1[0x15] = uVar8;
    uVar8 = _UNK_007ebbc8;
    uVar7 = _DAT_007ebbc0;
    param_1[0x16] = uVar9;
    param_1[0x17] = uVar10;
    uVar10 = _UNK_007ebbd8;
    uVar9 = _DAT_007ebbd0;
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar11;
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar6;
    param_1[0x1c] = uVar7;
    param_1[0x1d] = uVar8;
    param_1[0x1e] = uVar9;
    param_1[0x1f] = uVar10;
  }
  else {
    iVar13 = local_bd8[0];
    if (local_e48[0] < local_bd8[0]) {
      FUN_004db700(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      local_10a0 = 1;
      local_10b0 = 0;
    }
    else if (local_e48[0] == local_bd8[0]) {
      FUN_004db700(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      FUN_004dc330(param_1,PTR_DAT_0093bf20 + (long)(local_e48[1] >> 1) * 0xc0,local_bd8[0]);
      local_10a0 = 1;
      local_10b0 = 1;
    }
    else {
      FUN_004db670(param_1,PTR_DAT_0093bf20 + (long)(local_e48[1] >> 1) * 0xc0);
      local_10a0 = 0;
      local_10b0 = 1;
      iVar13 = local_e48[0];
    }
    while (iVar13 != 0) {
      while( true ) {
        iVar13 = iVar13 + -1;
        iVar1 = local_bd8[(long)local_10a0 * 2];
        iVar2 = local_e48[(long)local_10b0 * 2];
        FUN_004dbe80(param_1,param_1,iVar13 != 0 && (iVar1 != iVar13 && iVar2 != iVar13));
        if (iVar1 == iVar13) {
          iVar1 = local_bd8[(long)local_10a0 * 2 + 1];
          bVar3 = iVar13 != 0 && iVar2 != iVar13;
          if (iVar1 < 1) {
            lVar12 = (long)(-iVar1 >> 1) * 0x100;
            FUN_005cd6f0(&local_f48,param_1 + 0x10,local_788 + lVar12);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            FUN_004dba30(param_1,local_848 + lVar12,bVar3);
          }
          else {
            lVar12 = (long)(iVar1 >> 1) * 0x100;
            FUN_005cd6f0(&local_f48,param_1 + 0x10,local_788 + lVar12);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            FUN_004dc330(param_1,local_848 + lVar12,bVar3);
          }
          local_10a0 = local_10a0 + 1;
        }
        if (iVar2 != iVar13) break;
        iVar1 = local_e48[(long)local_10b0 * 2 + 1];
        if (iVar1 < 1) {
          FUN_004dba30(param_1,PTR_DAT_0093bf20 + (long)(-iVar1 >> 1) * 0xc0,iVar13);
        }
        else {
          FUN_004dc330(param_1,PTR_DAT_0093bf20 + (long)(iVar1 >> 1) * 0xc0,iVar13);
        }
        local_10b0 = local_10b0 + 1;
        if (iVar13 == 0) goto LAB_004de1e9;
      }
    }
LAB_004de1e9:
    FUN_004227b0(local_bd8,0x390);
    FUN_004227b0(local_e48,0x268);
    FUN_004227b0(local_848,0x800);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

