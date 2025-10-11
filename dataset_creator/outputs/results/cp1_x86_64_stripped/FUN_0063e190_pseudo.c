
ulong FUN_0063e190(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < param_3) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_4 + lVar1 * 4) =
           *(undefined4 *)(param_1 + 0x9c + (ulong)*(byte *)(param_2 + lVar1) * 4);
      lVar1 = lVar1 + 1;
    } while (param_3 - param_2 != lVar1);
  }
  return param_3;
}

