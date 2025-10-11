
undefined8 FUN_00447580(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    FUN_00498be0(param_2,iVar2,param_1 + 0xc0);
    pcVar1 = FUN_00494f10;
  }
  else {
    FUN_00498c50();
    pcVar1 = FUN_00494ec0;
  }
  *(code **)(param_1 + 0x2c0) = pcVar1;
  FUN_00498c50(param_2 + (param_3 >> 1),iVar2,param_1 + 0x1b8);
  *(long *)(param_1 + 0x2b0) = param_1 + 0xc0;
  *(long *)(param_1 + 0x2b8) = param_1 + 0x1b8;
  *(code **)(param_1 + 0x2c8) = FUN_00494ec0;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    pcVar1 = FUN_00496e80;
  }
  else {
    pcVar1 = FUN_00496710;
  }
  *(code **)(param_1 + 0x2d0) = pcVar1;
  return 1;
}

