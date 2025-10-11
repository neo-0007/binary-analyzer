
undefined8 FUN_004722f0(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if ((param_1 & 0x80) != 0) {
    uVar1 = (param_1 & 7) + 8;
  }
  return *(undefined8 *)(&DAT_008fafe0 + (long)(int)uVar1 * 8);
}

