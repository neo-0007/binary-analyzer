
undefined8 FUN_0053e950(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0053e930();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0053e97b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x90))(param_2,param_3);
    return uVar2;
  }
  return 0;
}

