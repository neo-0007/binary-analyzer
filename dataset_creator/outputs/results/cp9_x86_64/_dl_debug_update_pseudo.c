
void _dl_debug_update(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &_r_debug;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 * 0xa0 + 0x931bf0);
  }
  if (*(long *)(puVar1 + 2) != 0) {
    return;
  }
  *(undefined **)(puVar1 + 2) = (&_dl_ns)[param_1 * 0x14];
  return;
}

