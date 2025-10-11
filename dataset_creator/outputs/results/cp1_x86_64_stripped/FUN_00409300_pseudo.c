
undefined8 FUN_00409300(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_004a29f0(param_2,*(undefined4 *)(param_3 + 0x14),param_3,
                         *(undefined4 *)(param_3 + 0x10));
    return uVar1;
  }
  return 0;
}

