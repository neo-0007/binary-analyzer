
ulong FUN_00705a00(uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  
  uVar2 = *param_1;
  if ((uVar2 & 8) != 0) {
    *param_1 = uVar2 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    return 0xffffffff;
  }
  puVar5 = *(undefined1 **)(param_1 + 8);
  if ((uVar2 & 0x800) == 0) {
    if (puVar5 == (undefined1 *)0x0) goto LAB_00705b98;
    puVar6 = *(undefined1 **)(param_1 + 2);
  }
  else {
    if (puVar5 != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_1 + 10);
      goto joined_r0x00705ad6;
    }
LAB_00705b98:
    FUN_00706a10(param_1);
    puVar6 = *(undefined1 **)(param_1 + 0xe);
    uVar2 = *param_1;
    *(undefined1 **)(param_1 + 6) = puVar6;
    *(undefined1 **)(param_1 + 2) = puVar6;
    *(undefined1 **)(param_1 + 4) = puVar6;
  }
  if ((uVar2 & 0x100) != 0) {
    lVar1 = *(long *)(param_1 + 4);
    FUN_00706520(param_1);
    uVar4 = *(long *)(param_1 + 6) - *(long *)(param_1 + 0xe);
    if ((ulong)(lVar1 - (long)puVar6) < uVar4) {
      uVar4 = lVar1 - (long)puVar6;
    }
    puVar6 = (undefined1 *)(*(long *)(param_1 + 6) - uVar4);
    uVar2 = *param_1;
  }
  if (*(undefined1 **)(param_1 + 0x10) == puVar6) {
    puVar5 = *(undefined1 **)(param_1 + 0xe);
    *(undefined1 **)(param_1 + 2) = puVar5;
    *(undefined1 **)(param_1 + 4) = puVar5;
    puVar6 = puVar5;
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 4);
  }
  *(undefined1 **)(param_1 + 2) = puVar5;
  *(undefined1 **)(param_1 + 6) = puVar5;
  *(undefined1 **)(param_1 + 0xc) = *(undefined1 **)(param_1 + 0x10);
  *param_1 = uVar2 | 0x800;
  *(undefined1 **)(param_1 + 10) = puVar6;
  *(undefined1 **)(param_1 + 8) = puVar6;
  puVar5 = puVar6;
  if (((int)param_1[0x30] < 1) && ((uVar2 & 0x202) != 0)) {
    *(undefined1 **)(param_1 + 0xc) = puVar6;
  }
joined_r0x00705ad6:
  if (param_2 == 0xffffffff) {
    uVar4 = FUN_00704f80(param_1,puVar5,(long)puVar6 - (long)puVar5);
    return uVar4;
  }
  if (*(undefined1 **)(param_1 + 0x10) == puVar6) {
    if ((int)param_1[0x30] < 1) {
      iVar3 = FUN_00704f80(param_1,puVar5,(long)puVar6 - (long)puVar5);
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      iVar3 = FUN_00701350(param_1,lVar1,*(long *)(*(long *)(param_1 + 0x28) + 0x20) - lVar1 >> 2);
    }
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    puVar6 = *(undefined1 **)(param_1 + 10);
  }
  *(undefined1 **)(param_1 + 10) = puVar6 + 1;
  *puVar6 = (char)param_2;
  if ((((*param_1 & 2) != 0) || (((*param_1 & 0x200) != 0 && (param_2 == 10)))) &&
     (iVar3 = FUN_00704f80(param_1,*(long *)(param_1 + 8),
                           *(long *)(param_1 + 10) - *(long *)(param_1 + 8)), iVar3 == -1)) {
    return 0xffffffff;
  }
  return (ulong)(param_2 & 0xff);
}

