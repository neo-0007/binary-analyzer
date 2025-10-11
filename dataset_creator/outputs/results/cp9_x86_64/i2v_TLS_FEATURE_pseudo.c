
stack_st_CONF_VALUE *
i2v_TLS_FEATURE(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  ASN1_INTEGER *a;
  long lVar2;
  int iVar3;
  char *value;
  stack_st_CONF_VALUE *local_40 [2];
  
  iVar3 = 0;
  local_40[0] = param_3;
  do {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) {
      return local_40[0];
    }
    a = (ASN1_INTEGER *)OPENSSL_sk_value(param_2,iVar3);
    lVar2 = ASN1_INTEGER_get(a);
    if (lVar2 == 5) {
      value = "status_request";
LAB_00610dd3:
      X509V3_add_value((char *)0x0,value,local_40);
    }
    else {
      value = "status_request_v2";
      if (lVar2 == 0x11) goto LAB_00610dd3;
      X509V3_add_value_int((char *)0x0,a,local_40);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

