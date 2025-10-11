
ulong FUN_004d5900(undefined8 param_1,long *param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004d5fb0(param_1,&local_48,0,0);
  FUN_004d6040(param_1,&local_50,0);
  if ((local_48 != 0) && (local_50 != 0)) {
    iVar1 = FUN_004b7bb0();
    iVar2 = iVar1 + 7;
    if (iVar1 + 7 < 0) {
      iVar2 = iVar1 + 0xe;
    }
    iVar2 = iVar2 >> 3;
    if ((iVar2 != 0) && (iVar1 = FUN_004b7bb0(local_50), 0xe < iVar1 + 0xeU)) {
      uVar4 = (ulong)iVar2;
      if (param_2 == (long *)0x0) goto LAB_004d59a6;
      if (param_4 == 0) {
        lVar3 = *param_2;
        if (lVar3 == 0) goto LAB_004d59a6;
        if (uVar4 <= param_3) {
          iVar2 = FUN_004b87b0(local_50,lVar3,iVar2);
          if (-1 < iVar2) goto LAB_004d5a78;
          goto LAB_004d5aa4;
        }
      }
      else {
        lVar3 = FUN_0041ad90(uVar4,"../crypto/dh/dh_key.c",0x1b2);
        if (lVar3 != 0) {
          iVar2 = FUN_004b87b0(local_50,lVar3,iVar2);
          if (-1 < iVar2) {
LAB_004d5a78:
            *param_2 = lVar3;
            goto LAB_004d59a6;
          }
          FUN_0041ad60(lVar3,"../crypto/dh/dh_key.c",0x1bf);
LAB_004d5aa4:
          FUN_0051f420();
          uVar4 = 0;
          FUN_0051f540("../crypto/dh/dh_key.c",0x1c0,"ossl_dh_key2buf");
          FUN_0051f8f0(5,0x6a,0);
          goto LAB_004d59a6;
        }
      }
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../crypto/dh/dh_key.c",0x1b6,"ossl_dh_key2buf");
      FUN_0051f8f0(5,0xc0100,0);
      goto LAB_004d59a6;
    }
  }
  FUN_0051f420();
  uVar4 = 0;
  FUN_0051f540("../crypto/dh/dh_key.c",0x1aa,"ossl_dh_key2buf");
  FUN_0051f8f0(5,0x66,0);
LAB_004d59a6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

