
void * ASN1_d2i_bio(xnew *xnew,undefined1 *d2i,BIO *in,void **x)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_30;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(in,&local_30);
  if (iVar1 < 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_28 = local_30->data;
    pvVar2 = (void *)(*(code *)d2i)(x,&local_28,(long)iVar1);
  }
  BUF_MEM_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

