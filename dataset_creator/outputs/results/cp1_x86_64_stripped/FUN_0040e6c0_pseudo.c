
ulong FUN_0040e6c0(uint *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
      return (ulong)*param_1;
    }
  }
  else if (lVar1 == 0) {
    uVar2 = FUN_0040e580();
    uVar4 = FUN_00423b00(uVar2);
    (*param_2)(uVar4,param_3);
    return 1;
  }
  uVar3 = FUN_0053e780(lVar1,param_2);
  return uVar3;
}

