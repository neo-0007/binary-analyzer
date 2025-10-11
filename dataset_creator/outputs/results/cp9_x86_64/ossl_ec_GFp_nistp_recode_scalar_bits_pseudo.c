
void ossl_ec_GFp_nistp_recode_scalar_bits(byte *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 >> 5 & 7;
  uVar2 = -uVar1;
  uVar1 = 0x3f - param_3 & uVar2 | uVar1 - 1 & param_3;
  *param_1 = (byte)uVar2 & 1;
  *param_2 = ((byte)(uVar1 >> 1) & 0x7f) + ((byte)uVar1 & 1);
  return;
}

