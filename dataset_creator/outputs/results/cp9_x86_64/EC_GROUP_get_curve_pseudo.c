
undefined8 EC_GROUP_get_curve(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e3200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_lib.c",0x23a,"EC_GROUP_get_curve");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}

