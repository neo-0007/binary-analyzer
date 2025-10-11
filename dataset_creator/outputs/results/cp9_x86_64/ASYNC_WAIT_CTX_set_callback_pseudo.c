
undefined8 ASYNC_WAIT_CTX_set_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    return 1;
  }
  return 0;
}

