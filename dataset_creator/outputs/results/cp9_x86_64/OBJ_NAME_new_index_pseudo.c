
int OBJ_NAME_new_index(hash_func *hash_func,cmp_func *cmp_func,free_func *free_func)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar2 = OBJ_NAME_init();
  if ((iVar2 == 0) || (iVar2 = CRYPTO_THREAD_write_lock(obj_lock), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    if ((name_funcs_stack == 0) && (name_funcs_stack = OPENSSL_sk_new_null(), name_funcs_stack == 0)
       ) {
      iVar2 = 0;
    }
    else {
      iVar2 = names_type_num;
      names_type_num = names_type_num + 1;
      iVar3 = OPENSSL_sk_num(name_funcs_stack);
      if (iVar3 < names_type_num) {
        do {
          puVar5 = (undefined8 *)CRYPTO_zalloc(0x18,"../crypto/objects/o_names.c",0x5a);
          lVar1 = name_funcs_stack;
          if (puVar5 == (undefined8 *)0x0) {
            ERR_new();
            iVar2 = 0;
            ERR_set_debug("../crypto/objects/o_names.c",0x5c,"OBJ_NAME_new_index");
            ERR_set_error(8,0xc0100,0);
            goto LAB_004293a5;
          }
          *puVar5 = ossl_lh_strcasehash;
          puVar5[1] = OPENSSL_strcasecmp;
          iVar4 = OPENSSL_sk_push(lVar1,puVar5);
          if (iVar4 == 0) {
            ERR_new();
            iVar2 = 0;
            ERR_set_debug("../crypto/objects/o_names.c",0x65,"OBJ_NAME_new_index");
            ERR_set_error(8,0xc0100,0);
            CRYPTO_free(puVar5);
            goto LAB_004293a5;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < names_type_num);
      }
      puVar5 = (undefined8 *)OPENSSL_sk_value(name_funcs_stack,iVar2);
      if (hash_func != (hash_func *)0x0) {
        *puVar5 = hash_func;
      }
      if (cmp_func != (cmp_func *)0x0) {
        puVar5[1] = cmp_func;
      }
      if (free_func != (free_func *)0x0) {
        puVar5[2] = free_func;
      }
    }
LAB_004293a5:
    CRYPTO_THREAD_unlock(obj_lock);
  }
  return iVar2;
}

