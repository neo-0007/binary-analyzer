
long * FUN_0069aca0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x38);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x28);
    if ((uVar2 == 0) || (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
                    /* try { // try from 0069acea to 0069ad10 has its CatchHandler @ 0069ad19 */
    FUN_006b6740(param_1,0,0,*(long *)(param_2 + 0x30),
                 (long)(uVar2 - *(long *)(param_2 + 0x30)) >> 2);
    return param_1;
  }
  FUN_006b5710(param_1,param_2 + 0x58);
  return param_1;
}

