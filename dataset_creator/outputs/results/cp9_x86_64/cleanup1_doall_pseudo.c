
void cleanup1_doall(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = (uint *)(lVar2 + 0x20);
  *puVar1 = *puVar1 | 0xd;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  return;
}

