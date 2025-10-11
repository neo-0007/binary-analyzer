
void init_thread_stop_part_0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *ptr;
  
  iVar3 = CRYPTO_THREAD_run_once(&tevent_register_runonce,create_global_tevent_register_ossl_);
  lVar2 = glob_tevent_reg;
  if (((iVar3 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) && (glob_tevent_reg != 0)) {
    iVar3 = CRYPTO_THREAD_write_lock(*(undefined8 *)(glob_tevent_reg + 8));
    if (iVar3 != 0) {
      pvVar5 = (void *)*param_2;
      pvVar4 = (void *)0x0;
      while (ptr = pvVar5, pvVar5 != (void *)0x0) {
        while ((param_1 != 0 && (param_1 != *(long *)((long)ptr + 8)))) {
          plVar1 = (long *)((long)ptr + 0x18);
          pvVar4 = ptr;
          ptr = (void *)*plVar1;
          if ((void *)*plVar1 == (void *)0x0) goto LAB_0041923f;
        }
        (**(code **)((long)ptr + 0x10))();
        if (pvVar4 == (void *)0x0) {
          *param_2 = *(long *)((long)ptr + 0x18);
        }
        else {
          *(long *)((long)pvVar4 + 0x18) = *(long *)((long)ptr + 0x18);
        }
        pvVar5 = *(void **)((long)ptr + 0x18);
        CRYPTO_free(ptr);
      }
LAB_0041923f:
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 8));
      return;
    }
  }
  return;
}

