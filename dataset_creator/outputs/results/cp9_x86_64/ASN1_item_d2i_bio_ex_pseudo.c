
undefined8
ASN1_item_d2i_bio_ex
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BUF_MEM *)0x0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = asn1_d2i_read_bio(param_2,&local_40);
    if (-1 < iVar1) {
      local_38 = local_40->data;
      uVar2 = ASN1_item_d2i_ex(param_3,&local_38,(long)iVar1,param_1,param_4,param_5);
    }
    BUF_MEM_free(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

