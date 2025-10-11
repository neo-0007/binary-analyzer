
uint _dl_higher_prime_number(ulong param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  
  puVar3 = primes_0;
  puVar1 = (uint *)"/proc/self/exe";
  while (puVar2 = puVar1, puVar2 != (uint *)puVar3) {
    puVar1 = (uint *)((long)puVar3 +
                     (((long)puVar2 - (long)puVar3 >> 2) - ((long)puVar2 - (long)puVar3 >> 0x3f) >>
                     1) * 4);
    if (*puVar1 < param_1) {
      puVar3 = (undefined1 *)(puVar1 + 1);
      puVar1 = puVar2;
    }
  }
  return *puVar2;
}

