
undefined4 ossl_namemap_name2num_n(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) || (param_1 = ossl_namemap_stored(0), param_1 != 0)) &&
     (iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = namemap_name2num_n(param_1,param_2,param_3);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  return 0;
}

