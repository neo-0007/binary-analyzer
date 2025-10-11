
void CRYPTO_free(void *ptr)

{
  if ((code *)free_impl != CRYPTO_free) {
                    /* WARNING: Could not recover jumptable at 0x00419784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)free_impl)();
    return;
  }
  free(ptr);
  return;
}

