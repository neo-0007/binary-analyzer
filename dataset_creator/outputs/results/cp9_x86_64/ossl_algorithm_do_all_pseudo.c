
void ossl_algorithm_do_all
               (undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_30 = param_7;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  if (param_3 == 0) {
    ossl_provider_doall_activated(param_1,algorithm_do_this,&local_58);
  }
  else {
    uVar1 = ossl_provider_libctx(param_3);
    lVar2 = ossl_lib_ctx_get_concrete(param_1);
    lVar3 = ossl_lib_ctx_get_concrete(uVar1);
    if (lVar2 == lVar3) {
      local_58 = uVar1;
      algorithm_do_this(param_3,&local_58);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

