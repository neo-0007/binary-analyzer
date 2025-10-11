
bool setup_tbuf(long param_1)

{
  int num;
  void *pvVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    num = RSA_size(*(RSA **)(param_1 + 0x10));
    pvVar1 = CRYPTO_malloc(num,"../providers/implementations/signature/rsa_sig.c",0x1e7);
    *(void **)(param_1 + 0xb8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1e8,"setup_tbuf");
      ERR_set_error(0x39,0xc0100,0);
    }
    return pvVar1 != (void *)0x0;
  }
  return true;
}

