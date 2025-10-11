
undefined8 FUN_0060a460(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 != param_1) {
    iVar5 = 0;
    iVar3 = 0;
    if (param_1 == 0) {
      return 0;
    }
    for (; iVar1 = FUN_00436480(param_2), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      piVar2 = (int *)FUN_004364a0(param_2,iVar5);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if (*piVar2 == 0) {
        uVar7 = *(undefined8 *)(piVar2 + 2);
        local_40 = uVar7;
      }
      else {
        if (*piVar2 != 1) {
          return 0;
        }
        uVar7 = (*(undefined8 **)(piVar2 + 2))[1];
        local_40 = **(undefined8 **)(piVar2 + 2);
      }
      while( true ) {
        iVar1 = FUN_00436480(param_1);
        if (iVar1 <= iVar3) {
          return 0;
        }
        piVar2 = (int *)FUN_004364a0(param_1,iVar3);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          uVar4 = *(undefined8 *)(piVar2 + 2);
          uVar6 = uVar4;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          uVar4 = (*(undefined8 **)(piVar2 + 2))[1];
          uVar6 = **(undefined8 **)(piVar2 + 2);
        }
        iVar1 = FUN_0049f320(uVar4,uVar7);
        if (-1 < iVar1) break;
        iVar3 = iVar3 + 1;
      }
      iVar1 = FUN_0049f320(uVar6,local_40);
      if (0 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}

