
undefined8 OSSL_DECODER_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_48 [4];
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_48[0] = param_1;
  uVar1 = inner_ossl_decoder_fetch_constprop_0(local_48,0,param_2,param_3);
  if (local_28 != 0) {
    ossl_method_store_free();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

