
stack_st_CONF_VALUE *
i2v_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_e0;
  char local_d8 [80];
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  local_e0 = param_3;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) break;
    puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
    i2t_ASN1_OBJECT(local_d8,0x50,(ASN1_OBJECT *)*puVar2);
    i2t_ASN1_OBJECT(local_88,0x50,(ASN1_OBJECT *)puVar2[1]);
    X509V3_add_value(local_d8,local_88,&local_e0);
    iVar3 = iVar3 + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

