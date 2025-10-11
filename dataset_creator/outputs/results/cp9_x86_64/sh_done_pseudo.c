
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sh_done(void)

{
  CRYPTO_free(DAT_00932ce0);
  CRYPTO_free(DAT_00932cf8);
  CRYPTO_free(DAT_00932d00);
  if ((sh != (void *)0xffffffffffffffff) && (DAT_00932cc8 != 0)) {
    munmap(sh,DAT_00932cc8);
  }
  _sh = (undefined1  [16])0x0;
  _DAT_00932cd0 = (undefined1  [16])0x0;
  _DAT_00932ce0 = (undefined1  [16])0x0;
  _DAT_00932cf0 = (undefined1  [16])0x0;
  _DAT_00932d00 = (undefined1  [16])0x0;
  return;
}

