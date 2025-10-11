
void ERR_add_error_mem_bio(undefined8 param_1,BIO *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (BIO *)0x0) && (lVar2 = BIO_ctrl(param_2,3,0,&local_28), 0 < lVar2)) {
    if (*(char *)(local_28 + -1 + lVar2) != '\0') {
      iVar1 = BIO_write(param_2,&DAT_008343a2,1);
      if (iVar1 < 1) goto LAB_005f24f8;
      lVar2 = BIO_ctrl(param_2,3,0,&local_28);
    }
    if (1 < lVar2) {
      ERR_add_error_txt(param_1,local_28);
    }
  }
LAB_005f24f8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

