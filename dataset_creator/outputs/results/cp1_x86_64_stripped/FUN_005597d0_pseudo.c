
int FUN_005597d0(long *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_0040e680(param_2,"RSA");
  if (iVar3 == 0) {
    iVar3 = FUN_0040e680(param_2,"DSA");
    if (iVar3 == 0) goto LAB_00559868;
    uVar6 = FUN_00410c70(param_2);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_004d8cd0(uVar6,&local_68,&local_60,&local_58);
    FUN_004d8d80(uVar6,&local_50,&local_48);
    uVar4 = FUN_004b7bb0(local_68);
    if ((((uVar4 & 7) == 0) && (iVar3 = FUN_004b7bb0(local_60), iVar3 == 0xa0)) &&
       (iVar3 = FUN_004b7bb0(local_58), iVar3 <= (int)uVar4)) {
      if (param_3 == 0) {
        uVar8 = 0x32535344;
        iVar3 = FUN_004b7bb0(local_48);
        if (iVar3 < 0xa1) {
LAB_00559c4d:
          cVar2 = '\"';
          goto LAB_005598cb;
        }
      }
      else {
        uVar8 = 0x31535344;
        iVar3 = FUN_004b7bb0(local_50);
        if (iVar3 <= (int)uVar4) goto LAB_00559c4d;
      }
    }
    FUN_0051f420();
    pcVar7 = "check_bitlen_dsa";
    uVar6 = 0x2c7;
LAB_00559849:
    FUN_0051f540("../crypto/pem/pvkfmt.c",uVar6,pcVar7);
    FUN_0051f8f0(9,0x7e,0);
  }
  else {
    uVar6 = thunk_FUN_00540f20(param_2);
    FUN_0042c390(uVar6,0,&local_78,0);
    iVar3 = FUN_004b7bb0(local_78);
    if (0x20 < iVar3) {
LAB_00559838:
      FUN_0051f420();
      pcVar7 = "check_bitlen_rsa";
      uVar6 = 0x294;
      goto LAB_00559849;
    }
    uVar4 = FUN_0056b030(uVar6);
    iVar3 = FUN_0056b040(uVar6);
    if (param_3 == 0) {
      FUN_0042c390(uVar6,0,0,&local_70);
      iVar5 = FUN_004b7bb0(local_70);
      iVar10 = iVar5 + 7;
      if (iVar5 + 7 < 0) {
        iVar10 = iVar5 + 0xe;
      }
      if (iVar10 >> 3 <= iVar3) {
        FUN_0042c3c0(uVar6,&local_68,&local_60);
        FUN_0042c460(uVar6,&local_50,&local_48,&local_58);
        iVar5 = (int)(uVar4 + 0xf) >> 4;
        iVar10 = FUN_004b7bb0(local_58);
        iVar3 = iVar10 + 7;
        if (iVar10 + 7 < 0) {
          iVar3 = iVar10 + 0xe;
        }
        if (iVar3 >> 3 <= iVar5) {
          iVar10 = FUN_004b7bb0(local_68);
          iVar3 = iVar10 + 7;
          if (iVar10 + 7 < 0) {
            iVar3 = iVar10 + 0xe;
          }
          if (iVar3 >> 3 <= iVar5) {
            iVar10 = FUN_004b7bb0(local_60);
            iVar3 = iVar10 + 7;
            if (iVar10 + 7 < 0) {
              iVar3 = iVar10 + 0xe;
            }
            if (iVar3 >> 3 <= iVar5) {
              iVar10 = FUN_004b7bb0(local_50);
              iVar3 = iVar10 + 7;
              if (iVar10 + 7 < 0) {
                iVar3 = iVar10 + 0xe;
              }
              if (iVar3 >> 3 <= iVar5) {
                iVar10 = FUN_004b7bb0(local_48);
                iVar3 = iVar10 + 7;
                if (iVar10 + 7 < 0) {
                  iVar3 = iVar10 + 0xe;
                }
                if (iVar3 >> 3 <= iVar5) {
                  uVar8 = 0x32415352;
                  goto LAB_005598c6;
                }
              }
            }
          }
        }
      }
      goto LAB_00559838;
    }
    uVar8 = 0x31415352;
LAB_005598c6:
    cVar2 = -0x5c;
LAB_005598cb:
    if (uVar4 != 0) {
      iVar3 = FUN_00559780(uVar4,cVar2 == '\"',param_3);
      iVar3 = iVar3 + 0x10;
      if (param_1 == (long *)0x0) goto LAB_00559870;
      pcVar7 = (char *)*param_1;
      bVar1 = false;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)FUN_0041ad90((long)iVar3,"../crypto/pem/pvkfmt.c",0x243);
        if (pcVar7 == (char *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pvkfmt.c",0x244,"do_i2b");
          FUN_0051f8f0(9,0xc0100,0);
          goto LAB_00559868;
        }
        *param_1 = (long)pcVar7;
        bVar1 = true;
      }
      *(undefined4 *)(pcVar7 + 8) = uVar8;
      pcVar9 = pcVar7 + 0x10;
      pcVar7[1] = '\x02';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      *pcVar7 = '\a' - (char)param_3;
      pcVar7[5] = cVar2;
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      *(uint *)(pcVar7 + 0xc) = uVar4;
      if (cVar2 == -0x5c) {
        uVar6 = thunk_FUN_00540f20(param_2);
        iVar10 = FUN_0056b040(uVar6);
        iVar5 = FUN_0056b030(uVar6);
        FUN_0042c390(uVar6,&local_80,&local_70,&local_78);
        FUN_004b87e0(local_70,pcVar9,4);
        pcVar7 = pcVar7 + 0x14;
        FUN_004b87e0(local_80,pcVar7,iVar10);
        if (param_3 == 0) {
          pcVar7 = pcVar7 + iVar10;
          FUN_0042c3c0(uVar6,&local_68,&local_60);
          iVar5 = iVar5 + 0xf >> 4;
          FUN_0042c460(uVar6,&local_50,&local_48,&local_58);
          pcVar9 = pcVar7 + iVar5;
          FUN_004b87e0(local_68,pcVar7,iVar5);
          pcVar7 = pcVar9 + iVar5;
          FUN_004b87e0(local_60,pcVar9,iVar5);
          pcVar9 = pcVar7 + iVar5;
          FUN_004b87e0(local_50,pcVar7,iVar5);
          FUN_004b87e0(local_48,pcVar9,iVar5);
          FUN_004b87e0(local_58,pcVar9 + iVar5,iVar5);
          FUN_004b87e0(local_78,pcVar9 + iVar5 + iVar5,iVar10);
        }
      }
      else {
        uVar6 = FUN_00410c70(param_2);
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        FUN_004d8cd0(uVar6,&local_68,&local_60,&local_58);
        FUN_004d8d80(uVar6,&local_50,&local_48);
        iVar5 = FUN_004b7bb0(local_68);
        iVar10 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar10 = iVar5 + 7;
        }
        iVar10 = iVar10 >> 3;
        FUN_004b87e0(local_68,pcVar9,iVar10);
        pcVar9 = pcVar9 + iVar10;
        FUN_004b87e0(local_60,pcVar9,0x14);
        FUN_004b87e0(local_58,pcVar9 + 0x14,iVar10);
        pcVar7 = pcVar9 + 0x14 + iVar10;
        if (param_3 == 0) {
          pcVar9 = pcVar7 + 0x14;
          FUN_004b87e0(local_48,pcVar7,0x14);
        }
        else {
          FUN_004b87e0(local_50,pcVar7,iVar10);
          pcVar9 = pcVar7 + iVar10;
        }
        pcVar9[0x10] = -1;
        pcVar9[0x11] = -1;
        pcVar9[0x12] = -1;
        pcVar9[0x13] = -1;
        pcVar9[0x14] = -1;
        pcVar9[0x15] = -1;
        pcVar9[0x16] = -1;
        pcVar9[0x17] = -1;
        pcVar9[0] = -1;
        pcVar9[1] = -1;
        pcVar9[2] = -1;
        pcVar9[3] = -1;
        pcVar9[4] = -1;
        pcVar9[5] = -1;
        pcVar9[6] = -1;
        pcVar9[7] = -1;
        pcVar9[8] = -1;
        pcVar9[9] = -1;
        pcVar9[10] = -1;
        pcVar9[0xb] = -1;
        pcVar9[0xc] = -1;
        pcVar9[0xd] = -1;
        pcVar9[0xe] = -1;
        pcVar9[0xf] = -1;
      }
      if (!bVar1) {
        *param_1 = *param_1 + (long)iVar3;
      }
      goto LAB_00559870;
    }
  }
LAB_00559868:
  iVar3 = -1;
LAB_00559870:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

