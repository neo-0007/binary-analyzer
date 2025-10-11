
undefined8 ossl_asn1_utctime_to_tm(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x17) {
    return 0;
  }
  uVar1 = ossl_asn1_time_to_tm();
  return uVar1;
}

