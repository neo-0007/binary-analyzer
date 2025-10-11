
undefined8 evp_keymgmt_util_export(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = evp_keymgmt_export(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                               param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}

