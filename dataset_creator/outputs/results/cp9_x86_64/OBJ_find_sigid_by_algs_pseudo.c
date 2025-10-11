
int OBJ_find_sigid_by_algs(int *psignid,int dig_nid,int pkey_nid)

{
  int iVar1;
  undefined1 **ppuVar2;
  long in_FS_OFFSET;
  undefined1 *local_28;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  long local_10;
  
  ppuVar2 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = local_1c;
  local_18 = dig_nid;
  local_14 = pkey_nid;
  if (sigx_app == 0) {
LAB_0042b338:
    ppuVar2 = (undefined1 **)OBJ_bsearch_(&local_28,sigoid_srt_xref,0x2c,8,sigx_cmp_BSEARCH_CMP_FN);
    iVar1 = 0;
    if (ppuVar2 == (undefined1 **)0x0) goto LAB_0042b372;
  }
  else {
    iVar1 = OPENSSL_sk_find();
    if (iVar1 < 0) goto LAB_0042b338;
    local_28 = (undefined1 *)OPENSSL_sk_value(sigx_app,iVar1);
  }
  iVar1 = 1;
  if (psignid != (int *)0x0) {
    *psignid = *(int *)*ppuVar2;
  }
LAB_0042b372:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

