
void SCT_CTX_set1_issuer(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_get_X509_PUBKEY(param_2);
  SCT_CTX_set1_issuer_pubkey(param_1,uVar1);
  return;
}

