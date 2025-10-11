
undefined8 msblob2obj_decode(void)

{
  int iVar1;
  uint len;
  uint uVar2;
  BIO *b;
  BUF_MEM *str;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 in_RCX;
  undefined8 uVar3;
  undefined8 in_R8;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)ossl_bio_new_from_core_bio();
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  if (b == (BIO *)0x0) {
    str = (BUF_MEM *)0x0;
  }
  else {
    str = BUF_MEM_new();
    if ((str != (BUF_MEM *)0x0) &&
       (iVar1 = BUF_MEM_grow(str,0x10), CONCAT44(extraout_var,iVar1) != 0)) {
      ERR_set_mark();
      iVar1 = BIO_read(b,str->data,0x10);
      ERR_pop_to_mark();
      if (iVar1 == 0x10) {
        ERR_set_mark();
        local_48 = str->data;
        iVar1 = ossl_do_blob_header(&local_48,0x10,local_54,&local_58,&local_50,&local_4c);
        ERR_pop_to_mark();
        if (iVar1 < 1) goto LAB_004815a3;
        len = ossl_blob_length(local_58,local_50,local_4c);
        iVar1 = BUF_MEM_grow(str,(ulong)len + 0x10);
        if (CONCAT44(extraout_var_00,iVar1) == 0) {
          ERR_new();
          uVar3 = 0x96;
          goto LAB_00481529;
        }
        ERR_set_mark();
        uVar2 = BIO_read(b,str->data + 0x10,len);
        ERR_pop_to_mark();
        BIO_free(b);
        if (len != uVar2) goto LAB_004815ab;
      }
      else {
LAB_004815a3:
        BIO_free(b);
LAB_004815ab:
        BUF_MEM_free(str);
        str = (BUF_MEM *)0x0;
      }
      uVar3 = any2obj_decode_final_constprop_0(2,str,in_RCX,in_R8);
      goto LAB_0048155a;
    }
    ERR_new();
    uVar3 = 0x80;
LAB_00481529:
    ERR_set_debug("../providers/implementations/storemgmt/file_store_any2obj.c",uVar3,
                  "msblob2obj_decode");
    ERR_set_error(9,0xc0100,0);
  }
  BIO_free(b);
  BUF_MEM_free(str);
  uVar3 = 0;
LAB_0048155a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

