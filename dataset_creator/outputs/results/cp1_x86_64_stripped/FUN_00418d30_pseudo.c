
void FUN_00418d30(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00418cb0();
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

