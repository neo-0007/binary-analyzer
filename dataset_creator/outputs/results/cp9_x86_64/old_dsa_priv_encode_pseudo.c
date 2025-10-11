
void old_dsa_priv_encode(long param_1,uchar **param_2)

{
  i2d_DSAPrivateKey(*(DSA **)(param_1 + 0x20),param_2);
  return;
}

