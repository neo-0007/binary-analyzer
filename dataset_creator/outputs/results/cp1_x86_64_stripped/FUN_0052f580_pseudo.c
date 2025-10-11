
undefined8 FUN_0052f580(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_50;
  long local_48;
  
  uVar3 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      iVar1 = FUN_004098b0(param_1);
      uVar2 = FUN_004098f0(param_1);
      if (iVar1 == 0) {
        FUN_0054c450((param_3 + param_4) - uVar3,(param_2 + param_4) - uVar3,0x4000000000000000,
                     uVar2,param_1 + 0x28,FUN_0049cb40);
      }
      else {
        FUN_0054c300();
      }
      uVar3 = uVar3 + 0xc000000000000000;
    } while (0x3fffffffffffffff < uVar3);
    uVar3 = param_4 & 0x3fffffffffffffff;
    local_50 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + local_50;
    local_50 = param_2 + local_50;
  }
  if (uVar3 != 0) {
    iVar1 = FUN_004098b0(param_1);
    uVar2 = FUN_004098f0(param_1);
    if (iVar1 == 0) {
      FUN_0054c450(local_48,local_50,uVar3,uVar2,param_1 + 0x28,FUN_0049cb40);
    }
    else {
      FUN_0054c300();
    }
  }
  return 1;
}

