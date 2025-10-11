
/* WARNING: Removing unreachable block (ram,0x0068026b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_00680210(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
                   long param_6)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  undefined1 *puVar13;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined1 local_78 [12];
  uint local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  char local_55;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x680258;
  local_54 = param_5;
  local_50 = param_1;
  lVar5 = FUN_0067fd80(&local_45,param_4 + 0xd0);
  uVar11 = *(uint *)(param_4 + 0x18);
  puVar7 = auStack_a8;
  puVar9 = auStack_a8;
  puVar10 = auStack_a8;
  local_6c = uVar11 & 0x4a;
  local_68 = auStack_a0;
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar11);
  local_55 = local_6c != 0x40 && local_6c != 8;
  local_44 = FUN_0067fc00(local_78,param_6,lVar5 + 0x4a,uVar11,local_55);
  puVar13 = local_68 + (0x28 - local_44);
  uVar11 = (uint)local_60;
  if (*(char *)(lVar5 + 0x20) != '\0') {
    uVar6 = (long)(local_44 + 1) * 2 + 0x17;
    puVar13 = auStack_a8;
    while (puVar9 != auStack_a8 + -(uVar6 & 0xfffffffffffff000)) {
      puVar10 = puVar13 + -0x1000;
      *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      puVar9 = puVar13 + -0x1000;
      puVar13 = puVar13 + -0x1000;
    }
    uVar6 = (ulong)((uint)uVar6 & 0xff0);
    lVar12 = -uVar6;
    puVar7 = puVar10 + lVar12;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x49);
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    *(int **)(puVar10 + lVar12 + -8) = &local_44;
    *(undefined1 **)(puVar10 + lVar12 + -0x10) = local_68 + (0x28 - local_44);
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,(uint)local_60);
    *(undefined8 *)(puVar10 + lVar12 + -0x18) = 0x680464;
    local_60 = (undefined1 *)(((ulong)(puVar10 + lVar12 + 0xf) & 0xfffffffffffffff0) + 2);
    FUN_0067e7d0(local_50,uVar3,uVar4,(int)cVar1,param_4);
    puVar13 = local_60;
    uVar11 = (uint)local_68;
  }
  puVar10 = puVar13;
  if (((local_55 == '\0') && ((uVar11 & 0x200) != 0)) && (param_6 != 0)) {
    if (local_6c == 0x40) {
      puVar10 = puVar13 + -1;
      local_44 = local_44 + 1;
      *puVar10 = *(undefined1 *)(lVar5 + 0x4e);
    }
    else {
      puVar10 = puVar13 + -2;
      local_44 = local_44 + 2;
      puVar13[-1] = *(undefined1 *)(lVar5 + 0x4c + (ulong)(uVar11 >> 0xe & 1));
      *puVar10 = *(undefined1 *)(lVar5 + 0x4e);
    }
  }
  lVar5 = *(long *)(param_4 + 0x10);
  lVar12 = (long)local_44;
  puVar13 = puVar10;
  if (lVar12 < lVar5) {
    for (puVar8 = puVar7; puVar8 != puVar7 + -(lVar5 + 0x17U & 0xfffffffffffff000);
        puVar8 = puVar8 + -0x1000) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    uVar6 = (ulong)((uint)(lVar5 + 0x17U) & 0xff0);
    lVar12 = -uVar6;
    puVar7 = puVar8 + lVar12;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    *(int **)(puVar8 + lVar12 + -0x10) = &local_44;
    puVar13 = (undefined1 *)((ulong)(puVar8 + lVar12 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar8 + lVar12 + -0x18) = 0x6803cf;
    FUN_0067fbc0(local_50,(int)(char)local_54,lVar5,param_4,puVar13,puVar10);
    lVar12 = (long)local_44;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar7 + -8) = 0x680328;
    (*pcVar2)(param_2,puVar13,lVar12);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_006804fe;
    FUN_00771f60();
  }
  return param_2;
}

