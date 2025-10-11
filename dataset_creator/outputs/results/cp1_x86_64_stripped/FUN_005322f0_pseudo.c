
undefined8 FUN_005322f0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_68;
  
  lVar1 = FUN_004098f0();
  if (*(code **)(lVar1 + 0x180) == (code *)0x0) {
    uVar5 = param_4;
    local_68 = param_3;
    if (0x3fffffffffffffff < param_4) {
      do {
        uVar2 = FUN_004098b0(param_1);
        lVar3 = (param_2 + param_4) - uVar5;
        lVar4 = (param_3 + param_4) - uVar5;
        uVar5 = uVar5 + 0xc000000000000000;
        FUN_004d1780(lVar4,lVar3,0x4000000000000000,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x28,
                     uVar2);
      } while (0x3fffffffffffffff < uVar5);
      uVar5 = param_4 & 0x3fffffffffffffff;
      lVar3 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
      local_68 = param_3 + lVar3;
      param_2 = param_2 + lVar3;
    }
    if (uVar5 != 0) {
      uVar2 = FUN_004098b0(param_1);
      FUN_004d1780(local_68,param_2,uVar5,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x28,uVar2);
    }
  }
  else {
    (**(code **)(lVar1 + 0x180))(param_3,param_2,param_4,lVar1,param_1 + 0x28);
  }
  return 1;
}

