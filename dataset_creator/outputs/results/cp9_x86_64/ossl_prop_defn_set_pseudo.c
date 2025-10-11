
undefined8 ossl_prop_defn_set(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 *ptr;
  void *ptr_00;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,2,property_defns_method);
  if (lVar2 != 0) {
    uVar4 = 1;
    if (param_2 == (char *)0x0) goto LAB_0054f4dd;
    iVar1 = ossl_lib_ctx_write_lock(param_1);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        local_58[0] = param_2;
        OPENSSL_LH_delete(lVar2,local_58);
      }
      else {
        sVar3 = strlen(param_2);
        ptr = (undefined8 *)CRYPTO_malloc((int)sVar3 + 0x18,"../crypto/property/defn_cache.c",0x71);
        if (ptr == (undefined8 *)0x0) {
LAB_0054f51e:
          uVar4 = 0;
          CRYPTO_free(ptr);
        }
        else {
          ptr[1] = param_3;
          *ptr = ptr + 2;
          memcpy(ptr + 2,param_2,sVar3 + 1);
          ptr_00 = (void *)OPENSSL_LH_insert(lVar2,ptr);
          if (ptr_00 == (void *)0x0) {
            iVar1 = OPENSSL_LH_error(lVar2);
            if (iVar1 != 0) goto LAB_0054f51e;
          }
          else {
            ossl_property_free(*(undefined8 *)((long)ptr_00 + 8));
            CRYPTO_free(ptr_00);
          }
        }
      }
      ossl_lib_ctx_unlock(param_1);
      goto LAB_0054f4dd;
    }
  }
  uVar4 = 0;
LAB_0054f4dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

