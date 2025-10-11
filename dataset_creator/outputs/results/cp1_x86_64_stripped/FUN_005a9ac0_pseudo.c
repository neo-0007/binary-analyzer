
long FUN_005a9ac0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_00436480(*param_1);
    if ((param_2 < iVar2) && (-1 < param_2)) {
      uVar1 = *param_1;
      lVar3 = FUN_00435ec0(uVar1,param_2);
      iVar2 = FUN_00436480(uVar1);
      *(undefined4 *)(param_1 + 1) = 1;
      if (param_2 != iVar2) {
        if (param_2 == 0) {
          iVar5 = *(int *)(lVar3 + 0x10);
        }
        else {
          lVar4 = FUN_004364a0(uVar1,param_2 + -1);
          iVar5 = *(int *)(lVar4 + 0x10) + 1;
        }
        lVar4 = FUN_004364a0(uVar1,param_2);
        if ((iVar5 < *(int *)(lVar4 + 0x10)) && (param_2 < iVar2)) {
          do {
            iVar5 = param_2 + 1;
            lVar4 = FUN_004364a0(uVar1,param_2);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
            param_2 = iVar5;
          } while (iVar2 != iVar5);
        }
      }
      return lVar3;
    }
  }
  return 0;
}

