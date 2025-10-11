
undefined4 * OSSL_HTTP_REQ_CTX_new(long param_1,long param_2,int param_3)

{
  undefined4 *ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    ptr = (undefined4 *)CRYPTO_zalloc(0xc0,"../crypto/http/http_client.c",99);
    puVar2 = ptr;
    if (ptr != (undefined4 *)0x0) {
      *ptr = 0x1000;
      if (param_3 < 1) {
        param_3 = 0x1000;
      }
      ptr[4] = param_3;
      pvVar1 = CRYPTO_malloc(param_3,"../crypto/http/http_client.c",0x67);
      *(long *)(ptr + 6) = param_1;
      *(void **)(ptr + 2) = pvVar1;
      *(long *)(ptr + 8) = param_2;
      if (pvVar1 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
        CRYPTO_free(ptr);
      }
      else {
        *(undefined8 *)(ptr + 0x26) = 0x19000;
      }
    }
    return puVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/http/http_client.c",0x5f,"OSSL_HTTP_REQ_CTX_new");
  ERR_set_error(0x3d,0xc0102,0);
  return (undefined4 *)0x0;
}

