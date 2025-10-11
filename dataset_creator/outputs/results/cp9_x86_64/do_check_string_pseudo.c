
int do_check_string(ASN1_STRING *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                   size_t param_6,long *param_7)

{
  uchar *__s1;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  __s1 = param_1->data;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (__s1 == (uchar *)0x0) goto LAB_00588940;
  iVar2 = param_1->length;
  if (iVar2 == 0) goto LAB_00588943;
  if (param_2 < 1) {
    iVar3 = ASN1_STRING_to_UTF8(&local_38,param_1);
    if (iVar3 < 0) {
LAB_00588a9d:
      iVar2 = -1;
    }
    else {
      iVar2 = (*param_3)(local_38,(long)iVar3,param_5,param_6,param_4);
      if ((0 < iVar2) && (param_7 != (long *)0x0)) {
        lVar4 = CRYPTO_strndup(local_38,(long)iVar3,"../crypto/x509/v3_utl.c",0x359);
        *param_7 = lVar4;
        if (lVar4 == 0) {
          CRYPTO_free(local_38);
          goto LAB_00588a9d;
        }
      }
      CRYPTO_free(local_38);
    }
    goto LAB_00588943;
  }
  if (param_1->type == param_2) {
    if (param_2 == 0x16) {
      iVar2 = (*param_3)(__s1,(long)iVar2,param_5,param_6,param_4);
      bVar1 = 0 < iVar2;
    }
    else {
      if (iVar2 != (int)param_6) goto LAB_00588940;
      iVar2 = 0;
      iVar3 = bcmp(__s1,param_5,param_6);
      if (iVar3 != 0) goto LAB_00588943;
      bVar1 = true;
      iVar2 = 1;
    }
    if ((param_7 != (long *)0x0) && (bVar1)) {
      lVar4 = CRYPTO_strndup(param_1->data,(long)param_1->length,"../crypto/x509/v3_utl.c",0x348);
      *param_7 = lVar4;
      if (lVar4 == 0) {
        iVar2 = -1;
      }
    }
  }
  else {
LAB_00588940:
    iVar2 = 0;
  }
LAB_00588943:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

