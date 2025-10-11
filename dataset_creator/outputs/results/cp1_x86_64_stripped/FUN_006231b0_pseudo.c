
undefined8 * FUN_006231b0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  puVar1 = (undefined8 *)FUN_007101b0(param_1 + 0x80);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_006230b0(param_1 + 0x80);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00623f30();
    }
  }
  *puVar1 = 0;
  puVar1[0xf] = 0;
  puVar3 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                       + 0x80U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return puVar1 + 0x10;
}

