
ulong FUN_00595fe0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = FUN_005959b0(param_2,0,2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = FUN_00436410();
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        FUN_00595890(lVar1);
        return 0xffffffff;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = param_7;
    uVar2 = FUN_00435f80(lVar3,lVar1);
    if ((int)uVar2 < 1) {
      FUN_00595890(lVar1);
      return (ulong)((int)uVar2 - 1);
    }
  }
  return uVar2;
}

