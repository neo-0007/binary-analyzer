
void engine_remove_dynamic_id(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((param_2 == 0 || (iVar3 = CRYPTO_THREAD_write_lock(global_engine_lock), iVar3 != 0)))) {
    lVar1 = *(long *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_1 + 200);
    }
    lVar2 = *(long *)(param_1 + 200);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0xd0) = lVar1;
    }
    if (param_1 == engine_dyn_list_head) {
      engine_dyn_list_head = *(long *)(param_1 + 0xd0);
    }
    if (param_1 != engine_dyn_list_tail) {
      lVar2 = engine_dyn_list_tail;
    }
    engine_dyn_list_tail = lVar2;
    if (param_2 != 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
      return;
    }
  }
  return;
}

