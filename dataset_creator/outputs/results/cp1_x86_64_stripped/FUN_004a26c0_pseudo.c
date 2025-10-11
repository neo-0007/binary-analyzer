
long FUN_004a26c0(int *param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_004a55c0(0,&local_18,(long)*param_1,param_2);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_pack.c",0x3c,"ASN1_item_unpack");
    FUN_0051f8f0(0xd,0x6e,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

