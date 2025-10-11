
long * FUN_0069c800(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x40);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x30);
    if ((uVar2 == 0) || (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
                    /* try { // try from 0069c84a to 0069c870 has its CatchHandler @ 0069c879 */
    FUN_006b6740(param_1,0,0,*(long *)(param_2 + 0x38),
                 (long)(uVar2 - *(long *)(param_2 + 0x38)) >> 2);
    return param_1;
  }
  FUN_006b5710(param_1,param_2 + 0x60);
  return param_1;
}

