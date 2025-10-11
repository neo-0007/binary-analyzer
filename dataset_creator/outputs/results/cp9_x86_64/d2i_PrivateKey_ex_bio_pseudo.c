
undefined8
d2i_PrivateKey_ex_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_40;
  char *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(param_1,&local_40);
  if (-1 < iVar1) {
    local_38 = local_40->data;
    uVar2 = d2i_AutoPrivateKey_ex(param_2,&local_38,(long)iVar1,param_3,param_4);
  }
  BUF_MEM_free(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

