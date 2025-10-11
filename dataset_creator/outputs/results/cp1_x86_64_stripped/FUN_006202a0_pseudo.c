
undefined4 * FUN_006202a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041aec0(0x68,"../crypto/ct/ct_sct.c",0x18);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct.c",0x1b,"SCT_new");
    FUN_0051f8f0(0x32,0xc0100,0);
  }
  else {
    puVar1[0x16] = 0xffffffff;
    *puVar1 = 0xffffffff;
  }
  return puVar1;
}

