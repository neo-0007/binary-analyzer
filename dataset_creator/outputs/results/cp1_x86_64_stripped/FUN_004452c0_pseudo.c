
undefined8 FUN_004452c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_00552470(param_1 + 0x2b0);
  FUN_00498c50(param_2,param_3 << 3,param_1 + 0xc0);
  FUN_00498be0(param_2,param_3 << 3,param_1 + 0x1b8);
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar2 = FUN_00497c40;
  }
  else {
    pcVar2 = FUN_00497660;
  }
  uVar1 = FUN_005516a0(param_1 + 0x2b0,param_1 + 0xc0,param_1 + 0x1b8,FUN_00494ec0,FUN_00494f10,
                       pcVar2);
  if ((int)uVar1 != 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
    uVar1 = 1;
  }
  return uVar1;
}

