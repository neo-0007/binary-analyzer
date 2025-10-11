
undefined8 FUN_00561f40(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x16) {
    return 0;
  }
  uVar2 = FUN_0059ee60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                       **(undefined8 **)(param_2 + 8),(*(undefined8 **)(param_2 + 8))[1]);
  return uVar2;
}

