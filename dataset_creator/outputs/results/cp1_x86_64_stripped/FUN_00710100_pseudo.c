
void FUN_00710100(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  
  if (DAT_0094a9a8 != '\0') {
    DAT_0094a9b8 = 0;
    puVar1 = *(undefined4 **)(in_FS_OFFSET + -0x20);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 0x220) = 1;
    }
    DAT_0094a9b0 = (undefined4 *)0x0;
    puVar3 = &DAT_0093e160;
    do {
      while (*puVar3 = 0, puVar1 != puVar3) {
        *(undefined8 *)(puVar3 + 0x220) = 0;
        puVar2 = puVar3;
        *(undefined4 **)(puVar3 + 0x21e) = DAT_0094a9b0;
        DAT_0094a9b0 = puVar2;
        puVar3 = *(undefined4 **)(puVar3 + 0x21c);
        if (puVar3 == &DAT_0093e160) {
          DAT_0094a9ac = 0;
          return;
        }
      }
      puVar3 = *(undefined4 **)(puVar1 + 0x21c);
    } while (puVar3 != &DAT_0093e160);
    DAT_0094a9ac = 0;
  }
  return;
}

