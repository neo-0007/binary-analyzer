
/* WARNING: Removing unreachable block (ram,0x006805fb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_006805a0(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
                   long param_6)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  undefined1 *puVar14;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined1 local_78 [12];
  uint local_6c;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  char local_51;
  undefined1 *local_50;
  undefined1 local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x6805e8;
  local_68 = param_1;
  local_58 = param_5;
  lVar5 = FUN_0067fd80(&local_45,param_4 + 0xd0);
  uVar12 = *(uint *)(param_4 + 0x18);
  puVar8 = auStack_a8;
  puVar10 = auStack_a8;
  puVar14 = auStack_a8;
  local_6c = uVar12 & 0x4a;
  local_60 = auStack_a0;
  local_51 = local_6c != 0x40 && local_6c != 8;
  lVar7 = param_6;
  if ((param_6 < 1) && (lVar7 = -param_6, local_6c == 0x40 || local_6c == 8)) {
    lVar7 = param_6;
  }
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,uVar12);
  local_44 = FUN_0067fcc0(local_78,lVar7,lVar5 + 0x4a,uVar12,local_51);
  puVar11 = local_60 + (0x28 - local_44);
  uVar12 = (uint)local_50;
  if (*(char *)(lVar5 + 0x20) != '\0') {
    uVar6 = (long)(local_44 + 1) * 2 + 0x17;
    puVar9 = auStack_a8;
    while (puVar10 != auStack_a8 + -(uVar6 & 0xfffffffffffff000)) {
      puVar14 = puVar9 + -0x1000;
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      puVar10 = puVar9 + -0x1000;
      puVar9 = puVar9 + -0x1000;
    }
    uVar6 = (ulong)((uint)uVar6 & 0xff0);
    lVar7 = -uVar6;
    puVar8 = puVar14 + lVar7;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,(uint)local_50);
    cVar1 = *(char *)(lVar5 + 0x49);
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    *(int **)(puVar14 + lVar7 + -8) = &local_44;
    *(undefined1 **)(puVar14 + lVar7 + -0x10) = puVar11;
    local_50 = (undefined1 *)(((ulong)(puVar14 + lVar7 + 0xf) & 0xfffffffffffffff0) + 2);
    *(undefined8 *)(puVar14 + lVar7 + -0x18) = 0x680847;
    FUN_0067e7d0(local_68,uVar3,uVar4,(int)cVar1,param_4);
    puVar11 = local_50;
    uVar12 = (uint)local_60;
  }
  puVar14 = puVar11;
  if (local_51 == '\0') {
    if (((uVar12 & 0x200) != 0) && (param_6 != 0)) {
      if (local_6c == 0x40) {
        puVar14 = puVar11 + -1;
        local_44 = local_44 + 1;
        *puVar14 = *(undefined1 *)(lVar5 + 0x4e);
      }
      else {
        puVar14 = puVar11 + -2;
        local_44 = local_44 + 2;
        puVar11[-1] = *(undefined1 *)(lVar5 + 0x4c + (ulong)(uVar12 >> 0xe & 1));
        *puVar14 = *(undefined1 *)(lVar5 + 0x4e);
      }
    }
LAB_006806bf:
    lVar7 = *(long *)(param_4 + 0x10);
    lVar13 = (long)local_44;
    puVar11 = puVar14;
    if (lVar7 <= lVar13) goto LAB_006806cb;
  }
  else {
    if (-1 < param_6) {
      if ((uVar12 & 0x800) != 0) {
        local_44 = local_44 + 1;
        puVar11[-1] = *(undefined1 *)(lVar5 + 0x4b);
        puVar14 = puVar11 + -1;
      }
      goto LAB_006806bf;
    }
    puVar14 = puVar11 + -1;
    lVar13 = (long)(local_44 + 1);
    local_44 = local_44 + 1;
    *puVar14 = *(undefined1 *)(lVar5 + 0x4a);
    lVar7 = *(long *)(param_4 + 0x10);
    puVar11 = puVar14;
    if (lVar7 <= lVar13) goto LAB_006806cb;
  }
  for (puVar9 = puVar8; puVar9 != puVar8 + -(lVar7 + 0x17U & 0xfffffffffffff000);
      puVar9 = puVar9 + -0x1000) {
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  }
  uVar6 = (ulong)((uint)(lVar7 + 0x17U) & 0xff0);
  lVar5 = -uVar6;
  puVar8 = puVar9 + lVar5;
  if (uVar6 != 0) {
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  }
  *(int **)(puVar9 + lVar5 + -0x10) = &local_44;
  puVar14 = (undefined1 *)((ulong)(puVar9 + lVar5 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar9 + lVar5 + -0x18) = 0x6807ad;
  FUN_0067fbc0(local_68,(int)(char)local_58,lVar7,param_4,puVar14,puVar11);
  lVar13 = (long)local_44;
LAB_006806cb:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar8 + -8) = 0x6806e8;
    (*pcVar2)(param_2,puVar14,lVar13);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_006808df;
    FUN_00771f60();
  }
  return param_2;
}

