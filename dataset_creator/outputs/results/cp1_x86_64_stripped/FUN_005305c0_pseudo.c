
undefined8 FUN_005305c0(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar5 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      uVar1 = FUN_004098b0(param_1);
      uVar2 = FUN_004098f0(param_1);
      lVar3 = (param_2 + param_4) - uVar5;
      lVar4 = (param_3 + param_4) - uVar5;
      uVar5 = uVar5 + 0xc000000000000000;
      FUN_005c8550(lVar4,lVar3,0x4000000000000000,uVar2,param_1 + 0x28,uVar1);
    } while (0x3fffffffffffffff < uVar5);
    uVar5 = param_4 & 0x3fffffffffffffff;
    local_50 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + local_50;
    local_50 = param_2 + local_50;
  }
  if (uVar5 != 0) {
    uVar1 = FUN_004098b0(param_1);
    uVar2 = FUN_004098f0(param_1);
    FUN_005c8550(local_48,local_50,uVar5,uVar2,param_1 + 0x28,uVar1);
  }
  return 1;
}

