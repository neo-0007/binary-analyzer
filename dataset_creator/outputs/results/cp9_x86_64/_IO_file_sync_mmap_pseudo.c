
undefined8 _IO_file_sync_mmap(uint *param_1)

{
  __off64_t __offset;
  
  __offset = *(long *)(param_1 + 2) - *(long *)(param_1 + 0xe);
  if (*(long *)(param_1 + 2) != *(long *)(param_1 + 4)) {
    __offset = lseek64(param_1[0x1c],__offset,0);
    if (*(long *)(param_1 + 2) - *(long *)(param_1 + 0xe) != __offset) {
      *param_1 = *param_1 | 0x20;
      return 0xffffffff;
    }
  }
  *(__off64_t *)(param_1 + 0x24) = __offset;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
  return 0;
}

