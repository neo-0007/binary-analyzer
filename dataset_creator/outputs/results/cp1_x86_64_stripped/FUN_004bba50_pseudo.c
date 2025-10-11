
long FUN_004bba50(void)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x40,"../crypto/bn/bn_recp.c",0x18);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_recp.c",0x19,"BN_RECP_CTX_new");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    FUN_004b7670(lVar1);
    FUN_004b7670(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x38) = 1;
  }
  return lVar1;
}

