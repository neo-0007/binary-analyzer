
undefined8 der2obj_decode(void)

{
  int iVar1;
  BIO *a;
  undefined8 uVar2;
  undefined8 in_RCX;
  undefined8 in_R8;
  long in_FS_OFFSET;
  BUF_MEM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = (BIO *)ossl_bio_new_from_core_bio();
  local_38 = (BUF_MEM *)0x0;
  uVar2 = 0;
  if (a != (BIO *)0x0) {
    ERR_set_mark();
    iVar1 = asn1_d2i_read_bio(a,&local_38);
    ERR_pop_to_mark();
    if ((iVar1 < 0) && (local_38 != (BUF_MEM *)0x0)) {
      BUF_MEM_free(local_38);
      local_38 = (BUF_MEM *)0x0;
    }
    BIO_free(a);
    uVar2 = any2obj_decode_final_constprop_0(0,local_38,in_RCX,in_R8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

