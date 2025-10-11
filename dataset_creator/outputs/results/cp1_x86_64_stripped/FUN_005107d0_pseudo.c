
undefined8 FUN_005107d0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004f0cc0();
  if (iVar1 == 0) {
    iVar1 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = FUN_004b16e0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x40),
                           *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}

