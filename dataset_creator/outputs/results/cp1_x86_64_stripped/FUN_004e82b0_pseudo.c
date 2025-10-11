
ulong FUN_004e82b0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    uVar2 = FUN_0040f1a0(param_1,*param_2);
    return uVar2;
  }
  lVar1 = FUN_004ed9d0();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_0040f1c0(param_1,0x198,lVar1);
    if ((int)uVar2 == 0) {
      FUN_004ed620(lVar1);
      return uVar2 & 0xffffffff;
    }
  }
  return uVar2;
}

