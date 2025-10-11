
undefined8 OSSL_ENCODER_CTX_get_num_encoders(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = OPENSSL_sk_num();
    return uVar1;
  }
  return 0;
}

