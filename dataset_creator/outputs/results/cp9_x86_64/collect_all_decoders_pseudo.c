
void collect_all_decoders(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OSSL_DECODER_up_ref();
  if (iVar1 == 0) {
    return;
  }
  OPENSSL_sk_push(param_2,param_1);
  return;
}

