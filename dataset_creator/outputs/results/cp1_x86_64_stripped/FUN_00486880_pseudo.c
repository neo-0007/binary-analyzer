
void FUN_00486880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf5 | 2;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    FUN_00486750(param_1,param_2,param_3,param_4,param_5,param_6,1);
  }
  return;
}

