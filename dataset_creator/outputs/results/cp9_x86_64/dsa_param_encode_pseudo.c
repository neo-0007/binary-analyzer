
void dsa_param_encode(long param_1,uchar **param_2)

{
  i2d_DSAparams(*(DSA **)(param_1 + 0x20),param_2);
  return;
}

