
void _dl_unmap(long param_1)

{
  munmap(*(void **)(param_1 + 0x358),*(long *)(param_1 + 0x360) - (long)*(void **)(param_1 + 0x358))
  ;
  return;
}

