
int i2d_ECDSA_SIG(ECDSA_SIG *sig,uchar **pp)

{
  int iVar1;
  BUF_MEM *a;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pp == (uchar **)0x0) {
    iVar1 = WPACKET_init_null(local_68,0);
joined_r0x004de751:
    if (iVar1 != 0) {
      a = (BUF_MEM *)0x0;
LAB_004de66a:
      iVar1 = ossl_encode_der_dsa_sig(local_68,sig->r,sig->s);
      if ((iVar1 == 0) ||
         ((iVar1 = WPACKET_get_total_written(local_68,&local_70), iVar1 == 0 ||
          (iVar1 = WPACKET_finish(local_68), iVar1 == 0)))) {
        BUF_MEM_free(a);
        WPACKET_cleanup(local_68);
        local_70 = 0xffffffff;
      }
      else if (pp != (uchar **)0x0) {
        if (*pp == (uchar *)0x0) {
          *pp = (uchar *)a->data;
          a->data = (char *)0x0;
          BUF_MEM_free(a);
        }
        else {
          *pp = *pp + local_70;
        }
      }
      goto LAB_004de6bf;
    }
  }
  else {
    if (*pp != (uchar *)0x0) {
      iVar1 = WPACKET_init_static_len(local_68,*pp,0xffffffffffffffff,0);
      goto joined_r0x004de751;
    }
    a = BUF_MEM_new();
    if ((a != (BUF_MEM *)0x0) && (iVar1 = WPACKET_init_len(local_68,a,0), iVar1 != 0))
    goto LAB_004de66a;
    BUF_MEM_free(a);
  }
  local_70 = 0xffffffff;
LAB_004de6bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)local_70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

