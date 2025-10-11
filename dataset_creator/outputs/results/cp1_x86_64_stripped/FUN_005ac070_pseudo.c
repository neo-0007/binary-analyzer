
undefined8 FUN_005ac070(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
  uVar1 = FUN_0059e6c0(param_3);
  uVar2 = FUN_0059e6f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x005ac0d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar2,uVar1);
  return uVar1;
}

