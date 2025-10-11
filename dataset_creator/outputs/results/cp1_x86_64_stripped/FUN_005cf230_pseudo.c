
undefined8 FUN_005cf230(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = FUN_004b8260(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar3 != 0) {
    lVar3 = FUN_004b8260(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar3 != 0) {
      lVar3 = FUN_004b8260(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar3 != 0) {
        iVar4 = *(int *)(param_2 + 0x48);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        uVar1 = *(undefined4 *)(param_2 + 0x50);
        *(int *)(param_1 + 0x48) = iVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar1;
        iVar2 = iVar4 + 0x7e;
        if (-1 < iVar4 + 0x3f) {
          iVar2 = iVar4 + 0x3f;
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        lVar3 = FUN_004b8240(*(undefined8 *)(param_1 + 0x60),iVar2 >> 6);
        if (lVar3 != 0) {
          iVar2 = *(int *)(param_1 + 0x48) + 0x3f;
          iVar4 = *(int *)(param_1 + 0x48) + 0x7e;
          if (-1 < iVar2) {
            iVar4 = iVar2;
          }
          lVar3 = FUN_004b8240(*(undefined8 *)(param_1 + 0x68),iVar4 >> 6);
          if (lVar3 != 0) {
            FUN_004b73a0(*(undefined8 *)(param_1 + 0x60));
            FUN_004b73a0(*(undefined8 *)(param_1 + 0x68));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

