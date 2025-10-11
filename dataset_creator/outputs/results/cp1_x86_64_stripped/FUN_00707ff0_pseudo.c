
undefined8 FUN_00707ff0(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(uint **)(param_2 + 8) != param_1) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 < 0) {
    lVar5 = *(long *)(param_1 + 4);
    if ((uVar1 & 0x100) == 0) {
      *param_1 = uVar1 | 0x100;
      lVar4 = *(long *)(param_1 + 0x16);
      *(long *)(param_1 + 0x16) = lVar5;
      uVar3 = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 6);
      *(long *)(param_1 + 4) = lVar4;
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(long *)(param_1 + 2) = lVar4 + iVar2;
      return 0;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 6);
    if ((uVar1 & 0x100) != 0) {
      *param_1 = uVar1 & 0xfffffeff;
      uVar3 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)(param_1 + 0x16) = uVar3;
      lVar5 = *(long *)(param_1 + 0x12);
      *(long *)(param_1 + 0x12) = *(long *)(param_1 + 6);
      *(long *)(param_1 + 6) = lVar5;
    }
  }
  *(long *)(param_1 + 2) = lVar5 + iVar2;
  return 0;
}

