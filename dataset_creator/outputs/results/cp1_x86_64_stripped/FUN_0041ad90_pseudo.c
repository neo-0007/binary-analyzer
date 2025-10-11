
undefined8 FUN_0041ad90(long param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR_FUN_0093b1f0 != FUN_0041ad90) {
                    /* WARNING: Could not recover jumptable at 0x0041ada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_0093b1f0)();
    return uVar1;
  }
  if (param_1 != 0) {
    if (DAT_0093b1d8 != 0) {
      DAT_0093b1d8 = 0;
    }
    uVar1 = FUN_007101b0();
    return uVar1;
  }
  return 0;
}

