
long FUN_0055c030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = 0;
  lVar1 = FUN_0055bc10(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_30,
                       &local_34,0,param_7,param_8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_28 = local_30;
    lVar1 = FUN_004a55c0(0,&local_28,(long)local_34,param_2);
    if (param_6 != 0) {
      FUN_004227b0(local_30,(long)local_34);
    }
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0x97,"PKCS12_item_decrypt_d2i_ex");
      FUN_0051f8f0(0x23,0x65,0);
    }
    FUN_0041ad60(local_30,"../crypto/pkcs12/p12_decr.c",0x98);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

