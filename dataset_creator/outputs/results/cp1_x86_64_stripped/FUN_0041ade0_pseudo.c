
undefined8 FUN_0041ade0(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((code *)PTR_FUN_0093b1e8 != FUN_0041ade0) {
                    /* WARNING: Could not recover jumptable at 0x0041adfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_0093b1e8)();
    return uVar1;
  }
  if (param_1 != 0) {
    if (param_2 != 0) {
      uVar1 = FUN_00710840();
      return uVar1;
    }
    FUN_0041ad60(param_1,param_3,param_4);
    return 0;
  }
  uVar1 = FUN_0041ad90(param_2,param_3,param_4);
  return uVar1;
}

