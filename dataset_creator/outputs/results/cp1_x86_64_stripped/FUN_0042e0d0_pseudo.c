
long FUN_0042e0d0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0xd0));
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 == 0) {
    lVar2 = FUN_0056b110(param_1,param_3);
    *(long *)(param_1 + 0xc0) = lVar2;
    if (lVar2 == 0) goto LAB_0042e11e;
  }
  iVar1 = FUN_004b1b10(lVar2);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 200);
    *param_2 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_0056b110(param_1,param_3);
      *(long *)(param_1 + 200) = lVar2;
    }
  }
  else {
    *param_2 = 1;
  }
LAB_0042e11e:
  FUN_004222e0(*(undefined8 *)(param_1 + 0xd0));
  return lVar2;
}

