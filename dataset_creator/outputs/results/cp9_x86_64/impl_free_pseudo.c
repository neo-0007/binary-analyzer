
void impl_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    (**(code **)((long)param_1 + 0x20))(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

