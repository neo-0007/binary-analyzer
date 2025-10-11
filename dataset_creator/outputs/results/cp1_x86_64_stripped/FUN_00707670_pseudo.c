
ulong FUN_00707670(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 2);
  if (*(ulong *)(param_1 + 6) < uVar2) {
    *(ulong *)(param_1 + 2) = uVar2 - 1;
    uVar2 = (ulong)*(byte *)(uVar2 - 1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar1 - 0x93f160U) {
      FUN_00703130();
    }
    uVar2 = (**(code **)(lVar1 + 0x30))(param_1,0xffffffff);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
  }
  *param_1 = *param_1 & 0xffffffef;
  return uVar2;
}

