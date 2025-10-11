
undefined4 ossl_lib_ctx_run_once(undefined8 param_1,uint param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = ossl_lib_ctx_get_concrete();
  if ((lVar5 != 0) && (iVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar5 + 0x198)), iVar3 != 0))
  {
    lVar1 = (ulong)param_2 + 0x68;
    if (*(int *)(lVar5 + 0x1a0 + (ulong)param_2 * 4) != 0) {
      uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar1 * 4);
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x198));
      return uVar4;
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x198));
    iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar5 + 0x198));
    if (iVar3 != 0) {
      if (*(int *)(lVar5 + lVar1 * 4) != 0) {
        uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar1 * 4);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x198));
        return uVar4;
      }
      uVar4 = (*param_3)(lVar5);
      *(undefined4 *)(lVar5 + lVar1 * 4) = 1;
      uVar2 = *(undefined8 *)(lVar5 + 0x198);
      *(undefined4 *)(lVar5 + 0xc + lVar1 * 4) = uVar4;
      CRYPTO_THREAD_unlock(uVar2);
      return uVar4;
    }
  }
  return 0;
}

