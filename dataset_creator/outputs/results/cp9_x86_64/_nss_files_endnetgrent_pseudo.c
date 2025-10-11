
undefined8 _nss_files_endnetgrent(long param_1)

{
  free(*(void **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 1;
}

