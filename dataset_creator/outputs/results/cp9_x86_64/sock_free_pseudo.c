
undefined8 sock_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return 1;
  }
  return 0;
}

