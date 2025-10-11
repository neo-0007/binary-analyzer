
undefined8 ossl_prov_bio_new_membuf(void)

{
  undefined8 uVar1;
  
  if (c_bio_new_membuf != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_new_membuf)();
    return uVar1;
  }
  return 0;
}

