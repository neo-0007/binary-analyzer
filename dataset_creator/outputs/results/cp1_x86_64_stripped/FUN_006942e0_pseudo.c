
long * FUN_006942e0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 2) = 0;
  uVar1 = *(ulong *)(param_2 + 0x28);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x18);
    if ((uVar2 == 0) || (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
                    /* try { // try from 00694323 to 00694340 has its CatchHandler @ 00694349 */
    FUN_0069f220(param_1,0,0,*(long *)(param_2 + 0x20),uVar2 - *(long *)(param_2 + 0x20));
    return param_1;
  }
  FUN_0069e200(param_1,param_2 + 0x48);
  return param_1;
}

