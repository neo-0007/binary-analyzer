
undefined8 FUN_0044d570(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar3 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      lVar1 = (param_2 + param_4) - uVar3;
      lVar2 = (param_3 + param_4) - uVar3;
      uVar3 = uVar3 + 0xc000000000000000;
      FUN_004ce230(lVar2,lVar1,8,0x4000000000000000,param_1 + 0xc0,param_1 + 0x140,param_1 + 0x1c0,
                   param_1 + 0x94,*(byte *)(param_1 + 0x3c) >> 1 & 1);
    } while (0x3fffffffffffffff < uVar3);
    uVar3 = param_4 & 0x3fffffffffffffff;
    local_50 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + local_50;
    local_50 = param_2 + local_50;
  }
  if (uVar3 != 0) {
    FUN_004ce230(local_48,local_50,8,uVar3,param_1 + 0xc0,param_1 + 0x140,param_1 + 0x1c0,
                 param_1 + 0x94,*(byte *)(param_1 + 0x3c) >> 1 & 1);
  }
  return 1;
}

