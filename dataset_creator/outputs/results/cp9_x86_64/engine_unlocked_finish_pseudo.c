
int engine_unlocked_finish(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x68))();
    }
    else {
      CRYPTO_THREAD_unlock(global_engine_lock);
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
      iVar3 = CRYPTO_THREAD_write_lock(global_engine_lock);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = 1;
  }
  iVar3 = engine_free_util(param_1,0);
  if (iVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_init.c",0x4a,"engine_unlocked_finish");
    ERR_set_error(0x26,0x6a,0);
    return 0;
  }
  return iVar2;
}

