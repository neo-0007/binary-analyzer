
long FUN_0059f340(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = FUN_00436100();
  if (lVar2 != 0) {
    for (iVar4 = 0; iVar1 = FUN_00436480(lVar2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = FUN_004364a0(lVar2,iVar4);
      iVar1 = FUN_005a1b20(uVar3);
      if (iVar1 == 0) {
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            uVar3 = FUN_004364a0(lVar2,iVar4);
            FUN_005b0200(uVar3);
          } while (iVar4 != 0);
        }
        FUN_004360b0(lVar2);
        return 0;
      }
    }
  }
  return lVar2;
}

