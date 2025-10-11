
long ossl_engine_table_select(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_58 [10];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OPENSSL_init_crypto(0x40,0);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ERR_set_mark();
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    if (((iVar1 == 0) || (*param_1 == 0)) ||
       (local_58[0] = param_2, lVar2 = OPENSSL_LH_retrieve(*param_1,local_58), lVar2 == 0)) {
      lVar3 = 0;
    }
    else {
      if (((*(long *)(lVar2 + 0x10) == 0) || (iVar1 = engine_unlocked_init(), iVar1 == 0)) &&
         (iVar1 = *(int *)(lVar2 + 0x18), *(int *)(lVar2 + 0x18) == 0)) {
        do {
          iVar4 = iVar1 + 1;
          lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),iVar1);
          if (lVar3 == 0) goto LAB_005f1dfa;
          iVar1 = iVar4;
        } while (((*(int *)(lVar3 + 0xa0) < 1) && (((byte)table_flags & 1) != 0)) ||
                (iVar4 = engine_unlocked_init(lVar3), iVar4 == 0));
        if ((*(long *)(lVar2 + 0x10) != lVar3) && (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0))
        {
          if (*(long *)(lVar2 + 0x10) != 0) {
            engine_unlocked_finish(*(long *)(lVar2 + 0x10),0);
          }
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x10);
      }
LAB_005f1dfa:
      *(undefined4 *)(lVar2 + 0x18) = 1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    ERR_pop_to_mark();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}

