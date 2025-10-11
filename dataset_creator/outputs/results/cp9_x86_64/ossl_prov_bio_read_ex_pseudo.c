
undefined8 ossl_prov_bio_read_ex(void)

{
  undefined8 uVar1;
  
  if (c_bio_read_ex != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_read_ex)();
    return uVar1;
  }
  return 0;
}

