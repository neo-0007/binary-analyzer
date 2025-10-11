
long FUN_005fde40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004a2cd0(&local_90,0,0,0,param_1);
  lVar4 = 0;
  if (iVar2 != 0) {
    lVar4 = FUN_0040ec60();
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_pkey.c",0x23,"evp_pkcs82pkey_legacy");
      FUN_0051f8f0(6,0xc0100,0);
    }
    else {
      uVar3 = FUN_00423da0(local_90);
      iVar2 = FUN_0040f1a0(lVar4,uVar3);
      if (iVar2 == 0) {
        FUN_004a0440(local_88,0x50,local_90);
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_pkey.c",0x29,"evp_pkcs82pkey_legacy");
        FUN_0051f8f0(6,0x76,"TYPE=%s",local_88);
      }
      else {
        pcVar1 = *(code **)(*(long *)(lVar4 + 8) + 0x138);
        if (pcVar1 == (code *)0x0) {
          pcVar1 = *(code **)(*(long *)(lVar4 + 8) + 0x40);
          if (pcVar1 == (code *)0x0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/evp_pkey.c",0x37,"evp_pkcs82pkey_legacy");
            FUN_0051f8f0(6,0x90,0);
          }
          else {
            iVar2 = (*pcVar1)(lVar4,param_1);
            if (iVar2 != 0) goto LAB_005fded2;
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/evp_pkey.c",0x33,"evp_pkcs82pkey_legacy");
            FUN_0051f8f0(6,0x91,0);
          }
        }
        else {
          iVar2 = (*pcVar1)(lVar4,param_1,param_2,param_3);
          if (iVar2 != 0) goto LAB_005fded2;
        }
      }
      FUN_0040f4f0(lVar4);
      lVar4 = 0;
    }
  }
LAB_005fded2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

