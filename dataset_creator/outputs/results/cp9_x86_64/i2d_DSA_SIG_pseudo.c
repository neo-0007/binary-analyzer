
int i2d_DSA_SIG(DSA_SIG *a,uchar **pp)

{
  int iVar1;
  BUF_MEM *a_00;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pp == (uchar **)0x0) {
    iVar1 = WPACKET_init_null(local_68,0);
joined_r0x004cdf41:
    if (iVar1 != 0) {
      a_00 = (BUF_MEM *)0x0;
LAB_004cde5a:
      iVar1 = ossl_encode_der_dsa_sig(local_68,a->r,a->s);
      if ((iVar1 == 0) ||
         ((iVar1 = WPACKET_get_total_written(local_68,&local_70), iVar1 == 0 ||
          (iVar1 = WPACKET_finish(local_68), iVar1 == 0)))) {
        BUF_MEM_free(a_00);
        WPACKET_cleanup(local_68);
        local_70 = 0xffffffff;
      }
      else if (pp != (uchar **)0x0) {
        if (*pp == (uchar *)0x0) {
          *pp = (uchar *)a_00->data;
          a_00->data = (char *)0x0;
          BUF_MEM_free(a_00);
        }
        else {
          *pp = *pp + local_70;
        }
      }
      goto LAB_004cdeaf;
    }
  }
  else {
    if (*pp != (uchar *)0x0) {
      iVar1 = WPACKET_init_static_len(local_68,*pp,0xffffffffffffffff,0);
      goto joined_r0x004cdf41;
    }
    a_00 = BUF_MEM_new();
    if ((a_00 != (BUF_MEM *)0x0) && (iVar1 = WPACKET_init_len(local_68,a_00,0), iVar1 != 0))
    goto LAB_004cde5a;
    BUF_MEM_free(a_00);
  }
  local_70 = 0xffffffff;
LAB_004cdeaf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)local_70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

