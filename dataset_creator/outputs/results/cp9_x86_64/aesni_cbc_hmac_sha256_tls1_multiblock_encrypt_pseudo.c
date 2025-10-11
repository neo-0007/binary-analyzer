
void aesni_cbc_hmac_sha256_tls1_multiblock_encrypt(undefined8 param_1,undefined8 *param_2)

{
  tls1_multi_block_encrypt(param_1,*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) >> 2);
  return;
}

