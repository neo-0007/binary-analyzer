
bool ASYNC_WAIT_CTX_set_wait_fd
               (long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"../crypto/async/async_wait.c",0x32);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/async/async_wait.c",0x33,"ASYNC_WAIT_CTX_set_wait_fd");
    ERR_set_error(0x33,0xc0100,0);
  }
  else {
    lVar1 = *param_1;
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = param_3;
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    *(undefined4 *)(puVar2 + 4) = 1;
    puVar2[5] = lVar1;
    param_1[1] = param_1[1] + 1;
    *param_1 = (long)puVar2;
  }
  return puVar2 != (undefined8 *)0x0;
}

