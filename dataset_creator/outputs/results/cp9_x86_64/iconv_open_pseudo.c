
iconv_t iconv_open(char *__tocode,char *__fromcode)

{
  int iVar1;
  long lVar2;
  iconv_t pvVar3;
  long in_FS_OFFSET;
  iconv_t local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = __gconv_create_spec(local_38,__fromcode,__tocode);
  pvVar3 = (iconv_t)0xffffffffffffffff;
  if (lVar2 != 0) {
    iVar1 = __gconv_open(local_38,&local_40,0);
    __gconv_destroy_spec(local_38);
    pvVar3 = local_40;
    if (iVar1 != 0) {
      if (iVar1 - 1U < 2) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      }
      pvVar3 = (iconv_t)0xffffffffffffffff;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pvVar3;
}

