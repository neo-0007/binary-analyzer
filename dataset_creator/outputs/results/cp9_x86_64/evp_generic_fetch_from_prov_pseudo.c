
undefined8
evp_generic_fetch_from_prov
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_88 [4];
  long local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = ossl_provider_libctx();
  local_68 = 0;
  uVar1 = inner_evp_generic_fetch_constprop_0
                    (local_88,param_1,param_2,0,param_3,param_4,param_5,param_6,param_7);
  if (local_68 != 0) {
    ossl_method_store_free();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

