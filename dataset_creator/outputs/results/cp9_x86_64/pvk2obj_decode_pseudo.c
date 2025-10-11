
undefined8 pvk2obj_decode(void)

{
  int iVar1;
  uint uVar2;
  BIO *b;
  BUF_MEM *str;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 in_RCX;
  uint len;
  undefined8 uVar3;
  undefined8 in_R8;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)ossl_bio_new_from_core_bio();
  if (b == (BIO *)0x0) {
    str = (BUF_MEM *)0x0;
  }
  else {
    str = BUF_MEM_new();
    if ((str != (BUF_MEM *)0x0) &&
       (iVar1 = BUF_MEM_grow(str,0x18), CONCAT44(extraout_var,iVar1) != 0)) {
      ERR_set_mark();
      iVar1 = BIO_read(b,str->data,0x18);
      ERR_pop_to_mark();
      if (iVar1 == 0x18) {
        ERR_set_mark();
        local_48 = str->data;
        iVar1 = ossl_do_PVK_header(&local_48,0x18,0,&local_50,&local_4c);
        ERR_pop_to_mark();
        if (iVar1 < 1) goto LAB_00481783;
        len = local_4c + local_50;
        iVar1 = BUF_MEM_grow(str,(ulong)len + 0x18);
        if (CONCAT44(extraout_var_00,iVar1) == 0) {
          ERR_new();
          uVar3 = 0xd9;
          goto LAB_00481709;
        }
        ERR_set_mark();
        uVar2 = BIO_read(b,str->data + 0x18,len);
        ERR_pop_to_mark();
        BIO_free(b);
        if (len != uVar2) goto LAB_0048178b;
      }
      else {
LAB_00481783:
        BIO_free(b);
LAB_0048178b:
        BUF_MEM_free(str);
        str = (BUF_MEM *)0x0;
      }
      uVar3 = any2obj_decode_final_constprop_0(2,str,in_RCX,in_R8);
      goto LAB_0048173a;
    }
    ERR_new();
    uVar3 = 0xc3;
LAB_00481709:
    ERR_set_debug("../providers/implementations/storemgmt/file_store_any2obj.c",uVar3,
                  "pvk2obj_decode");
    ERR_set_error(9,0xc0100,0);
  }
  BIO_free(b);
  BUF_MEM_free(str);
  uVar3 = 0;
LAB_0048173a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

