
undefined8 FUN_00532140(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = FUN_004098f0();
  if (*(code **)(lVar2 + 0x80) == (code *)0x0) {
    uVar4 = param_4;
    if (0x3fffffffffffffff < param_4) {
      do {
        uVar1 = FUN_004098b0(param_1);
        uVar3 = FUN_004098f0(param_1);
        lVar5 = (param_3 + param_4) - uVar4;
        lVar2 = (param_2 + param_4) - uVar4;
        uVar4 = uVar4 + 0xc000000000000000;
        FUN_004d1300(lVar5,lVar2,0x4000000000000000,uVar3,param_1 + 0x28,uVar1);
      } while (0x3fffffffffffffff < uVar4);
      uVar4 = param_4 & 0x3fffffffffffffff;
      lVar2 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
      param_3 = param_3 + lVar2;
      param_2 = param_2 + lVar2;
    }
    if (uVar4 != 0) {
      uVar1 = FUN_004098b0(param_1);
      uVar3 = FUN_004098f0(param_1);
      FUN_004d1300(param_3,param_2,uVar4,uVar3,param_1 + 0x28,uVar1);
    }
  }
  else {
    (**(code **)(lVar2 + 0x80))(param_3,param_2,param_4,lVar2,param_1 + 0x28);
  }
  return 1;
}

