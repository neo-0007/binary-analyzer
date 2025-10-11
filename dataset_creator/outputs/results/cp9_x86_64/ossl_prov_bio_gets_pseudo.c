
undefined8 ossl_prov_bio_gets(void)

{
  undefined8 uVar1;
  
  if (c_bio_gets != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_gets)();
    return uVar1;
  }
  return 0xffffffff;
}

