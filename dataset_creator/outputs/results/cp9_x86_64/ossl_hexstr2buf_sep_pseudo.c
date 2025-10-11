
void * ossl_hexstr2buf_sep(char *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(param_1);
  if (sVar2 < 2) {
    ERR_new();
    ptr = (void *)0x0;
    ERR_set_debug("../crypto/o_str.c",0xc3,"ossl_hexstr2buf_sep");
    ERR_set_error(0xf,0x79,0);
  }
  else {
    uVar3 = sVar2 >> 1;
    ptr = CRYPTO_malloc((int)uVar3,"../crypto/o_str.c",199);
    if (ptr == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/o_str.c",200,"ossl_hexstr2buf_sep");
      ERR_set_error(0xf,0xc0100,0);
    }
    else {
      if (param_2 == (undefined8 *)0x0) {
        local_48 = 0;
        iVar1 = hexstr2buf_sep(ptr,uVar3,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) goto LAB_0041b1a8;
      }
      else {
        *param_2 = 0;
        local_48 = 0;
        iVar1 = hexstr2buf_sep(ptr,uVar3,&local_48,param_1,(int)param_3);
        if (iVar1 != 0) {
          *param_2 = local_48;
          goto LAB_0041b1a8;
        }
      }
      CRYPTO_free(ptr);
      ptr = (void *)0x0;
    }
  }
LAB_0041b1a8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

