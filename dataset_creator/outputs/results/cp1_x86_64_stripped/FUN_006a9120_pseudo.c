
/* WARNING: Removing unreachable block (ram,0x006a917b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_006a9120(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
                   long param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [160];
  undefined8 local_80;
  uint local_74;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_49;
  undefined1 local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x6a9168;
  local_58 = param_1;
  local_50 = param_5;
  lVar6 = FUN_006a8560(&local_45,param_4 + 0xd0);
  uVar12 = *(uint *)(param_4 + 0x18);
  local_60 = (undefined4 *)(lVar6 + 0x50);
  puVar8 = auStack_128;
  puVar10 = auStack_128;
  puVar9 = auStack_128;
  local_74 = uVar12 & 0x4a;
  local_70 = auStack_120;
  local_68 = (undefined4 *)CONCAT44(local_68._4_4_,uVar12);
  local_49 = local_74 != 0x40 && local_74 != 8;
  local_44 = FUN_006a84a0(&local_80,param_6,local_60,uVar12,local_49);
  puVar15 = (undefined4 *)(local_70 + (long)(0x28 - local_44) * 4);
  puVar13 = local_60;
  uVar12 = (uint)local_68;
  if (*(char *)(lVar6 + 0x20) != '\0') {
    uVar7 = (long)(local_44 + 1) * 8 + 0x17;
    puVar5 = auStack_128;
    while (puVar10 != auStack_128 + -(uVar7 & 0xfffffffffffff000)) {
      puVar9 = puVar5 + -0x1000;
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      puVar10 = puVar5 + -0x1000;
      puVar5 = puVar5 + -0x1000;
    }
    uVar7 = (ulong)((uint)uVar7 & 0xff0);
    lVar14 = -uVar7;
    puVar8 = puVar9 + lVar14;
    if (uVar7 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    uVar1 = *(undefined4 *)(lVar6 + 0x4c);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    *(int **)(puVar9 + lVar14 + -8) = &local_44;
    *(undefined1 **)(puVar9 + lVar14 + -0x10) = local_70 + (long)(0x28 - local_44) * 4;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,(uint)local_68);
    local_68 = local_60;
    *(undefined8 *)(puVar9 + lVar14 + -0x18) = 0x6a9386;
    local_60 = (undefined4 *)(((ulong)(puVar9 + lVar14 + 0xf) & 0xfffffffffffffff0) + 8);
    FUN_006a7030(local_58,uVar3,uVar4,uVar1,param_4);
    puVar15 = local_60;
    puVar13 = local_68;
    uVar12 = (uint)local_70;
  }
  puVar11 = puVar15;
  if (((local_49 == '\0') && ((uVar12 & 0x200) != 0)) && (param_6 != 0)) {
    if (local_74 == 0x40) {
      puVar11 = puVar15 + -1;
      local_44 = local_44 + 1;
      *puVar11 = *(undefined4 *)(lVar6 + 0x60);
    }
    else {
      puVar11 = puVar15 + -2;
      local_44 = local_44 + 2;
      puVar15[-1] = puVar13[(ulong)(uVar12 >> 0xe & 1) + 2];
      *puVar11 = *(undefined4 *)(lVar6 + 0x60);
    }
  }
  lVar6 = *(long *)(param_4 + 0x10);
  lVar14 = (long)local_44;
  puVar15 = puVar11;
  if (lVar14 < lVar6) {
    uVar7 = lVar6 * 4 + 0x17;
    for (puVar9 = puVar8; puVar9 != puVar8 + -(uVar7 & 0xfffffffffffff000);
        puVar9 = puVar9 + -0x1000) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    uVar7 = (ulong)((uint)uVar7 & 0xff0);
    lVar14 = -uVar7;
    puVar8 = puVar9 + lVar14;
    if (uVar7 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    *(int **)(puVar9 + lVar14 + -0x10) = &local_44;
    puVar15 = (undefined4 *)((ulong)(puVar9 + lVar14 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar9 + lVar14 + -0x18) = 0x6a92ee;
    FUN_006a83a0(local_58,local_50,lVar6,param_4,puVar15,puVar11);
    lVar14 = (long)local_44;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar8 + -8) = 0x6a9248;
    (*pcVar2)(param_2,puVar15,lVar14);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_006a941d;
    FUN_00771f60();
  }
  return param_2;
}

