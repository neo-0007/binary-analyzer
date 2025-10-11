
int BIO_vprintf(BIO *bio,char *format,va_list args)

{
  void *ptr;
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_84c [4];
  int local_848 [2];
  undefined1 *local_840;
  undefined8 local_838;
  void *local_830;
  undefined1 local_828 [2056];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_838 = 0x800;
  local_830 = (void *)0x0;
  local_840 = local_828;
  iVar1 = _dopr(&local_840,&local_830,&local_838,local_848,local_84c,format,args);
  ptr = local_830;
  if (iVar1 == 0) {
    iVar1 = -1;
    CRYPTO_free(local_830);
  }
  else if (local_830 == (void *)0x0) {
    iVar1 = BIO_write(bio,local_828,local_848[0]);
  }
  else {
    iVar1 = BIO_write(bio,local_830,local_848[0]);
    CRYPTO_free(ptr);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

