
long FUN_00620d70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041aec0(0x60,"../crypto/ct/ct_sct_ctx.c",0x19);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct_ctx.c",0x1c,"SCT_CTX_new");
    FUN_0051f8f0(0x32,0xc0100,0);
  }
  else {
    *(undefined8 *)(lVar1 + 0x50) = param_1;
    if (param_2 != 0) {
      lVar2 = FUN_0041c2c0(param_2,"../crypto/ct/ct_sct_ctx.c",0x22);
      *(long *)(lVar1 + 0x58) = lVar2;
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ct/ct_sct_ctx.c",0x24,"SCT_CTX_new");
        FUN_0051f8f0(0x32,0xc0100,0);
        FUN_0041ad60(lVar1,"../crypto/ct/ct_sct_ctx.c",0x25);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}

