
int _IO_wmarker_delta(long param_1)

{
  uint *puVar1;
  long *plVar2;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 == (uint *)0x0) {
    return -1;
  }
  plVar2 = *(long **)(puVar1 + 0x28);
  if ((*puVar1 & 0x100) == 0) {
    return *(int *)(param_1 + 0x10) - (int)(*plVar2 - plVar2[2] >> 2);
  }
  return *(int *)(param_1 + 0x10) - (int)(*plVar2 - plVar2[1] >> 2);
}

