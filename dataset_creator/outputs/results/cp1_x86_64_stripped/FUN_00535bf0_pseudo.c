
ulong FUN_00535bf0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined4 *)0x0) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x282,"EVP_EncryptUpdate");
    FUN_0051f8f0(6,0xc0102,0);
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x288,"EVP_EncryptUpdate");
      FUN_0051f8f0(6,0x94,0);
      uVar3 = 0;
    }
    else {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../crypto/evp/evp_enc.c",0x28d,"EVP_EncryptUpdate");
        FUN_0051f8f0(6,0x83,0);
      }
      else {
        if (*(long *)(lVar2 + 0x78) == 0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = FUN_005358f0();
            return uVar4;
          }
          goto LAB_00535de6;
        }
        iVar1 = *(int *)(lVar2 + 4);
        if ((iVar1 < 1) || (*(code **)(lVar2 + 0xa8) == (code *)0x0)) {
          FUN_0051f420();
          uVar5 = 0x297;
LAB_00535cd1:
          uVar3 = 0;
          FUN_0051f540("../crypto/evp/evp_enc.c",uVar5,"EVP_EncryptUpdate");
          FUN_0051f8f0(6,0xbd,0);
        }
        else {
          lVar6 = (long)iVar1 + (long)param_5;
          if (iVar1 == 1) {
            lVar6 = (long)param_5;
          }
          uVar3 = (**(code **)(lVar2 + 0xa8))(param_1[0x15],param_2,&local_28,lVar6,param_4);
          if (uVar3 != 0) {
            if (0x7fffffff < local_28) {
              FUN_0051f420();
              uVar5 = 0x2a1;
              goto LAB_00535cd1;
            }
            *param_3 = (int)local_28;
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar3;
  }
LAB_00535de6:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

