
bool FUN_00488c40(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    FUN_0054f630(param_1 + 0xf8,param_2,0x10);
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    return true;
  }
  iVar1 = FUN_0054f480(param_1 + 0xf8,param_2,*(undefined8 *)(param_1 + 0x18));
  return iVar1 == 0;
}

