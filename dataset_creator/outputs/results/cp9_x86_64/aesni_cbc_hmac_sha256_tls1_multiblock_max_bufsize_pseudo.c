
int aesni_cbc_hmac_sha256_tls1_multiblock_max_bufsize(long param_1)

{
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return ((int)*(long *)(param_1 + 0x1e0) + 0x30U & 0xfffffff0) + 0x15;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: ctx->multiblock_max_send_fragment != 0",
              "../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha256_hw.c",0x2f8);
}

