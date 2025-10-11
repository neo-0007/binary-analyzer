
ulong FUN_00649a30(long *param_1)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x48) == FUN_0063e490) {
    return (ulong)*(uint *)(param_1[2] + 0x5c);
  }
                    /* WARNING: Could not recover jumptable at 0x00649a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}

