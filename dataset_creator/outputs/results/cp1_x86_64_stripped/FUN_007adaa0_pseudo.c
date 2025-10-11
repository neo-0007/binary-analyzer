
void FUN_007adaa0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (-1 < *(int *)(param_1 + 500)) {
    FUN_0076e4b0();
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffc;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = *(long *)(param_1 + 0x218 + lVar2 * 8);
      if (lVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0x208 + lVar2 * 4);
        if (iVar1 != -1) {
          FUN_0076e4b0(iVar1);
          *(undefined4 *)(param_1 + 0x208 + lVar2 * 4) = 0xffffffff;
          lVar3 = *(long *)(param_1 + 0x218 + lVar2 * 8);
        }
        FUN_007104f0(lVar3);
        *(undefined8 *)(param_1 + 0x218 + lVar2 * 8) = 0;
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < iVar1);
  }
  FUN_007b04c0(param_1);
  return;
}

