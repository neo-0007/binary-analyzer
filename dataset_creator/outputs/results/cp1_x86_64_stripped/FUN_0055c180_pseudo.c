
long FUN_0055c180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar2 = FUN_004a7670();
  if (lVar2 == 0) {
    FUN_0051f420(param_5);
    FUN_0051f540("../crypto/pkcs12/p12_decr.c",0xb5,"PKCS12_item_i2d_encrypt_ex");
    FUN_0051f8f0(0x23,0xc0100,0);
  }
  else {
    iVar1 = FUN_004a6000(param_5,&local_48,param_2);
    if (local_48 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0xba,"PKCS12_item_i2d_encrypt_ex");
      FUN_0051f8f0(0x23,0x66,0);
    }
    else {
      lVar3 = FUN_0055bc10(param_1,param_3,param_4,local_48,iVar1,lVar2 + 8,lVar2,1,param_7,param_8)
      ;
      if (lVar3 != 0) {
        if (param_6 != 0) {
          FUN_004227b0(local_48,(long)iVar1);
        }
        FUN_0041ad60(local_48,"../crypto/pkcs12/p12_decr.c",0xc5);
        lVar3 = lVar2;
        goto LAB_0055c254;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_decr.c",0xbf,"PKCS12_item_i2d_encrypt_ex");
      FUN_0051f8f0(0x23,0x67,0);
      FUN_0041ad60(local_48,"../crypto/pkcs12/p12_decr.c",0xc0);
    }
  }
  lVar3 = 0;
  thunk_FUN_004a2270(lVar2);
LAB_0055c254:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

