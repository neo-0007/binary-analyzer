
undefined4 FUN_0059bbc0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0059b9e0(param_1,0xffffffff,0);
  uVar2 = 0;
  if ((iVar1 == 1) && (uVar2 = 0xffffffff, (*(byte *)(param_1 + 0xe8) & 4) != 0)) {
    return *(undefined4 *)(param_1 + 0xf0);
  }
  return uVar2;
}

