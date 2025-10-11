
long * FUN_00698810(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 2) = 0;
  uVar1 = *(ulong *)(param_2 + 0x40);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x30);
    if ((uVar2 == 0) || (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
                    /* try { // try from 00698853 to 00698870 has its CatchHandler @ 00698879 */
    FUN_0069f220(param_1,0,0,*(long *)(param_2 + 0x38),uVar2 - *(long *)(param_2 + 0x38));
    return param_1;
  }
  FUN_0069e200(param_1,param_2 + 0x60);
  return param_1;
}

