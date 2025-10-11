
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_options(void)

{
  if (init_1 != 0) {
    return data_0;
  }
  init_1 = 1;
  BIO_snprintf(data_0,0x10,"bn(%zu,%zu)",0x40,0x40);
  return data_0;
}

