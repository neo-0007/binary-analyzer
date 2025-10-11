
void X509_STORE_CTX_set0_trusted_stack(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x40) = get_issuer_sk;
  *(code **)(param_1 + 0x78) = lookup_certs_sk;
  return;
}

