
undefined8 ASYNC_pause_job(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = async_get_ctx();
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x3c8), lVar1 != 0)) &&
     (*(int *)(lVar2 + 0x3d0) == 0)) {
    *(undefined4 *)(lVar1 + 0x3dc) = 1;
    swapcontext(lVar1,lVar2);
    async_wait_ctx_reset_counts(*(undefined8 *)(lVar1 + 0x3e0));
    return 1;
  }
  return 1;
}

