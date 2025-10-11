
undefined8 FUN_00415480(long param_1,undefined4 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_007129d0(param_3);
  if (uVar1 < 0x80000000) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x004154bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (param_1,param_2,uVar1 & 0xffffffff,param_3,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0xffffffff;
}

