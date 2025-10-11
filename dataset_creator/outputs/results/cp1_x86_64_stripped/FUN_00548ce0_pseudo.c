
undefined8 FUN_00548ce0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = FUN_00436480(param_4);
  if (param_1 == 0) {
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(long *)(param_3 + uVar5 * 8) == 0) {
          return 1;
        }
        lVar4 = FUN_0041cdd0(param_2);
        if (lVar4 != 0) {
          uVar3 = FUN_004364a0(param_4,uVar5 & 0xffffffff);
          iVar2 = FUN_0041dc70(lVar4,uVar3);
          if (iVar2 == 0) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != (long)iVar1);
    }
  }
  else if (0 < iVar1) {
    uVar5 = 0;
    do {
      if (*(long *)(param_3 + uVar5 * 8) == 0) {
        return 1;
      }
      uVar3 = FUN_004364a0(param_4,uVar5 & 0xffffffff);
      iVar2 = FUN_00548430(param_1,*(undefined8 *)(param_3 + uVar5 * 8),uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while ((long)iVar1 != uVar5);
  }
  return 1;
}

