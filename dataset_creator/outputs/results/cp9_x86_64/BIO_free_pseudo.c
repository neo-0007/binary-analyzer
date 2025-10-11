
int BIO_free(BIO *a)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  if (a == (BIO *)0x0) {
    return 0;
  }
  LOCK();
  puVar1 = &a->num_write;
  uVar4 = *puVar1;
  *(int *)puVar1 = (int)*puVar1 + -1;
  UNLOCK();
  if (((int)uVar4 != 1) && (0 < (int)uVar4 + -1)) {
    return 1;
  }
  if (((a->cb_arg != (char *)0x0) || (lVar3._0_4_ = a->init, lVar3._4_4_ = a->shutdown, lVar3 != 0))
     && (iVar5 = bio_call_callback(a,1,0,0,0,0,1,0), iVar5 < 1)) {
    return 0;
  }
  if ((a->callback != (_func_603 *)0x0) &&
     (pcVar2 = *(code **)(a->callback + 0x50), pcVar2 != (code *)0x0)) {
    (*pcVar2)(a);
  }
  CRYPTO_free_ex_data(0xc,a,(CRYPTO_EX_DATA *)(a + 1));
  CRYPTO_THREAD_lock_free(a[1].cb_arg);
  CRYPTO_free(a);
  return 1;
}

