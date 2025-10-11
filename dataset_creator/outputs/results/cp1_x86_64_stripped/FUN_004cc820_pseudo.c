
undefined8 FUN_004cc820(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cc82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/conf/conf_lib.c",0x116,"NCONF_load_bio");
  FUN_0051f8f0(0xe,0x69,0);
  return 0;
}

