
undefined8 * FUN_00779e40(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  puVar1 = (undefined8 *)FUN_007101b0(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    puVar3 = puVar1 + 6;
    for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    *(undefined1 *)((long)puVar1 + 0xbc) = 1;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined1 (*) [16])(puVar1 + 0x19) = (undefined1  [16])0x0;
  }
  return puVar1;
}

