
uint FUN_004a10a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 0xfffffffb) != 1) && (*(long *)(param_1 + 2) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

