
undefined8 FUN_0049c660(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (param_2 >> 5) + 5;
  *(int *)(param_3 + 0xf0) = iVar1;
  FUN_0049c2c0(param_1,param_2,param_3 + 0x10 + (ulong)(uint)(iVar1 * 0x10),1,
               param_2 >> 1 & 0x20 ^ 0x20);
  return 0;
}

