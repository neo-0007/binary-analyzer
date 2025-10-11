
undefined8 ossl_prov_bio_write_ex(void)

{
  undefined8 uVar1;
  
  if (c_bio_write_ex != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004398b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_write_ex)();
    return uVar1;
  }
  return 0;
}

