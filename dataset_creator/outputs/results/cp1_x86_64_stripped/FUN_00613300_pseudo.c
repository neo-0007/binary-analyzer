
undefined4 * FUN_00613300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined4 *)FUN_004a7670();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    lVar2 = FUN_0041c870(param_3,local_28);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      thunk_FUN_004a2270(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = local_28[0];
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

