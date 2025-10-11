
undefined8 EVP_ASYM_CIPHER_up_ref(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}

