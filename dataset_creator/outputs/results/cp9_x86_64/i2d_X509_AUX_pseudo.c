
int i2d_X509_AUX(X509 *a,uchar **pp)

{
  int iVar1;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pp == (uchar **)0x0) || (*pp != (uchar *)0x0)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = i2d_x509_aux_internal(a,pp);
      return iVar1;
    }
  }
  else {
    iVar1 = i2d_x509_aux_internal(a,0);
    if (0 < iVar1) {
      local_28 = (uchar *)CRYPTO_malloc(iVar1,"../crypto/x509/x_x509.c",0x112);
      *pp = local_28;
      if (local_28 == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x_x509.c",0x114,__func___0);
        ERR_set_error(0xb,0xc0100,0);
        iVar1 = -1;
      }
      else {
        iVar1 = i2d_x509_aux_internal(a,&local_28);
        if (iVar1 < 1) {
          CRYPTO_free(*pp);
          *pp = (uchar *)0x0;
        }
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

