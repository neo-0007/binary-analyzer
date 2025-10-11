
undefined8 X509_VERIFY_PARAM_get1_ip_asc(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = ossl_ipaddr_to_asc(*(long *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}

