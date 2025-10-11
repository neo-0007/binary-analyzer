
undefined8 FUN_004a12d0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) && (*(long *)(param_2 + 2) != 0)) {
    uVar1 = FUN_004a26c0(*(long *)(param_2 + 2),param_1);
    return uVar1;
  }
  return 0;
}

