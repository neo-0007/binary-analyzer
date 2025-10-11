
bool FUN_004806d0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar5 = FUN_0041cdd0(param_2,"algorithm-id");
    if (lVar5 == 0) {
LAB_00480831:
      lVar5 = FUN_0041cdd0(param_2);
      if (lVar5 == 0) {
LAB_004808b0:
        lVar5 = FUN_0041cdd0(param_2,"digest");
        if (((lVar5 == 0) || (iVar2 = FUN_0041e1a0(lVar5,param_1 + 0x34), iVar2 != 0)) &&
           ((lVar5 = FUN_0041cdd0(param_2,"mgf1-digest"), lVar5 == 0 ||
            (iVar2 = FUN_0041e1a0(lVar5,param_1 + 0x7c), iVar2 != 0)))) {
          bVar10 = true;
          lVar5 = FUN_0041cdd0(param_2,"saltlen");
          if (lVar5 == 0) goto LAB_00480798;
          if (*(int *)(lVar5 + 8) == 1) {
            iVar2 = thunk_FUN_0041d0b0(lVar5,*(undefined4 *)(param_1 + 0xb0));
            bVar10 = iVar2 != 0;
            goto LAB_00480798;
          }
          bVar10 = true;
          if (*(int *)(lVar5 + 8) != 4) goto LAB_00480798;
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == -2) {
            pcVar8 = "auto";
          }
          else if (iVar2 == -1) {
            pcVar8 = "digest";
          }
          else {
            if (iVar2 != -3) {
              iVar2 = FUN_004aeb30(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),"%d")
              ;
              if (0 < iVar2) {
                *(long *)(lVar5 + 0x20) = (long)iVar2;
                goto LAB_00480798;
              }
              goto LAB_00480795;
            }
            pcVar8 = "max";
          }
          iVar2 = FUN_0041e1a0(lVar5,pcVar8);
          bVar10 = iVar2 != 0;
          goto LAB_00480798;
        }
      }
      else if (*(int *)(lVar5 + 8) == 1) {
        iVar2 = thunk_FUN_0041d0b0(lVar5,*(undefined4 *)(param_1 + 0x68));
        if (iVar2 != 0) goto LAB_004808b0;
      }
      else if (*(int *)(lVar5 + 8) == 4) {
        iVar3 = 0;
        iVar2 = 1;
        puVar7 = &DAT_00900b00;
        do {
          if (*(int *)(param_1 + 0x68) == iVar2) {
            if ((&PTR_s_pkcs1_00900b08)[(long)iVar3 * 2] != (undefined *)0x0) {
              iVar2 = FUN_0041e1a0();
              if (iVar2 == 0) goto LAB_00480795;
              goto LAB_004808b0;
            }
            break;
          }
          iVar2 = *(int *)(puVar7 + 0x10);
          puVar7 = puVar7 + 0x10;
          iVar3 = iVar3 + 1;
        } while (iVar2 != 0);
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x434,"rsa_get_ctx_params");
        FUN_0051f8f0(0x39,0xc0103,0);
        goto LAB_004808b0;
      }
    }
    else {
      iVar2 = FUN_00546fe0(local_108,local_c8,0x80);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0xe9,
                     "rsa_generate_signature_aid");
        FUN_0051f8f0(0x39,0xc0100,0);
      }
      else if (*(int *)(param_1 + 0x68) == 1) {
        iVar2 = FUN_005b1b50(local_108,0xffffffff,*(undefined4 *)(param_1 + 0x30));
        if (iVar2 < 1) {
          if (iVar2 == 0) {
            FUN_0051f420();
            pcVar8 = "rsa_generate_signature_aid";
            uVar9 = 0xf5;
            goto LAB_004809f5;
          }
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0xf8,
                       "rsa_generate_signature_aid");
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          pcVar8 = "Algorithm ID generation - md NID: %d";
          goto LAB_0048077c;
        }
LAB_004807e0:
        iVar2 = FUN_00547ad0(local_108);
        if (iVar2 == 0) goto LAB_0048078d;
        FUN_005472b0(local_108,&local_130);
        lVar6 = FUN_00547310(local_108);
        FUN_00547da0(local_108);
        if ((lVar6 != 0) && (iVar2 = FUN_0041e220(lVar5,lVar6,local_130), iVar2 != 0))
        goto LAB_00480831;
      }
      else {
        if (*(int *)(param_1 + 0x68) == 6) {
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == -1) {
            iVar2 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
          }
          else if (iVar2 + 3U < 2) {
            iVar2 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
            iVar3 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
            uVar4 = FUN_0056b030(*(undefined8 *)(param_1 + 0x10));
            iVar2 = (((uVar4 & 7) != 1) - 3) + (iVar2 - iVar3);
          }
          if (iVar2 < 0) {
            FUN_0051f420();
            pcVar8 = "rsa_pss_compute_saltlen";
            uVar9 = 0xd2;
          }
          else {
            if (iVar2 < *(int *)(param_1 + 0xb4)) {
              FUN_0051f420();
              FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0xd5,
                           "rsa_pss_compute_saltlen");
              FUN_0051f8f0(0x39,0xac,"minimum salt length: %d, actual salt length: %d",
                           *(undefined4 *)(param_1 + 0xb4),iVar2);
              FUN_00547da0(local_108);
              goto LAB_00480795;
            }
            iVar3 = FUN_004331f0(local_128);
            if ((((iVar3 != 0) &&
                 (iVar3 = FUN_004332a0(local_128,*(undefined4 *)(param_1 + 0x30)), iVar3 != 0)) &&
                (iVar3 = FUN_004332e0(local_128,*(undefined4 *)(param_1 + 0x78)), iVar3 != 0)) &&
               ((iVar2 = FUN_00433300(local_128,iVar2), iVar2 != 0 &&
                (iVar2 = FUN_00485120(local_108,0xffffffff,0x1000,local_128), iVar2 != 0))))
            goto LAB_004807e0;
            FUN_0051f420();
            pcVar8 = "rsa_generate_signature_aid";
            uVar9 = 0x108;
          }
LAB_004809f5:
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",uVar9,pcVar8);
          FUN_0051f8f0(0x39,0xc0103,0);
        }
        else {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x10d,
                       "rsa_generate_signature_aid");
          uVar1 = *(undefined4 *)(param_1 + 0x68);
          pcVar8 = "Algorithm ID generation - pad mode: %d";
LAB_0048077c:
          FUN_0051f8f0(0x39,0x8010c,pcVar8,uVar1);
        }
LAB_0048078d:
        FUN_00547da0(local_108);
      }
    }
  }
LAB_00480795:
  bVar10 = false;
LAB_00480798:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar10;
}

