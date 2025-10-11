
int FUN_00536710(long *param_1,long param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (int *)0x0) {
    FUN_0051f420();
    iVar6 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x39d,"EVP_DecryptFinal_ex");
    FUN_0051f8f0(6,0xc0102,0);
    goto LAB_005367c0;
  }
  *param_3 = 0;
  if ((int)param_1[2] != 0) {
    FUN_0051f420();
    iVar6 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x3a3,"EVP_DecryptFinal_ex");
    FUN_0051f8f0(6,0x94,0);
    goto LAB_005367c0;
  }
  lVar3 = *param_1;
  iVar6 = 0;
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x3a8,"EVP_DecryptFinal_ex");
    FUN_0051f8f0(6,0x83,0);
    goto LAB_005367c0;
  }
  if (*(long *)(lVar3 + 0x78) == 0) {
    if ((*(byte *)(lVar3 + 0x12) & 0x10) != 0) {
      iVar4 = (**(code **)(lVar3 + 0x28))(param_1,param_2,0,0);
      if (-1 < iVar4) {
        *param_3 = iVar4;
        iVar6 = 1;
      }
      goto LAB_005367c0;
    }
    uVar2 = *(uint *)(lVar3 + 4);
    uVar5 = (ulong)((uint)param_1[0xe] & 0x100);
    if ((param_1[0xe] & 0x100U) == 0) {
      if (1 < uVar2) {
        if ((*(int *)((long)param_1 + 0x14) != 0) || ((int)param_1[0x10] == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_enc.c",0x3db,"EVP_DecryptFinal_ex");
          FUN_0051f8f0(6,0x6d,0);
          goto LAB_005367c0;
        }
        if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00418e30("assertion failed: b <= sizeof(ctx->final)","../crypto/evp/evp_enc.c",0x3de);
        }
        uVar7 = (ulong)(uVar2 - 1);
        bVar1 = *(byte *)((long)param_1 + uVar7 + 0x88);
        if (bVar1 == 0) {
LAB_00536a82:
          FUN_0051f420();
          uVar8 = 0x3e6;
        }
        else {
          if ((int)uVar2 < (int)(uint)bVar1) goto LAB_00536a82;
          do {
            if ((int)uVar7 == uVar2 - bVar1) {
              iVar6 = uVar2 - bVar1;
              if (0 < iVar6) {
                do {
                  *(undefined1 *)(param_2 + uVar5) = *(undefined1 *)((long)param_1 + uVar5 + 0x88);
                  uVar5 = uVar5 + 1;
                } while ((long)iVar6 != uVar5);
              }
              *param_3 = iVar6;
              iVar6 = 1;
              goto LAB_005367c0;
            }
            uVar7 = (ulong)((int)uVar7 - 1);
          } while (bVar1 == *(byte *)((long)param_1 + uVar7 + 0x88));
          FUN_0051f420();
          uVar8 = 0x3eb;
        }
        iVar6 = 0;
        FUN_0051f540("../crypto/evp/evp_enc.c",uVar8,"EVP_DecryptFinal_ex");
        FUN_0051f8f0(6,100,0);
        goto LAB_005367c0;
      }
    }
    else if (*(int *)((long)param_1 + 0x14) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x3d3,"EVP_DecryptFinal_ex");
      FUN_0051f8f0(6,0x8a,0);
      goto LAB_005367c0;
    }
    iVar6 = 1;
    goto LAB_005367c0;
  }
  iVar4 = FUN_004096f0();
  if (iVar4 < 1) {
LAB_00536870:
    FUN_0051f420();
    uVar8 = 0x3b2;
  }
  else {
    if (*(code **)(*param_1 + 0xb0) == (code *)0x0) goto LAB_00536870;
    if (iVar4 == 1) {
      iVar4 = 0;
    }
    iVar4 = (**(code **)(*param_1 + 0xb0))(param_1[0x15],param_2,&local_38,(long)iVar4);
    if (iVar4 == 0) goto LAB_005367c0;
    if (local_38 < 0x80000000) {
      *param_3 = (int)local_38;
      iVar6 = iVar4;
      goto LAB_005367c0;
    }
    FUN_0051f420();
    uVar8 = 0x3bb;
  }
  FUN_0051f540("../crypto/evp/evp_enc.c",uVar8,"EVP_DecryptFinal_ex");
  FUN_0051f8f0(6,0xbc,0);
LAB_005367c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

