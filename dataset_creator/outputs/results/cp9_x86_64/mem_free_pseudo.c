
undefined8 mem_free(long param_1)

{
  undefined8 *ptr;
  BUF_MEM *a;
  
  if (param_1 != 0) {
    ptr = *(undefined8 **)(param_1 + 0x40);
    if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
       (ptr != (undefined8 *)0x0)) {
      a = (BUF_MEM *)*ptr;
      if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
        a->data = (char *)0x0;
      }
      BUF_MEM_free(a);
    }
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}

