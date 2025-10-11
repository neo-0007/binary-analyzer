
undefined8 FUN_004a8d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  if ((iVar2 == 0) && ((*(ulong *)(param_4 + 0x28) & 1) != 0)) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (((*(ulong *)(param_4 + 0x28) & 2) != 0) && (iVar2 < 0)) {
    iVar2 = -iVar2;
    uVar1 = 1;
  }
  uVar1 = FUN_0049fc40(param_2,iVar2,uVar1);
  return uVar1;
}

