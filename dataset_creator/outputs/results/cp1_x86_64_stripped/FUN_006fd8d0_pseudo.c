
byte * FUN_006fd8d0(byte *param_1)

{
  undefined *puVar1;
  
  if (((param_1[0x74] & 1) != 0) && ((*param_1 & 8) != 0)) {
    puVar1 = &DAT_0093f460;
    if (0 < *(int *)(param_1 + 0xc0)) {
      puVar1 = &DAT_0093f160;
    }
    *(undefined **)(param_1 + 0xd8) = puVar1;
    *(undefined **)(*(long *)(param_1 + 0xa0) + 0xe0) = &DAT_0093f160;
  }
  return param_1;
}

