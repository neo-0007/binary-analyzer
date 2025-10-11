
undefined8 * pkey_asn1_find(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined4 *local_160;
  undefined4 local_158 [82];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = local_158;
  local_158[0] = param_1;
  if (app_methods != 0) {
    iVar1 = OPENSSL_sk_find();
    if (-1 < iVar1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(app_methods,iVar1);
      goto LAB_0049e7d7;
    }
  }
  puVar2 = (undefined8 *)OBJ_bsearch_(&local_160,standard_methods,0x10,8,ameth_cmp_BSEARCH_CMP_FN);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
  }
LAB_0049e7d7:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

