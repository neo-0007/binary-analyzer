
ulong FUN_00653650(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 <= param_2) {
    return 0;
  }
  do {
    iVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = (uVar2 << 7 | uVar2 >> 0x39) + (long)iVar1;
  } while (param_2 < param_3);
  return uVar2;
}

