
long * get_and_lock(long *param_1,uint param_2)

{
  int iVar1;
  
  if (0x11 < param_2) {
    ERR_new();
    ERR_set_debug("../crypto/ex_data.c",0x23,"get_and_lock");
    ERR_set_error(0xf,0x80106,0);
    return (long *)0x0;
  }
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 != 0)) {
    return param_1 + (int)(param_2 + 1);
  }
  return (long *)0x0;
}

