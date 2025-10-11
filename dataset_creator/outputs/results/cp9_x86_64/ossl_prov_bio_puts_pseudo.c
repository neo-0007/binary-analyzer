
undefined8 ossl_prov_bio_puts(void)

{
  undefined8 uVar1;
  
  if (c_bio_puts != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_puts)();
    return uVar1;
  }
  return 0xffffffff;
}

