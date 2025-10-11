
int FUN_004417f0(long param_1)

{
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return ((int)*(long *)(param_1 + 0x1e0) + 0x24U & 0xfffffff0) + 0x15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: ctx->multiblock_max_send_fragment != 0",
               "../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha1_hw.c",0x2c3);
}

