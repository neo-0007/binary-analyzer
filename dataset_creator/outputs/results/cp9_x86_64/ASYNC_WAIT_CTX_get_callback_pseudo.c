
undefined8 ASYNC_WAIT_CTX_get_callback(long param_1,long *param_2,undefined8 *param_3)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *param_2 = *(long *)(param_1 + 0x18);
    *param_3 = *(undefined8 *)(param_1 + 0x20);
    return 1;
  }
  return 0;
}

