
undefined8 FUN_005aafc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_005afa70();
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00407440(*(undefined8 *)(piVar1 + 2),(long)*piVar1,param_3,param_4,param_2,0);
    return uVar2;
  }
  return 0;
}

