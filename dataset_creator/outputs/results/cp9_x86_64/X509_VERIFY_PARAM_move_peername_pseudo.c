
void X509_VERIFY_PARAM_move_peername(long param_1,long param_2)

{
  void *ptr;
  void *pvVar1;
  
  ptr = *(void **)(param_1 + 0x48);
  if (param_2 == 0) {
    if (ptr != (void *)0x0) {
      CRYPTO_free(ptr);
      *(undefined8 *)(param_1 + 0x48) = 0;
      return;
    }
  }
  else {
    pvVar1 = *(void **)(param_2 + 0x48);
    if (pvVar1 != ptr) {
      CRYPTO_free(ptr);
      *(void **)(param_1 + 0x48) = pvVar1;
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}

