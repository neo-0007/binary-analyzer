
void OSSL_STORE_LOADER_do_all_provided(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68 [4];
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_68[0] = param_1;
  inner_loader_fetch_constprop_0(local_68,0,0,0);
  local_78 = param_2;
  local_70 = param_3;
  if (local_48 != 0) {
    ossl_method_store_do_all(local_48,do_one,&local_78);
  }
  uVar1 = ossl_lib_ctx_get_data(param_1,0xf,loader_store_method);
  ossl_method_store_do_all(uVar1,do_one,&local_78);
  if (local_48 != 0) {
    ossl_method_store_free();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

