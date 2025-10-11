
void FUN_00418c90(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    *param_1 = *param_1 & 0xfe;
    FUN_00418c30();
    return;
  }
  return;
}

