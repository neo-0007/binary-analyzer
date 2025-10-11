
bool FUN_005139b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = FUN_00436410();
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420(0,param_2);
      FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x124,"ossl_decoder_ctx_add_decoder_inst"
                  );
      FUN_0051f8f0(0x3c,0xc0100,0);
      return false;
    }
  }
  iVar1 = FUN_00435f80();
  return 0 < iVar1;
}

