
int OBJ_find_sigid_algs(int signid,int *pdig_nid,int *ppkey_nid)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_2c [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c[0] = signid;
  if (sig_app == 0) {
LAB_0042b2c0:
    pvVar2 = OBJ_bsearch_(local_2c,sigoid_srt,0x31,0xc,sig_cmp_BSEARCH_CMP_FN);
    iVar3 = 0;
    if (pvVar2 == (void *)0x0) goto LAB_0042b29d;
  }
  else {
    uVar1 = OPENSSL_sk_find(sig_app,local_2c);
    pvVar2 = (void *)OPENSSL_sk_value(sig_app,uVar1);
    if (pvVar2 == (void *)0x0) goto LAB_0042b2c0;
  }
  if (pdig_nid != (int *)0x0) {
    *pdig_nid = *(int *)((long)pvVar2 + 4);
  }
  iVar3 = 1;
  if (ppkey_nid != (int *)0x0) {
    *ppkey_nid = *(int *)((long)pvVar2 + 8);
  }
LAB_0042b29d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

