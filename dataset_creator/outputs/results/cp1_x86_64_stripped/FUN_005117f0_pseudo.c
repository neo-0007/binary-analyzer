
ulong FUN_005117f0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    lVar1 = FUN_00510da0(lVar1,0x87);
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0040f1c0(param_1,*param_2,lVar1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  FUN_00511590(lVar1);
  return uVar2 & 0xffffffff;
}

