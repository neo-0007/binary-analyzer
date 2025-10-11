
void async_release_job(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&poolkey);
  if (puVar2 != (undefined8 *)0x0) {
    CRYPTO_free(*(void **)(param_1 + 0x3d0));
    uVar1 = *puVar2;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    OPENSSL_sk_push(uVar1,param_1);
    return;
  }
  ERR_new();
  ERR_set_debug("../crypto/async/async.c",0x8e,"async_release_job");
  ERR_set_error(0x33,0xc0103,0);
  return;
}

