
undefined8 * __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  puVar1 = (undefined8 *)malloc(0x70);
  if ((puVar1 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)(anonymous_namespace)::pool::allocate(0x70),
     puVar1 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  *puVar1 = 0;
  puVar1[0xd] = 0;
  puVar3 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                       + 0x70U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return puVar1;
}

