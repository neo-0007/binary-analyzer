
undefined8 FUN_0044da10(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  if (7 < param_4) {
    lVar1 = param_3;
    do {
      lVar2 = lVar1 + 8;
      FUN_004d1c30(lVar1,param_2,param_1 + 0xc0,param_1 + 0x140,param_1 + 0x1c0,
                   *(byte *)(param_1 + 0x3c) >> 1 & 1);
      lVar1 = lVar2;
      param_2 = param_2 + 8;
    } while (lVar2 != param_3 + 8 + (param_4 - 8 & 0xfffffffffffffff8));
    return 1;
  }
  return 1;
}

