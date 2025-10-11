
void FUN_0062dde0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = *param_2;
  if (((uVar1 & 4) != 0) && (psVar2 = (short *)*param_1, 1 < (ulong)(param_1[1] - (long)psVar2))) {
    if (*psVar2 == -2) {
      *param_1 = psVar2 + 1;
      *param_2 = uVar1 & 0xfffffffe;
      return;
    }
    if (*psVar2 == -0x101) {
      *param_1 = psVar2 + 1;
      *param_2 = uVar1 | 1;
      return;
    }
  }
  return;
}

