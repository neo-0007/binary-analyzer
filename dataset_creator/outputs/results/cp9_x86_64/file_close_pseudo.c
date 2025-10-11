
undefined8 file_close(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    BIO_free(*(BIO **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      OPENSSL_DIR_end(param_1 + 0x18);
    }
  }
  free_file_ctx_part_0(param_1);
  return 1;
}

