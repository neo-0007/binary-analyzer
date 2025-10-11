
void FUN_004b7700(void)

{
  long lVar1;
  
  lVar1 = FUN_004b7690();
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) | 8;
  }
  return;
}

