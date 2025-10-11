
void MD5_Transform(MD5_CTX *c,uchar *b)

{
  ossl_md5_block_asm_data_order(c,b,1);
  return;
}

