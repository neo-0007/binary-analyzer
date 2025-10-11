
undefined8 evp_keymgmt_util_has(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = evp_keymgmt_has(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
    return uVar1;
  }
  return 0;
}

