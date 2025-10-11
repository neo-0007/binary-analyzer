
undefined8
bio_core_write_ex(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(*param_1,0x11,bio_core_globals_method);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x004ad299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

