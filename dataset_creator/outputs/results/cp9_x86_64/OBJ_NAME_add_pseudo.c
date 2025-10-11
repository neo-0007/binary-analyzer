
int OBJ_NAME_add(char *name,int type,char *data)

{
  undefined8 uVar1;
  int iVar2;
  uint *ptr;
  int *ptr_00;
  long lVar3;
  int iVar4;
  
  iVar2 = OBJ_NAME_init();
  if (iVar2 != 0) {
    ptr = (uint *)CRYPTO_malloc(0x18,"../crypto/objects/o_names.c",200);
    if (ptr != (uint *)0x0) {
      *(char **)(ptr + 2) = name;
      uVar1 = obj_lock;
      *(char **)(ptr + 4) = data;
      ptr[1] = type & 0x8000;
      *ptr = type & 0xffff7fff;
      iVar2 = CRYPTO_THREAD_write_lock(uVar1);
      if (iVar2 != 0) {
        ptr_00 = (int *)OPENSSL_LH_insert(names_lh,ptr);
        if (ptr_00 == (int *)0x0) {
          iVar4 = 1;
          iVar2 = OPENSSL_LH_error(names_lh);
          if (iVar2 != 0) {
            iVar4 = 0;
            CRYPTO_free(ptr);
          }
        }
        else {
          if (name_funcs_stack != 0) {
            iVar2 = OPENSSL_sk_num();
            if (*ptr_00 < iVar2) {
              lVar3 = OPENSSL_sk_value(name_funcs_stack);
              (**(code **)(lVar3 + 0x10))
                        (*(undefined8 *)(ptr_00 + 2),*ptr_00,*(undefined8 *)(ptr_00 + 4));
            }
          }
          iVar4 = 1;
          CRYPTO_free(ptr_00);
        }
        CRYPTO_THREAD_unlock(obj_lock);
        return iVar4;
      }
      CRYPTO_free(ptr);
      return 0;
    }
  }
  return 0;
}

