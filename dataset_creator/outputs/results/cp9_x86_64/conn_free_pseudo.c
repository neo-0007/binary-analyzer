
undefined8 conn_free(long param_1)

{
  int __fd;
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  __fd = *(int *)(param_1 + 0x38);
  if (__fd != -1) {
    if (*piVar1 == 5) {
      shutdown(__fd,2);
      __fd = *(int *)(param_1 + 0x38);
    }
    BIO_closesocket(__fd);
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  BIO_CONNECT_free(piVar1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

