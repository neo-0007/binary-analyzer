
undefined8 FUN_00598350(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  
  local_48 = param_2;
  if (param_3 >> 0x3c != 0) {
    uVar1 = param_3 + 0xf000000000000000;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + 0x1000000000000000;
      FUN_00597f80(param_1,lVar2,0x8000000000000000);
      lVar2 = lVar3;
    } while (lVar3 != ((uVar1 >> 0x3c) + 1 << 0x3c) + param_2);
    param_3 = param_3 & 0xfffffffffffffff;
    local_48 = param_2 + (uVar1 & 0xf000000000000000) + 0x1000000000000000;
  }
  if (param_3 != 0) {
    FUN_00597f80(param_1,local_48,param_3 * 8);
  }
  return 1;
}

