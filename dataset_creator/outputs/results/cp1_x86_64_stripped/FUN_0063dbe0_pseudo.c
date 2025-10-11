
void FUN_0063dbe0(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  
  if (param_2 < param_3) {
    do {
      pbVar1 = param_2 + 1;
      *param_2 = (byte)*(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*param_2 * 4);
      param_2 = pbVar1;
    } while (param_3 != pbVar1);
  }
  return;
}

