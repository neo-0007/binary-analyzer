
POLICY_CONSTRAINTS *
v2i_POLICY_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  CONF_VALUE *value;
  int iVar2;
  POLICY_CONSTRAINTS *local_40;
  
  iVar2 = 0;
  local_40 = POLICY_CONSTRAINTS_new();
  if (local_40 == (POLICY_CONSTRAINTS *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_pcons.c",0x40,"v2i_POLICY_CONSTRAINTS");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_3), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar2);
      __s1 = value->name;
      iVar1 = strcmp(__s1,"requireExplicitPolicy");
      if (iVar1 == 0) {
        iVar1 = X509V3_get_value_int(value,&local_40->requireExplicitPolicy);
      }
      else {
        iVar1 = strcmp(__s1,"inhibitPolicyMapping");
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_pcons.c",0x4c,"v2i_POLICY_CONSTRAINTS");
          ERR_set_error(0x22,0x6a,&DAT_007d9761,value->name);
          goto LAB_0060e4c0;
        }
        iVar1 = X509V3_get_value_int(value,&local_40->inhibitPolicyMapping);
      }
      if (iVar1 == 0) goto LAB_0060e4c0;
    }
    if ((local_40->inhibitPolicyMapping == (ASN1_INTEGER *)0x0) &&
       (local_40->requireExplicitPolicy == (ASN1_INTEGER *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pcons.c",0x53,"v2i_POLICY_CONSTRAINTS");
      ERR_set_error(0x22,0x97,0);
LAB_0060e4c0:
      POLICY_CONSTRAINTS_free(local_40);
      local_40 = (POLICY_CONSTRAINTS *)0x0;
    }
  }
  return local_40;
}

