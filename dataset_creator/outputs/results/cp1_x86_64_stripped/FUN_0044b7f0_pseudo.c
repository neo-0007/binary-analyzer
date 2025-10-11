
void FUN_0044b7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfc;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    FUN_00449fa0();
    return;
  }
  FUN_0044a010(param_1 + 0xc0,param_2,param_3,0,0,0);
  return;
}

