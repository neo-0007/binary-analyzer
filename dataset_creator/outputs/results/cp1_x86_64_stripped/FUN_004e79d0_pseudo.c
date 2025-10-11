
undefined8 FUN_004e79d0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_004ee2d0(*(undefined8 *)(param_2 + 0x20));
  lVar3 = FUN_004f0340(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar4 = FUN_004ed600();
    *(long *)(param_1 + 0x20) = lVar4;
    if (lVar4 == 0) goto LAB_004e7a0b;
  }
  iVar1 = FUN_004ee8b0(lVar4,lVar3);
  if (iVar1 != 0) {
    FUN_004efd00(lVar3);
    return 1;
  }
LAB_004e7a0b:
  FUN_004efd00(lVar3);
  return 0;
}

