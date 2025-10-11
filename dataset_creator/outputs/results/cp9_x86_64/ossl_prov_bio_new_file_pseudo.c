
undefined8 ossl_prov_bio_new_file(void)

{
  undefined8 uVar1;
  
  if (c_bio_new_file != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_new_file)();
    return uVar1;
  }
  return 0;
}

