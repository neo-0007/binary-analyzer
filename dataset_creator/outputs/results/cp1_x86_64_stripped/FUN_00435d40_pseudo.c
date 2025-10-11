
undefined8 FUN_00435d40(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (-1 < param_2) {
    uVar1 = FUN_00435a60(param_1,param_2,1);
    return uVar1;
  }
  return 1;
}

