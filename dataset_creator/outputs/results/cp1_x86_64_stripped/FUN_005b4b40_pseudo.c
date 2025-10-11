
undefined8 FUN_005b4b40(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005b8930(0,0xffffffff,param_1);
  if (0 < (int)uVar1) {
    *param_2 = *param_2 + (int)uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

