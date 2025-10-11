
undefined8 ossl_prov_bio_up_ref(void)

{
  undefined8 uVar1;
  
  if (c_bio_up_ref != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004399e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*c_bio_up_ref)();
    return uVar1;
  }
  return 0;
}

