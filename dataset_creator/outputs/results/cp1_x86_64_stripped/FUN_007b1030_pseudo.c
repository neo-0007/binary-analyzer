
void FUN_007b1030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_007101b0(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
  return;
}

