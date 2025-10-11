
undefined4 FUN_005a8d60(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_00436430(*(undefined8 *)(param_1 + 0x30),FUN_004a06b0);
  if (param_2 != 0) {
    lVar2 = FUN_00436410();
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 != 0) {
      iVar4 = 0;
      while( true ) {
        iVar1 = FUN_00436480(param_2);
        if (iVar1 <= iVar4) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
          return 1;
        }
        uVar3 = FUN_004364a0(param_2,iVar4);
        lVar2 = FUN_00424a40(uVar3);
        if (lVar2 == 0) break;
        iVar1 = FUN_00435f80(*(undefined8 *)(param_1 + 0x30),lVar2);
        if (iVar1 == 0) {
          FUN_004a06b0(lVar2);
          return 0;
        }
        iVar4 = iVar4 + 1;
      }
    }
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 1;
}

