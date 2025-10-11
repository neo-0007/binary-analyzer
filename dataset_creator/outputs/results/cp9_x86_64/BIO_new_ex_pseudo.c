
undefined8 * BIO_new_ex(undefined8 param_1,long param_2)

{
  CRYPTO_EX_DATA *ad;
  int iVar1;
  undefined8 *obj;
  long lVar2;
  
  obj = (undefined8 *)CRYPTO_zalloc(0x88,"../crypto/bio/bio_lib.c",0x52);
  if (obj == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x55,"BIO_new_ex");
    ERR_set_error(0x20,0xc0100,0);
    return (undefined8 *)0x0;
  }
  *obj = param_1;
  obj[1] = param_2;
  *(undefined4 *)((long)obj + 0x2c) = 1;
  LOCK();
  *(undefined4 *)(obj + 0xb) = 1;
  UNLOCK();
  ad = (CRYPTO_EX_DATA *)(obj + 0xe);
  iVar1 = CRYPTO_new_ex_data(0xc,obj,ad);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    obj[0x10] = lVar2;
    if (lVar2 != 0) {
      if (*(code **)(param_2 + 0x48) != (code *)0x0) {
        iVar1 = (**(code **)(param_2 + 0x48))(obj);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/bio/bio_lib.c",0x69,"BIO_new_ex");
          ERR_set_error(0x20,0xc0105,0);
          CRYPTO_free_ex_data(0xc,obj,ad);
          CRYPTO_THREAD_lock_free(obj[0x10]);
          goto LAB_004a8409;
        }
        if (*(long *)(param_2 + 0x48) != 0) {
          return obj;
        }
      }
      *(undefined4 *)(obj + 5) = 1;
      return obj;
    }
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",99,"BIO_new_ex");
    ERR_set_error(0x20,0xc0100,0);
    CRYPTO_free_ex_data(0xc,obj,ad);
  }
LAB_004a8409:
  CRYPTO_free(obj);
  return (undefined8 *)0x0;
}

