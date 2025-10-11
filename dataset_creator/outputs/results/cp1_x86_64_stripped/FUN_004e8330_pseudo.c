
int FUN_004e8330(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = FUN_004ee2d0(*(undefined8 *)(param_1 + 0x20));
  iVar1 = FUN_004ef7f0(uVar2);
  iVar3 = 0x100;
  if ((((iVar1 < 0x200) && (iVar3 = 0xc0, iVar1 < 0x180)) && (iVar3 = 0x80, iVar1 < 0x100)) &&
     ((iVar3 = 0x70, iVar1 < 0xe0 && (iVar3 = 0x50, iVar1 < 0xa0)))) {
    iVar3 = iVar1 / 2;
  }
  return iVar3;
}

