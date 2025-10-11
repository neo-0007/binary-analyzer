
void FUN_00565700(long param_1,long param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = FUN_00562200(param_1,param_2,param_1 + 0xe8);
  if (iVar1 == 0) {
    *(code **)(param_1 + 0xe8) = FUN_005622c0;
    *(code **)(param_1 + 0xf0) = FUN_005623c0;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}

