
int FUN_005202c0(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    uVar10 = 0x20;
LAB_005207a7:
    iVar5 = -2;
    FUN_0051f540("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
    FUN_0051f8f0(6,0x96,0);
  }
  else {
    FUN_00412da0();
    *param_1 = param_2;
    FUN_0051f000();
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
LAB_00520479:
      FUN_0051f050();
      FUN_0053e0f0(local_48);
      lVar6 = *(long *)(param_1 + 0x1e);
      local_48 = 0;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x98) == 0)) {
        FUN_0051f420();
        uVar10 = 0xbd;
        goto LAB_005207a7;
      }
      if (*param_1 == 0x200) {
        pcVar12 = *(code **)(lVar6 + 0x90);
      }
      else {
        if (*param_1 != 0x400) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/asymcipher.c",0xcc,"evp_pkey_asym_cipher_init");
          iVar5 = -1;
          FUN_0051f8f0(6,0x86,0);
          goto LAB_005205e8;
        }
        pcVar12 = *(code **)(lVar6 + 0xa0);
      }
      if (pcVar12 == (code *)0x0) {
        iVar5 = 1;
        goto LAB_00520600;
      }
      iVar5 = (*pcVar12)(param_1);
      if (iVar5 < 1) goto LAB_005205e8;
    }
    else {
      if (*(long *)(param_1 + 0x22) == 0) {
        FUN_0051f1a0();
        iVar5 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/asymcipher.c",0x2e,"evp_pkey_asym_cipher_init");
        FUN_0051f8f0(6,0x9a,0);
      }
      else {
        lVar11 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
        bVar3 = lVar6 == lVar11 || lVar11 == 0;
        if (lVar6 == lVar11 || lVar11 == 0) {
          lVar11 = 0;
          lVar6 = FUN_0053e0a0(lVar6,0xd);
          uVar13 = 1;
          if (lVar6 == 0) {
            FUN_0051f1a0();
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/asymcipher.c",0x40,"evp_pkey_asym_cipher_init");
            FUN_0051f8f0(6,0x86,0);
            iVar5 = 0;
          }
          else {
            do {
              while( true ) {
                FUN_0051f9f0(lVar11);
                FUN_0053e0f0(local_48);
                if (uVar13 == 2) break;
                lVar11 = FUN_00520240(*(undefined8 *)(param_1 + 2),lVar6,
                                      *(undefined8 *)(param_1 + 4));
                if (lVar11 != 0) {
                  uVar10 = FUN_00520230(lVar11);
                  goto LAB_005203ca;
                }
                lVar11 = 0;
                lVar9 = 0;
                bVar4 = bVar3;
LAB_00520424:
                bVar2 = uVar13 < 2;
                uVar13 = 2;
                if (!(bool)(bVar2 & bVar4)) goto LAB_00520520;
              }
              uVar10 = FUN_0053e6e0(*(undefined8 *)(param_1 + 8));
              lVar11 = FUN_00520280(uVar10,lVar6,*(undefined8 *)(param_1 + 4));
              if (lVar11 == 0) goto LAB_00520479;
LAB_005203ca:
              uVar1 = *(undefined8 *)(param_1 + 4);
              uVar7 = FUN_0053e710(*(undefined8 *)(param_1 + 8));
              lVar8 = FUN_0053e660(uVar10,uVar7,uVar1);
              local_48 = lVar8;
              if (lVar8 == 0) {
                lVar9 = 0;
                bVar4 = bVar3;
              }
              else {
                lVar9 = FUN_0040fbe0(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                     &local_48,*(undefined8 *)(param_1 + 4));
                bVar4 = lVar9 == 0;
                if (local_48 != 0) goto LAB_00520424;
              }
              FUN_0053e0f0(lVar8);
              bVar2 = uVar13 < 2;
              uVar13 = 2;
            } while ((bool)(bVar2 & bVar4));
LAB_00520520:
            if (lVar9 == 0) {
              FUN_0051f9f0(lVar11);
              goto LAB_00520479;
            }
            FUN_0051f050();
            *(long *)(param_1 + 10) = lVar11;
            pcVar12 = *(code **)(lVar11 + 0x30);
            uVar10 = FUN_00420b60(*(undefined8 *)(lVar11 + 0x18));
            lVar6 = (*pcVar12)(uVar10);
            *(long *)(param_1 + 0xc) = lVar6;
            if (lVar6 == 0) {
              FUN_0051f420(0);
              uVar10 = 0x94;
LAB_00520681:
              iVar5 = 0;
              FUN_0051f540("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
              FUN_0051f8f0(6,0x86,0);
            }
            else {
              if (param_2 == 0x200) {
                pcVar12 = *(code **)(lVar11 + 0x38);
                if (pcVar12 == (code *)0x0) {
                  FUN_0051f420(lVar6);
                  uVar10 = 0x9b;
LAB_005206ce:
                  iVar5 = -2;
                  FUN_0051f540("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
                  FUN_0051f8f0(6,0x96,0);
                  goto LAB_005205e8;
                }
              }
              else {
                if (param_2 != 0x400) {
                  FUN_0051f420(lVar6);
                  uVar10 = 0xaa;
                  goto LAB_00520681;
                }
                pcVar12 = *(code **)(lVar11 + 0x48);
                if (pcVar12 == (code *)0x0) {
                  FUN_0051f420(lVar6);
                  uVar10 = 0xa3;
                  goto LAB_005206ce;
                }
              }
              iVar5 = (*pcVar12)(lVar6,lVar9,param_3);
              if (0 < iVar5) {
                iVar5 = 1;
                FUN_0053e0f0(local_48);
                goto LAB_00520600;
              }
            }
          }
        }
        else {
          FUN_0051f1a0();
          iVar5 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/asymcipher.c",0x38,"evp_pkey_asym_cipher_init");
          FUN_0051f8f0(6,0xc0103,0);
        }
      }
LAB_005205e8:
      FUN_00412da0(param_1);
      *param_1 = 0;
    }
    FUN_0053e0f0(local_48);
  }
LAB_00520600:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

