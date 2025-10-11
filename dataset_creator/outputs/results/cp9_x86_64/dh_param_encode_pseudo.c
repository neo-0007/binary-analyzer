
void dh_param_encode(long param_1,uchar **param_2)

{
  if (*(undefined1 **)(param_1 + 8) != ossl_dhx_asn1_meth) {
    i2d_DHparams(*(DH **)(param_1 + 0x20),param_2);
    return;
  }
  i2d_DHxparams();
  return;
}

