
undefined4 FUN_004a82a0(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(long *)(param_3 + 8) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}

