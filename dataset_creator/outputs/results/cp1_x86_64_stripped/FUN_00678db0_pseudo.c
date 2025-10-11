
ulong FUN_00678db0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  FUN_0063d6f0();
  if (*(code **)(*param_1 + 0x30) == FUN_00405e50) {
    return param_2 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00678dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,(int)(char)(param_2 & 0xffffffff));
  return uVar1;
}

