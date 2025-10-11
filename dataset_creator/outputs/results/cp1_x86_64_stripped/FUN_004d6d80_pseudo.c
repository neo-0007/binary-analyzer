
ulong FUN_004d6d80(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar1 = FUN_004d7d90(lVar1,0x87);
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0040f1c0(param_1,0x74,lVar1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  FUN_004d8960(lVar1);
  return uVar2 & 0xffffffff;
}

