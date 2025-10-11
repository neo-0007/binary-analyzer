
int ossl_namemap_add_name_n(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  
  if ((((param_1 != 0) || (param_1 = ossl_namemap_stored(0), param_1 != 0)) &&
      (param_4 != 0 && param_3 != 0)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    iVar1 = namemap_name2num_n(param_1,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = namemap_add_name_n_part_0(param_1,param_2,param_3,param_4);
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
    }
    else {
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
    }
    return iVar1;
  }
  return 0;
}

