
void FUN_007073e0(void)

{
  undefined *puVar1;
  
  if (DAT_0094691c == 0) {
    DAT_0094691c = 1;
    puVar1 = PTR_DAT_0093dac0;
    if (PTR_DAT_0093dac0 != (undefined *)0x0) {
      do {
        *(uint *)(puVar1 + 0x74) = *(uint *)(puVar1 + 0x74) | 0x80;
        puVar1 = *(undefined **)(puVar1 + 0x68);
      } while (puVar1 != (undefined *)0x0);
    }
  }
  return;
}

