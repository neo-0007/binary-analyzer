
/* WARNING: Removing unreachable block (ram,0x006a8deb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_006a8d90(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
                   long param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  long in_FS_OFFSET;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [160];
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x6a8dd8;
  local_70 = param_1;
  local_50 = param_5;
  lVar6 = FUN_006a8560(&local_45,param_4 + 0xd0);
  uVar14 = *(uint *)(param_4 + 0x18);
  local_58 = (undefined4 *)(lVar6 + 0x50);
  puVar10 = auStack_128;
  puVar12 = auStack_128;
  puVar11 = auStack_128;
  local_74 = uVar14 & 0x4a;
  local_68 = auStack_120;
  bVar8 = local_74 != 0x40 && local_74 != 8;
  local_4c = CONCAT31(local_4c._1_3_,bVar8);
  lVar9 = param_6;
  if ((param_6 < 1) && (lVar9 = -param_6, local_74 == 0x40 || local_74 == 8)) {
    lVar9 = param_6;
  }
  local_60 = (undefined4 *)CONCAT44(local_60._4_4_,uVar14);
  local_44 = FUN_006a84a0(&local_80,lVar9,local_58,uVar14,bVar8);
  puVar13 = (undefined4 *)(local_68 + (long)(0x28 - local_44) * 4);
  puVar15 = local_58;
  uVar14 = (uint)local_60;
  if (*(char *)(lVar6 + 0x20) != '\0') {
    uVar7 = (long)(local_44 + 1) * 8 + 0x17;
    puVar5 = auStack_128;
    while (puVar12 != auStack_128 + -(uVar7 & 0xfffffffffffff000)) {
      puVar11 = puVar5 + -0x1000;
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      puVar12 = puVar5 + -0x1000;
      puVar5 = puVar5 + -0x1000;
    }
    uVar7 = (ulong)((uint)uVar7 & 0xff0);
    lVar9 = -uVar7;
    puVar10 = puVar11 + lVar9;
    if (uVar7 != 0) {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,(uint)local_60);
    uVar1 = *(undefined4 *)(lVar6 + 0x4c);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    *(int **)(puVar11 + lVar9 + -8) = &local_44;
    *(undefined4 **)(puVar11 + lVar9 + -0x10) = puVar13;
    local_60 = local_58;
    *(undefined8 *)(puVar11 + lVar9 + -0x18) = 0x6a9049;
    local_58 = (undefined4 *)(((ulong)(puVar11 + lVar9 + 0xf) & 0xfffffffffffffff0) + 8);
    FUN_006a7030(local_70,uVar3,uVar4,uVar1,param_4);
    puVar13 = local_58;
    puVar15 = local_60;
    uVar14 = (uint)local_68;
  }
  puVar17 = puVar13;
  if ((char)local_4c == '\0') {
    if (((uVar14 & 0x200) != 0) && (param_6 != 0)) {
      if (local_74 == 0x40) {
        puVar17 = puVar13 + -1;
        local_44 = local_44 + 1;
        *puVar17 = *(undefined4 *)(lVar6 + 0x60);
      }
      else {
        puVar17 = puVar13 + -2;
        local_44 = local_44 + 2;
        puVar13[-1] = puVar15[(ulong)(uVar14 >> 0xe & 1) + 2];
        *puVar17 = *(undefined4 *)(lVar6 + 0x60);
      }
    }
LAB_006a8ebc:
    lVar9 = *(long *)(param_4 + 0x10);
    lVar16 = (long)local_44;
    puVar13 = puVar17;
    if (lVar9 <= lVar16) goto LAB_006a8ec8;
  }
  else {
    if (-1 < param_6) {
      if ((uVar14 & 0x800) != 0) {
        local_44 = local_44 + 1;
        puVar13[-1] = *(undefined4 *)(lVar6 + 0x54);
        puVar17 = puVar13 + -1;
      }
      goto LAB_006a8ebc;
    }
    puVar17 = puVar13 + -1;
    lVar16 = (long)(local_44 + 1);
    local_44 = local_44 + 1;
    *puVar17 = *(undefined4 *)(lVar6 + 0x50);
    lVar9 = *(long *)(param_4 + 0x10);
    puVar13 = puVar17;
    if (lVar9 <= lVar16) goto LAB_006a8ec8;
  }
  uVar7 = lVar9 * 4 + 0x17;
  for (puVar11 = puVar10; puVar11 != puVar10 + -(uVar7 & 0xfffffffffffff000);
      puVar11 = puVar11 + -0x1000) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar6 = -uVar7;
  puVar10 = puVar11 + lVar6;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  *(int **)(puVar11 + lVar6 + -0x10) = &local_44;
  puVar17 = (undefined4 *)((ulong)(puVar11 + lVar6 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar11 + lVar6 + -0x18) = 0x6a8fab;
  FUN_006a83a0(local_70,local_50,lVar9,param_4,puVar17,puVar13);
  lVar16 = (long)local_44;
LAB_006a8ec8:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar10 + -8) = 0x6a8ee5;
    (*pcVar2)(param_2,puVar17,lVar16);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_006a90de;
    FUN_00771f60();
  }
  return param_2;
}

