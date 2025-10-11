
undefined8 FUN_00615fe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = FUN_00614c10(param_1,param_2,0,&local_14);
  if (local_14 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_gen.c",0x5e,"ASN1_generate_v3");
    FUN_0051f8f0(0xd,local_14,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

