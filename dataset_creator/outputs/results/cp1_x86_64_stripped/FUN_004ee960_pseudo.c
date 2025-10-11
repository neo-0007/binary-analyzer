
undefined8 FUN_004ee960(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_004f4df0(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20),param_2,param_3,param_4
                        );
    return uVar1;
  }
  return 0;
}

