
ulong FUN_007075f0(uint *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 2);
  if ((*(ulong *)(param_1 + 6) < uVar1) && (*(char *)(uVar1 - 1) == (char)param_2)) {
    *(ulong *)(param_1 + 2) = uVar1 - 1;
    param_2 = param_2 & 0xff;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar2 - 0x93f160U) {
      FUN_00703130();
      param_2 = param_2 & 0xffffffff;
    }
    param_2 = (**(code **)(lVar2 + 0x30))(param_1,param_2);
    if ((int)param_2 == -1) {
      return param_2;
    }
  }
  *param_1 = *param_1 & 0xffffffef;
  return param_2;
}

