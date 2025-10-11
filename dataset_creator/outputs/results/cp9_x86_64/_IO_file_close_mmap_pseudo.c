
void _IO_file_close_mmap(long param_1)

{
  munmap(*(void **)(param_1 + 0x38),*(long *)(param_1 + 0x40) - (long)*(void **)(param_1 + 0x38));
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  __close_nocancel(*(undefined4 *)(param_1 + 0x70));
  return;
}

