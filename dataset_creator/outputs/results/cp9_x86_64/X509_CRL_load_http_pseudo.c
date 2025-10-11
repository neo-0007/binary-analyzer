
void X509_CRL_load_http(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  simple_get_asn1(param_1,param_2,param_3,param_4,uVar1);
  return;
}

