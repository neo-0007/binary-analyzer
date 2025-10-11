
long FUN_004d87c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == 0) || (lVar2 = FUN_004d5e70(), lVar2 == 0)) {
    lVar5 = 0;
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    uVar3 = FUN_004d6140(lVar2);
    iVar1 = FUN_00542210(uVar3,param_1 + 8);
    if (iVar1 == 0) {
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x68) == 0) {
        lVar4 = 0;
        if (*(long *)(param_1 + 0x70) == 0) {
          return lVar2;
        }
      }
      else {
        lVar4 = FUN_004b82e0(*(long *)(param_1 + 0x68));
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x70);
          if (((lVar5 == 0) || (lVar5 = FUN_004b82e0(lVar5), lVar5 != 0)) &&
             (iVar1 = FUN_004d6060(lVar2,lVar4,lVar5), iVar1 != 0)) {
            return lVar2;
          }
          goto LAB_004d886a;
        }
      }
      lVar5 = 0;
    }
  }
LAB_004d886a:
  FUN_004b7fa0(lVar4);
  FUN_004b7fa0(lVar5);
  FUN_004d5b70(lVar2);
  return 0;
}

