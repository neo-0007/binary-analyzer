
int FUN_00535df0(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (uint *)0x0) {
    FUN_0051f420();
    iVar3 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x2c0,"EVP_EncryptFinal_ex");
    FUN_0051f8f0(6,0xc0102,0);
    goto LAB_00535e94;
  }
  *param_3 = 0;
  if ((int)param_1[2] == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x2c6,"EVP_EncryptFinal_ex");
    FUN_0051f8f0(6,0x94,0);
    iVar3 = 0;
    goto LAB_00535e94;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_0051f420();
    iVar3 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x2cb,"EVP_EncryptFinal_ex");
    FUN_0051f8f0(6,0x83,0);
    goto LAB_00535e94;
  }
  if (*(long *)(lVar2 + 0x78) == 0) {
    if ((*(byte *)(lVar2 + 0x12) & 0x10) == 0) {
      uVar4 = *(uint *)(lVar2 + 4);
      if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00418e30("assertion failed: b <= sizeof(ctx->buf)","../crypto/evp/evp_enc.c",0x2f2);
      }
      iVar3 = 1;
      if (uVar4 != 1) {
        uVar1 = *(uint *)((long)param_1 + 0x14);
        if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
          if (uVar1 < uVar4) {
            thunk_FUN_00713720((long)param_1 + (ulong)uVar1 + 0x38,uVar4 - uVar1 & 0xff,
                               (ulong)((uVar4 - uVar1) - 1) + 1);
          }
          iVar3 = (**(code **)(lVar2 + 0x28))(param_1,param_2,param_1 + 7,uVar4);
          if (iVar3 != 0) {
            *param_3 = uVar4;
          }
        }
        else if (uVar1 != 0) {
          FUN_0051f420();
          iVar3 = 0;
          FUN_0051f540("../crypto/evp/evp_enc.c",0x2fa,"EVP_EncryptFinal_ex");
          FUN_0051f8f0(6,0x8a,0);
        }
      }
      goto LAB_00535e94;
    }
    uVar4 = (**(code **)(lVar2 + 0x28))(param_1,param_2,0,0);
    if (-1 < (int)uVar4) {
      *param_3 = uVar4;
      iVar3 = 1;
      goto LAB_00535e94;
    }
  }
  else {
    iVar3 = FUN_004096f0();
    if (iVar3 < 1) {
LAB_00535fa8:
      FUN_0051f420();
      uVar5 = 0x2d4;
    }
    else {
      if (*(code **)(*param_1 + 0xb0) == (code *)0x0) goto LAB_00535fa8;
      if (iVar3 == 1) {
        iVar3 = 0;
      }
      iVar3 = (**(code **)(*param_1 + 0xb0))(param_1[0x15],param_2,&local_48,(long)iVar3);
      if (iVar3 == 0) goto LAB_00535e91;
      if (local_48 < 0x80000000) {
        *param_3 = (uint)local_48;
        goto LAB_00535e94;
      }
      FUN_0051f420();
      uVar5 = 0x2dd;
    }
    FUN_0051f540("../crypto/evp/evp_enc.c",uVar5,"EVP_EncryptFinal_ex");
    FUN_0051f8f0(6,0xbc,0);
  }
LAB_00535e91:
  iVar3 = 0;
LAB_00535e94:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

