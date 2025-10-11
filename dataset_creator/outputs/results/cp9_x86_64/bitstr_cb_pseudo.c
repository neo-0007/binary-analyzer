
undefined4 bitstr_cb(char *param_1,int param_2,ASN1_BIT_STRING *param_3)

{
  int iVar1;
  uintmax_t uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    uVar2 = strtouq(param_1,&local_38,10);
    if (((local_38 == (char *)0x0) || (*local_38 == '\0')) || (local_38 == param_1 + param_2)) {
      if ((long)uVar2 < 0) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2f0,"bitstr_cb");
        ERR_set_error(0xd,0xbb,0);
      }
      else {
        iVar1 = ASN1_BIT_STRING_set_bit(param_3,(int)uVar2,1);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2f4,"bitstr_cb");
          ERR_set_error(0xd,0xc0100,0);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

