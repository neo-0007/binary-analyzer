
undefined8 setivinv(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 0x15) != 0x14) {
    return 0;
  }
  memcpy((void *)(((param_1 + 0x55) - param_3) + *(long *)(param_1 + 0x10)),param_2,param_3);
  iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                    (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 2;
    return 1;
  }
  return 0;
}

