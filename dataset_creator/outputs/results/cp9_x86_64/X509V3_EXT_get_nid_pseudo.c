
X509V3_EXT_METHOD * X509V3_EXT_get_nid(int nid)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  X509V3_EXT_METHOD *pXVar3;
  long in_FS_OFFSET;
  int *local_80;
  int local_78 [26];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = local_78;
  if (-1 < nid) {
    local_78[0] = nid;
    puVar2 = (undefined8 *)OBJ_bsearch_(&local_80,standard_exts,0x31,8,ext_cmp_BSEARCH_CMP_FN);
    if (puVar2 != (undefined8 *)0x0) {
      pXVar3 = (X509V3_EXT_METHOD *)*puVar2;
      goto LAB_0060bf15;
    }
    if (ext_list != 0) {
      uVar1 = OPENSSL_sk_find(ext_list,local_78);
      pXVar3 = (X509V3_EXT_METHOD *)OPENSSL_sk_value(ext_list,uVar1);
      goto LAB_0060bf15;
    }
  }
  pXVar3 = (X509V3_EXT_METHOD *)0x0;
LAB_0060bf15:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

