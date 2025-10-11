
undefined8 FUN_004c7580(long param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    if (((param_2 & 0xffffffbf) != 0x80) && (param_2 != 0x100)) {
      return 0xfffffffe;
    }
    uVar1 = FUN_004c5a60(param_2,param_1,param_3);
    *(undefined4 *)(param_3 + 0x110) = uVar1;
    return 0;
  }
  return 0xffffffff;
}

