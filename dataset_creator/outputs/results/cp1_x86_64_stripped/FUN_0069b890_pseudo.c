
long * FUN_0069b890(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
    if ((uVar2 == 0) || (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
                    /* try { // try from 0069b8da to 0069b900 has its CatchHandler @ 0069b909 */
    FUN_006b6740(param_1,0,0,*(long *)(param_2 + 0x28),
                 (long)(uVar2 - *(long *)(param_2 + 0x28)) >> 2);
    return param_1;
  }
  FUN_006b5710(param_1,param_2 + 0x50);
  return param_1;
}

