
uint FUN_007b9450(ulong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)&DAT_00841e00;
  puVar1 = (uint *)"/proc/self/exe";
  while (puVar2 = puVar1, puVar2 != puVar3) {
    puVar1 = puVar3 + (((long)puVar2 - (long)puVar3 >> 2) - ((long)puVar2 - (long)puVar3 >> 0x3f) >>
                      1);
    if (*puVar1 < param_1) {
      puVar3 = puVar1 + 1;
      puVar1 = puVar2;
    }
  }
  return *puVar2;
}

