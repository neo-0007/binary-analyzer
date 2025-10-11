
undefined8 sxnet_i2r(undefined8 param_1,undefined8 *param_2,BIO *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *ptr;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  param_4 = param_4 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_INTEGER_get_int64(&local_48,*param_2);
  if ((iVar1 == 0) || (local_48 == 0x7fffffffffffffff)) {
    BIO_printf(param_3,"%*sVersion: <unsupported>",param_4,&DAT_008343a2);
  }
  else {
    BIO_printf(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_008343a2,local_48 + 1);
  }
  iVar1 = 0;
  while( true ) {
    iVar2 = OPENSSL_sk_num(param_2[1]);
    if (iVar2 <= iVar1) break;
    puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar1);
    ptr = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(ASN1_INTEGER *)*puVar3);
    BIO_printf(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_008343a2,ptr);
    CRYPTO_free(ptr);
    ASN1_STRING_print(param_3,(ASN1_STRING *)puVar3[1]);
    iVar1 = iVar1 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

