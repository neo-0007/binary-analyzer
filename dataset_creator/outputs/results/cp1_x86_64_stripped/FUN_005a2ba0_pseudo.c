
long FUN_005a2ba0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_00436410();
  if (lVar2 != 0) {
    for (iVar5 = 0; iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x28)), iVar5 < iVar1;
        iVar5 = iVar5 + 1) {
      uVar3 = FUN_004364a0(*(undefined8 *)(param_1 + 0x28),iVar5);
      uVar4 = FUN_0059e6d0(uVar3);
      iVar1 = FUN_0059eab0(param_2,uVar4);
      if ((iVar1 == 0) && (iVar1 = FUN_0059e7e0(lVar2,uVar3,1), iVar1 == 0)) {
        FUN_00436430(lVar2,FUN_005b0200);
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
        return 0;
      }
    }
  }
  return lVar2;
}

