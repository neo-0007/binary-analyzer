
void FUN_004b2d50(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    return;
  }
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4);
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar1 < uVar2) {
    uVar5 = *(int *)(param_1 + 0x18) - 1U & 0xf;
    iVar4 = (uVar2 - 1) - uVar1;
    *(uint *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    do {
      iVar3 = iVar4 + -1;
      if (uVar5 == 0) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
        if (iVar4 == 0) break;
        uVar5 = 0xe;
      }
      else {
        uVar5 = uVar5 - 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

