
undefined8 OSSL_PARAM_set_octet_string(long param_1,void *param_2,size_t param_3)

{
  if (param_1 != 0) {
    if (param_2 == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    *(size_t *)(param_1 + 0x20) = param_3;
    if (*(void **)(param_1 + 0x10) == (void *)0x0) {
      return 1;
    }
    if ((*(int *)(param_1 + 8) == 5) && (param_3 <= *(ulong *)(param_1 + 0x18))) {
      memcpy(*(void **)(param_1 + 0x10),param_2,param_3);
      return 1;
    }
  }
  return 0;
}

