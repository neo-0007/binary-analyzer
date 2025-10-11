
stack_st_CONF_VALUE *
i2v_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  ASN1_OBJECT *a;
  int iVar2;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_80;
  char local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  local_80 = param_3;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar2) break;
    a = (ASN1_OBJECT *)OPENSSL_sk_value(param_2,iVar2);
    i2t_ASN1_OBJECT(local_78,0x50,a);
    X509V3_add_value((char *)0x0,local_78,&local_80);
    iVar2 = iVar2 + 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

