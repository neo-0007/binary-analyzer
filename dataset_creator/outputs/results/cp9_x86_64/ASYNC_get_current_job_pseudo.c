
undefined8 ASYNC_get_current_job(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = async_get_ctx();
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x3c8);
    }
  }
  return 0;
}

