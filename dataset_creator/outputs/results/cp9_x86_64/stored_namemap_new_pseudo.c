
void stored_namemap_new(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)ossl_namemap_new();
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

