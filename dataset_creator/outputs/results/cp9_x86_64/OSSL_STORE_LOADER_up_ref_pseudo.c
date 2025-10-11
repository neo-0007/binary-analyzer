
undefined8 OSSL_STORE_LOADER_up_ref(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    LOCK();
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    UNLOCK();
  }
  return 1;
}

