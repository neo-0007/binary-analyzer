
int X509_supported_extension(X509_EXTENSION *ex)

{
  uint uVar1;
  ASN1_OBJECT *o;
  void *pvVar2;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  o = X509_EXTENSION_get_object(ex);
  uVar1 = OBJ_obj2nid(o);
  local_14 = uVar1;
  if (uVar1 != 0) {
    pvVar2 = OBJ_bsearch_(&local_14,supported_nids_2,0xf,4,nid_cmp_BSEARCH_CMP_FN);
    uVar1 = (uint)(pvVar2 != (void *)0x0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

