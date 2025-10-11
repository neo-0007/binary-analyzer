
undefined8 FUN_004d8310(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  iVar1 = FUN_004d8140(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00541e10(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return uVar2;
}

