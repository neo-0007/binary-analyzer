
undefined8 FUN_00447470(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  code *local_48;
  
  if ((DAT_0094b59c._1_1_ & 2) == 0) {
    local_48 = (code *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    pcVar3 = FUN_0049ada0;
    local_48 = FUN_0049b570;
  }
  iVar2 = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    FUN_0048a8b0(param_2,iVar2,param_1 + 0xc0);
    pcVar1 = FUN_0048a530;
  }
  else {
    FUN_0048a5f0();
    pcVar1 = FUN_00489fa0;
  }
  *(code **)(param_1 + 0x2c0) = pcVar1;
  FUN_0048a5f0(param_2 + (param_3 >> 1),iVar2,param_1 + 0x1b8);
  *(long *)(param_1 + 0x2b0) = param_1 + 0xc0;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar3 = local_48;
  }
  *(long *)(param_1 + 0x2b8) = param_1 + 0x1b8;
  *(code **)(param_1 + 0x2c8) = FUN_00489fa0;
  *(code **)(param_1 + 0x2d0) = pcVar3;
  return 1;
}

