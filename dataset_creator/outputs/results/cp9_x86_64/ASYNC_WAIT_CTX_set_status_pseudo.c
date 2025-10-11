
undefined8 ASYNC_WAIT_CTX_set_status(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 1;
}

