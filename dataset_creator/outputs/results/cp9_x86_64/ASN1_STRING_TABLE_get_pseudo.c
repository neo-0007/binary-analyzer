
ASN1_STRING_TABLE * ASN1_STRING_TABLE_get(int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  long in_FS_OFFSET;
  int local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OPENSSL_init_crypto(0x40,0);
  local_48[0] = nid;
  if (stable != 0) {
    iVar1 = OPENSSL_sk_find(stable,local_48);
    if (-1 < iVar1) {
      pAVar2 = (ASN1_STRING_TABLE *)OPENSSL_sk_value(stable,iVar1);
      goto LAB_005a3e96;
    }
  }
  pAVar2 = (ASN1_STRING_TABLE *)
           OBJ_bsearch_(local_48,tbl_standard,0x1c,0x28,table_cmp_BSEARCH_CMP_FN);
LAB_005a3e96:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

