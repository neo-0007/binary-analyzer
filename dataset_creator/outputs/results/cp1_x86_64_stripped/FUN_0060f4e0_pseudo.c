
undefined8 FUN_0060f4e0(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 != 0) {
    iVar6 = 0;
    if ((param_4 != (int *)0x0) && (iVar6 = *param_4 + 1, iVar6 < 0)) {
      iVar6 = 0;
    }
    lVar5 = 0;
    for (; iVar1 = FUN_00436480(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
      lVar3 = FUN_004364a0(param_1,iVar6);
      uVar4 = FUN_005a2b00(lVar3);
      iVar1 = FUN_00423da0(uVar4);
      if (iVar1 == param_2) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar6;
          lVar5 = lVar3;
          if (lVar3 != 0) goto LAB_0060f575;
          goto LAB_0060f5a5;
        }
        bVar7 = lVar5 != 0;
        lVar5 = lVar3;
        if (bVar7) {
          if (param_3 == (undefined4 *)0x0) {
            return 0;
          }
          *param_3 = 0xfffffffe;
          return 0;
        }
      }
    }
    if (lVar5 != 0) {
LAB_0060f575:
      if (param_3 != (undefined4 *)0x0) {
        uVar2 = FUN_005a2b40(lVar5);
        *param_3 = uVar2;
      }
      uVar4 = FUN_0060f430(lVar5);
      return uVar4;
    }
  }
  if (param_4 != (int *)0x0) {
LAB_0060f5a5:
    *param_4 = -1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xffffffff;
  }
  return 0;
}

