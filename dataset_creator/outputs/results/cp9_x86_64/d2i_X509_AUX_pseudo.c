
X509 * d2i_X509_AUX(X509 **a,uchar **pp,long length)

{
  X509 *a_00;
  X509_CERT_AUX *pXVar1;
  long len;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_48;
  long local_40;
  
  bVar2 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *pp;
  if (a != (X509 **)0x0) {
    bVar2 = *a == (X509 *)0x0;
  }
  a_00 = d2i_X509(a,&local_48,length);
  if (a_00 != (X509 *)0x0) {
    len = length - ((long)local_48 - (long)*pp);
    if ((len < 1) ||
       (pXVar1 = d2i_X509_CERT_AUX((X509_CERT_AUX **)&a_00[1].altname,&local_48,len),
       pXVar1 != (X509_CERT_AUX *)0x0)) {
      *pp = local_48;
      goto LAB_0059d6f9;
    }
    if ((bVar2) && (X509_free(a_00), a != (X509 **)0x0)) {
      *a = (X509 *)0x0;
    }
  }
  a_00 = (X509 *)0x0;
LAB_0059d6f9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return a_00;
}

