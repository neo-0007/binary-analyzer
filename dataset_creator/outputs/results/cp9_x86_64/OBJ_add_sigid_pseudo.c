
int OBJ_add_sigid(int signid,int dig_id,int pkey_id)

{
  long lVar1;
  int iVar2;
  int *ptr;
  
  if (((sig_app != 0) || (sig_app = OPENSSL_sk_new(sig_sk_cmp), sig_app != 0)) &&
     ((sigx_app != 0 || (sigx_app = OPENSSL_sk_new(sigx_cmp), sigx_app != 0)))) {
    ptr = (int *)CRYPTO_malloc(0xc,"../crypto/objects/obj_xref.c",0x6a);
    if (ptr == (int *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/objects/obj_xref.c",0x6b,"OBJ_add_sigid");
      ERR_set_error(8,0xc0100,0);
    }
    else {
      *ptr = signid;
      lVar1 = sig_app;
      ptr[1] = dig_id;
      ptr[2] = pkey_id;
      iVar2 = OPENSSL_sk_push(lVar1,ptr);
      if (iVar2 == 0) {
        CRYPTO_free(ptr);
        return 0;
      }
      iVar2 = OPENSSL_sk_push(sigx_app,ptr);
      if (iVar2 != 0) {
        OPENSSL_sk_sort(sig_app);
        OPENSSL_sk_sort(sigx_app);
        return 1;
      }
    }
  }
  return 0;
}

