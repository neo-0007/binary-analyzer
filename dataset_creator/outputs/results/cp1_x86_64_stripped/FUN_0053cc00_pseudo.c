
int FUN_0053cc00(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((param_1 == (int *)0x0) || (*(long *)(param_1 + 6) == 0)) {
    FUN_0051f420();
    iVar3 = 0;
    FUN_0051f540("../crypto/evp/kem.c",0x20,"evp_kem_init");
    FUN_0051f8f0(6,0x86,0);
    goto LAB_0053ce23;
  }
  FUN_00412da0();
  *param_1 = param_2;
  if (*(long *)(param_1 + 0x22) == 0) {
    FUN_0051f420();
    iVar3 = 0;
    FUN_0051f540("../crypto/evp/kem.c",0x28,"evp_kem_init");
    FUN_0051f8f0(6,0x9a,0);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
    if ((lVar4 == 0) || (lVar4 == *(long *)(param_1 + 8))) {
      lVar8 = 0;
      lVar4 = FUN_0053e0a0(*(long *)(param_1 + 8),0xe);
      uVar11 = 1;
      if (lVar4 == 0) {
        FUN_0051f420();
        uVar10 = 0x37;
      }
      else {
        do {
          FUN_0053c570(lVar8);
          FUN_0053e0f0(local_48);
          if (uVar11 == 2) {
            uVar10 = FUN_0053e6e0(*(undefined8 *)(param_1 + 8));
            lVar8 = FUN_0053cbc0(uVar10,lVar4,*(undefined8 *)(param_1 + 4));
            if (lVar8 == 0) {
              FUN_0051f420();
              uVar10 = 0x65;
              goto LAB_0053cd8d;
            }
LAB_0053ccca:
            uVar1 = *(undefined8 *)(param_1 + 4);
            uVar5 = FUN_0053e710(*(undefined8 *)(param_1 + 8));
            lVar6 = FUN_0053e660(uVar10,uVar5,uVar1);
            local_48 = lVar6;
            if (lVar6 == 0) {
              lVar7 = 0;
              bVar12 = true;
            }
            else {
              lVar7 = FUN_0040fbe0(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                   &local_48,*(undefined8 *)(param_1 + 4));
              bVar12 = lVar7 == 0;
              if (local_48 != 0) goto LAB_0053cd24;
            }
            FUN_0053e0f0(lVar6);
          }
          else {
            lVar8 = FUN_0053cb80(*(undefined8 *)(param_1 + 2),lVar4,*(undefined8 *)(param_1 + 4));
            if (lVar8 != 0) {
              uVar10 = FUN_0053cb70(lVar8);
              goto LAB_0053ccca;
            }
            lVar8 = 0;
            bVar12 = true;
            lVar7 = 0;
          }
LAB_0053cd24:
          bVar2 = uVar11 < 2;
          uVar11 = 2;
        } while ((bool)(bVar2 & bVar12));
        if (lVar7 == 0) {
          FUN_0053c570(lVar8);
          FUN_0051f420();
          uVar10 = 0x85;
        }
        else {
          uVar10 = *(undefined8 *)(lVar8 + 0x18);
          pcVar9 = *(code **)(lVar8 + 0x30);
          *(long *)(param_1 + 10) = lVar8;
          uVar10 = FUN_00420b60(uVar10);
          lVar4 = (*pcVar9)(uVar10);
          *(long *)(param_1 + 0xc) = lVar4;
          if (lVar4 != 0) {
            if (param_2 == 0x1000) {
              pcVar9 = *(code **)(lVar8 + 0x38);
              if (pcVar9 != (code *)0x0) {
LAB_0053cf35:
                iVar3 = (*pcVar9)(lVar4,lVar7,param_3);
                FUN_0053e0f0(local_48);
                local_48 = 0;
                if (0 < iVar3) {
                  iVar3 = 1;
                  goto LAB_0053ce23;
                }
                goto LAB_0053cecd;
              }
              FUN_0051f420(lVar4);
              uVar10 = 0x94;
            }
            else {
              if (param_2 != 0x2000) {
                FUN_0051f420(lVar4);
                uVar10 = 0xa3;
                goto LAB_0053ceab;
              }
              pcVar9 = *(code **)(lVar8 + 0x48);
              if (pcVar9 != (code *)0x0) goto LAB_0053cf35;
              FUN_0051f420(lVar4);
              uVar10 = 0x9c;
            }
LAB_0053cd8d:
            iVar3 = -2;
            FUN_0051f540("../crypto/evp/kem.c",uVar10,"evp_kem_init");
            FUN_0051f8f0(6,0x96,0);
            goto LAB_0053cecd;
          }
          FUN_0051f420(0);
          uVar10 = 0x8d;
        }
      }
LAB_0053ceab:
      iVar3 = 0;
      FUN_0051f540("../crypto/evp/kem.c",uVar10,"evp_kem_init");
      FUN_0051f8f0(6,0x86,0);
    }
    else {
      FUN_0051f420();
      iVar3 = 0;
      FUN_0051f540("../crypto/evp/kem.c",0x31,"evp_kem_init");
      FUN_0051f8f0(6,0xc0103,0);
    }
  }
LAB_0053cecd:
  FUN_00412da0(param_1);
  *param_1 = 0;
  FUN_0053e0f0(local_48);
LAB_0053ce23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

