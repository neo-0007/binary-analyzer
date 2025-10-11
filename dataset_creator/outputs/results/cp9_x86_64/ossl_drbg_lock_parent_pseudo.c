
undefined4 ossl_drbg_lock_parent(long param_1)

{
  int iVar1;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
     (iVar1 = (**(code **)(param_1 + 0x40))(*(long *)(param_1 + 0x30)), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x46,"ossl_drbg_lock_parent");
    ERR_set_error(0x39,0xb6,0);
    return 0;
  }
  return 1;
}

