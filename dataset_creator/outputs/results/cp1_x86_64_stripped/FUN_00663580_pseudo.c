
undefined1  [16] FUN_00663580(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (*(code **)(*param_1 + 0x20) != FUN_00663290) {
                    /* WARNING: Could not recover jumptable at 0x006635d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
    return auVar2;
  }
  iVar1 = FUN_00702a90(param_1[8],param_2,0);
  if (iVar1 != 0) {
    return ZEXT816(0xffffffffffffffff);
  }
  auVar2._0_8_ = FUN_00702b70(param_1[8]);
  auVar2._8_8_ = 0;
  return auVar2;
}

