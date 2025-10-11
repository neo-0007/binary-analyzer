
ulong FUN_00678870(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_3 <= param_2) {
    return 0;
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = (uVar2 << 7 | uVar2 >> 0x39) + (long)cVar1;
  } while (param_3 != param_2);
  return uVar2;
}

