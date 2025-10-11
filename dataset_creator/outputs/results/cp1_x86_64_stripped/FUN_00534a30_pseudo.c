
undefined8 FUN_00534a30(long param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_RDX;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar6 = param_4;
  uVar7 = param_2;
  uVar9 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    lVar3 = param_3;
    do {
      uVar1 = FUN_004098b0(param_1,uVar7,lVar3,uVar6);
      uVar7 = (ulong)uVar1;
      lVar3 = FUN_004098f0(param_1);
      lVar4 = FUN_004098f0(param_1);
      uVar6 = lVar3 + 0x88;
      uVar5 = FUN_004098f0(param_1);
      lVar3 = (param_2 + param_4) - uVar9;
      lVar8 = (param_3 + param_4) - uVar9;
      uVar9 = uVar9 + 0xc000000000000000;
      FUN_005cc850(lVar8,lVar3,0x4000000000000000,uVar5,param_1 + 0x28,lVar4 + 0x80);
      lVar3 = extraout_RDX;
    } while (0x3fffffffffffffff < uVar9);
    uVar9 = param_4 & 0x3fffffffffffffff;
    lVar3 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + lVar3;
    local_50 = param_2 + lVar3;
    param_3 = extraout_RDX;
  }
  if (uVar9 != 0) {
    uVar2 = FUN_004098b0(param_1,uVar7,param_3,uVar6);
    lVar3 = FUN_004098f0(param_1);
    lVar4 = FUN_004098f0(param_1);
    uVar5 = FUN_004098f0(param_1);
    FUN_005cc850(local_48,local_50,uVar9,uVar5,param_1 + 0x28,lVar4 + 0x80,lVar3 + 0x88,uVar2);
  }
  return 1;
}

