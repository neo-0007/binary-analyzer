
undefined8 engine_add_dynamic_id(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == 0) || (param_2 == 0 && *(long *)(param_1 + 0xd8) == 0)) ||
     ((param_3 != 0 && (iVar3 = CRYPTO_THREAD_write_lock(global_engine_lock), iVar3 == 0)))) {
    return 0;
  }
  lVar1 = engine_dyn_list_head;
  lVar2 = engine_dyn_list_head;
  if (param_2 == 0) {
LAB_0050ca31:
    if (lVar1 == 0) {
      lVar2 = param_1;
      if (engine_dyn_list_tail == 0) goto LAB_0050ca57;
    }
    else if ((engine_dyn_list_tail != 0) && (*(long *)(engine_dyn_list_tail + 0xd0) == 0)) {
      *(long *)(engine_dyn_list_tail + 0xd0) = param_1;
      lVar2 = engine_dyn_list_head;
LAB_0050ca57:
      engine_dyn_list_head = lVar2;
      *(long *)(param_1 + 200) = engine_dyn_list_tail;
      uVar4 = 1;
      engine_dyn_list_tail = param_1;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      goto joined_r0x0050ca79;
    }
  }
  else {
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xc0)) {
      if (param_2 == *(long *)(lVar2 + 0xd8)) goto LAB_0050ca05;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      *(long *)(param_1 + 0xd8) = param_2;
      goto LAB_0050ca31;
    }
  }
LAB_0050ca05:
  uVar4 = 0;
joined_r0x0050ca79:
  if (param_3 != 0) {
    CRYPTO_THREAD_unlock(global_engine_lock);
    return uVar4;
  }
  return uVar4;
}

