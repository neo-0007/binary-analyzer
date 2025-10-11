
void ossl_policy_tree_find_sk(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 *local_58 [4];
  undefined1 local_38 [8];
  undefined8 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_38;
  local_30 = param_2;
  uVar1 = OPENSSL_sk_find(param_1,local_58);
  OPENSSL_sk_value(param_1,uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

