
undefined8 FUN_00604470(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0055fbf0(param_1,0x32);
  if (lVar1 != 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = FUN_004239c0(0x15);
  }
  uVar2 = FUN_00560c20(param_1,0x32,6,param_2);
  return uVar2;
}

