
void FUN_00708b10(byte *param_1)

{
  if ((*(long *)(param_1 + 0x38) != 0) && ((*param_1 & 1) == 0)) {
    FUN_007104f0();
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00707570(param_1,0);
  return;
}

