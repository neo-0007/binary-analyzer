
void self_test_setparams(undefined8 *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[3] == 0) {
    lVar1 = 0;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_58,"st-phase",*param_1,0);
    param_1[4] = local_58;
    param_1[5] = uStack_50;
    param_1[6] = local_48;
    param_1[7] = uStack_40;
    param_1[8] = local_38;
    OSSL_PARAM_construct_utf8_string(&local_58,"st-type",param_1[1],0);
    param_1[9] = local_58;
    param_1[10] = uStack_50;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_40;
    param_1[0xd] = local_38;
    OSSL_PARAM_construct_utf8_string(&local_58,"st-desc",param_1[2],0);
    param_1[0xe] = local_58;
    param_1[0xf] = uStack_50;
    param_1[0x10] = local_48;
    param_1[0x11] = uStack_40;
    param_1[0x12] = local_38;
    lVar1 = 3;
  }
  OSSL_PARAM_construct_end(&local_58);
  param_1[lVar1 * 5 + 4] = local_58;
  param_1[lVar1 * 5 + 5] = uStack_50;
  param_1[lVar1 * 5 + 6] = local_48;
  param_1[lVar1 * 5 + 7] = uStack_40;
  param_1[lVar1 * 5 + 8] = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

