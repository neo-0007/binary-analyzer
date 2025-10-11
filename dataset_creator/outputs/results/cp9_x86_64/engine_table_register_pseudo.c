
int engine_table_register
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,uint param_5,
              int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *ptr;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = CRYPTO_THREAD_write_lock(global_engine_lock);
  if (iVar2 == 0) goto LAB_005f1bf4;
  if (*param_1 == 0) {
    lVar4 = OPENSSL_LH_new(engine_pile_hash,engine_pile_cmp);
    if (lVar4 != 0) {
      *param_1 = lVar4;
      engine_cleanup_add_first(param_2);
      goto LAB_005f1a89;
    }
LAB_005f1bd8:
    iVar2 = 0;
  }
  else {
LAB_005f1a89:
    if (param_5 != 0) {
      puVar1 = param_4 + param_5;
      do {
        while( true ) {
          local_68[0] = *param_4;
          puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_68);
          if (puVar3 == (undefined4 *)0x0) {
            ptr = (undefined4 *)CRYPTO_malloc(0x20,"../crypto/engine/eng_table.c",0x67);
            if (ptr == (undefined4 *)0x0) goto LAB_005f1bd8;
            ptr[6] = 1;
            *ptr = *param_4;
            lVar4 = OPENSSL_sk_new_null();
            *(long *)(ptr + 2) = lVar4;
            if (lVar4 == 0) {
              CRYPTO_free(ptr);
              iVar2 = 0;
              goto LAB_005f1bdb;
            }
            *(undefined8 *)(ptr + 4) = 0;
            OPENSSL_LH_insert(*param_1,ptr);
            puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_68);
            if (ptr != puVar3) {
              OPENSSL_sk_free(*(undefined8 *)(ptr + 2));
              CRYPTO_free(ptr);
              goto LAB_005f1bd8;
            }
          }
          OPENSSL_sk_delete_ptr(*(undefined8 *)(puVar3 + 2),param_3);
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(puVar3 + 2),param_3);
          if (iVar2 == 0) goto LAB_005f1bd8;
          puVar3[6] = 0;
          if (param_6 == 0) break;
          iVar2 = engine_unlocked_init(param_3);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/engine/eng_table.c",0x84,"engine_table_register");
            ERR_set_error(0x26,0x6d,0);
            iVar2 = 0;
            goto LAB_005f1bdb;
          }
          if (*(long *)(puVar3 + 4) != 0) {
            engine_unlocked_finish(*(long *)(puVar3 + 4),0);
          }
          *(undefined8 *)(puVar3 + 4) = param_3;
          param_4 = param_4 + 1;
          puVar3[6] = 1;
          if (puVar1 == param_4) goto LAB_005f1b3c;
        }
        param_4 = param_4 + 1;
      } while (puVar1 != param_4);
    }
LAB_005f1b3c:
    iVar2 = 1;
  }
LAB_005f1bdb:
  CRYPTO_THREAD_unlock(global_engine_lock);
LAB_005f1bf4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

