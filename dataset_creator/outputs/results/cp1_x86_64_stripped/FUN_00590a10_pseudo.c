
undefined4
FUN_00590a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_004ee2d0(param_5);
  local_41 = 0;
  lVar3 = FUN_00405f40();
  uVar4 = FUN_004ee2a0(param_5);
  lVar5 = FUN_004b2a70(uVar4);
  if ((lVar3 == 0) || (lVar5 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/sm2/sm2_sign.c",0x31,"ossl_sm2_compute_z_digest");
    uVar2 = 0xc0100;
LAB_00590c77:
    lVar13 = 0;
    uVar15 = 0;
    FUN_0051f8f0(0x35,uVar2,0);
    goto LAB_00590c89;
  }
  uVar4 = FUN_004b2df0(lVar5);
  uVar6 = FUN_004b2df0(lVar5);
  uVar7 = FUN_004b2df0(lVar5);
  uVar8 = FUN_004b2df0(lVar5);
  uVar9 = FUN_004b2df0(lVar5);
  uVar10 = FUN_004b2df0(lVar5);
  lVar11 = FUN_004b2df0(lVar5);
  if (lVar11 == 0) {
    FUN_0051f420();
    uVar15 = 0;
    FUN_0051f540("../crypto/sm2/sm2_sign.c",0x3e,"ossl_sm2_compute_z_digest");
    FUN_0051f8f0(0x35,0xc0100,0);
    lVar13 = 0;
    goto LAB_00590c89;
  }
  iVar1 = FUN_00407400(lVar3,param_2);
  if (iVar1 == 0) {
    FUN_0051f420();
    uVar2 = 0x43;
  }
  else {
    if (0x1ffe < param_4) {
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_sign.c",0x4b,"ossl_sm2_compute_z_digest");
      uVar2 = 0x6f;
      goto LAB_00590c77;
    }
    iVar14 = (int)param_4 * 8;
    local_41 = (undefined1)((uint)iVar14 >> 8);
    iVar1 = FUN_00405f60(lVar3,&local_41,1);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar2 = 0x53;
    }
    else {
      local_41 = (undefined1)iVar14;
      iVar1 = FUN_00405f60(lVar3,&local_41,1);
      if (iVar1 != 0) {
        if (param_4 != 0) {
          iVar1 = FUN_00405f60(lVar3,param_3,param_4);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar2 = 0x5d;
            goto LAB_00590ce1;
          }
        }
        iVar1 = FUN_004efa30(uVar2,uVar4,uVar6,uVar7,lVar5);
        if (iVar1 == 0) {
          FUN_0051f420();
          lVar13 = 0;
          FUN_0051f540("../crypto/sm2/sm2_sign.c",0x62,"ossl_sm2_compute_z_digest");
          FUN_0051f8f0(0x35,0x80010,0);
          uVar15 = 0;
        }
        else {
          iVar14 = FUN_004b7bb0(uVar4);
          iVar1 = iVar14 + 7;
          if (iVar14 + 7 < 0) {
            iVar1 = iVar14 + 0xe;
          }
          iVar1 = iVar1 >> 3;
          lVar12 = (long)iVar1;
          lVar13 = FUN_0041aec0(lVar12,"../crypto/sm2/sm2_sign.c",0x67);
          if (lVar13 == 0) {
            FUN_0051f420();
            lVar13 = 0;
            FUN_0051f540("../crypto/sm2/sm2_sign.c",0x69,"ossl_sm2_compute_z_digest");
            FUN_0051f8f0(0x35,0xc0100,0);
            uVar15 = 0;
          }
          else {
            iVar14 = FUN_004b87b0(uVar6,lVar13,iVar1);
            if (-1 < iVar14) {
              iVar14 = FUN_00405f60(lVar3,lVar13,lVar12);
              if (iVar14 != 0) {
                iVar14 = FUN_004b87b0(uVar7,lVar13,iVar1);
                if (-1 < iVar14) {
                  iVar14 = FUN_00405f60(lVar3,lVar13,lVar12);
                  if (iVar14 != 0) {
                    uVar4 = FUN_004ef780(uVar2);
                    iVar14 = FUN_004f0d70(uVar2,uVar4,uVar8,uVar9,lVar5);
                    if (iVar14 != 0) {
                      iVar14 = FUN_004b87b0(uVar8,lVar13,iVar1);
                      if (-1 < iVar14) {
                        iVar14 = FUN_00405f60(lVar3,lVar13,lVar12);
                        if (iVar14 != 0) {
                          iVar14 = FUN_004b87b0(uVar9,lVar13,iVar1);
                          if (-1 < iVar14) {
                            iVar14 = FUN_00405f60(lVar3,lVar13,lVar12);
                            if (iVar14 != 0) {
                              uVar4 = FUN_004ee3f0(param_5);
                              iVar14 = FUN_004f0d70(uVar2,uVar4,uVar10,lVar11,lVar5);
                              if (iVar14 != 0) {
                                iVar14 = FUN_004b87b0(uVar10,lVar13,iVar1);
                                if (-1 < iVar14) {
                                  iVar14 = FUN_00405f60(lVar3,lVar13,lVar12);
                                  if (iVar14 != 0) {
                                    iVar1 = FUN_004b87b0(lVar11,lVar13,iVar1);
                                    if (-1 < iVar1) {
                                      iVar1 = FUN_00405f60(lVar3,lVar13,lVar12);
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_00406ca0(lVar3,param_1,0);
                                        if (iVar1 != 0) {
                                          uVar15 = 1;
                                          goto LAB_00590c89;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_0051f420();
            uVar15 = 0;
            FUN_0051f540("../crypto/sm2/sm2_sign.c",0x80,"ossl_sm2_compute_z_digest");
            FUN_0051f8f0(0x35,0xc0103,0);
          }
        }
        goto LAB_00590c89;
      }
      FUN_0051f420();
      uVar2 = 0x58;
    }
  }
LAB_00590ce1:
  uVar15 = 0;
  lVar13 = 0;
  FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"ossl_sm2_compute_z_digest");
  FUN_0051f8f0(0x35,0x80006,0);
LAB_00590c89:
  FUN_0041ad60(lVar13,"../crypto/sm2/sm2_sign.c",0x87);
  FUN_004b2b50(lVar5);
  FUN_00406b90(lVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

