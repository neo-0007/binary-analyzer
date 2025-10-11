
char x509_name_ex_print(BIO *param_1,undefined8 *param_2,int param_3,undefined8 param_4,long param_5
                       )

{
  int iVar1;
  
  iVar1 = X509_NAME_print_ex(param_1,(X509_NAME *)*param_2,param_3,*(ulong *)(param_5 + 8));
  return (0 < iVar1) * '\x02';
}

