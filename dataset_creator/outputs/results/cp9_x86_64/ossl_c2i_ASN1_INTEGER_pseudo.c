
ASN1_STRING * ossl_c2i_ASN1_INTEGER(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ASN1_STRING *str;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = c2i_ibuf(0,0,*param_2,param_3);
  if (lVar3 == 0) {
LAB_0049ce4b:
    str = (ASN1_STRING *)0x0;
  }
  else {
    if ((param_1 == (undefined8 *)0x0) || (str = (ASN1_STRING *)*param_1, str == (ASN1_STRING *)0x0)
       ) {
      str = ASN1_INTEGER_new();
      if (str == (ASN1_INTEGER *)0x0) goto LAB_0049ce4b;
      str->type = 2;
      iVar1 = ASN1_STRING_set(str,(void *)0x0,(int)lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_int.c",0x141,"ossl_c2i_ASN1_INTEGER");
        ERR_set_error(0xd,0xc0100,0);
        if (param_1 != (undefined8 *)0x0) goto LAB_0049ce3d;
        goto LAB_0049ce43;
      }
    }
    else {
      iVar1 = ASN1_STRING_set(str,(void *)0x0,(int)lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_int.c",0x141,"ossl_c2i_ASN1_INTEGER");
        ERR_set_error(0xd,0xc0100,0);
LAB_0049ce3d:
        if ((ASN1_STRING *)*param_1 != str) {
LAB_0049ce43:
          ASN1_INTEGER_free(str);
        }
        goto LAB_0049ce4b;
      }
    }
    c2i_ibuf(str->data,&local_34,*param_2,param_3);
    if (local_34 == 0) {
      uVar2 = str->type & 0xfffffeff;
    }
    else {
      uVar2 = str->type | 0x100;
    }
    str->type = uVar2;
    *param_2 = *param_2 + param_3;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = str;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

