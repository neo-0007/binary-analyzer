
undefined8
OSSL_DECODER_export(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    lVar1 = OSSL_DECODER_INSTANCE_get_decoder();
    uVar2 = OSSL_DECODER_INSTANCE_get_decoder_ctx(param_1);
                    /* WARNING: Could not recover jumptable at 0x00507556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x78))(uVar2,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x276,"OSSL_DECODER_export");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

