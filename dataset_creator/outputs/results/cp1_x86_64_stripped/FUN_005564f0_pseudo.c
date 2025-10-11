
undefined4
FUN_005564f0(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5,uint param_6
            )

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  long local_a8;
  long local_98;
  long local_88;
  long local_80;
  int local_50;
  int local_4c;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0;
  uVar4 = param_6 & 1;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if ((param_6 & 6) == 6) {
    FUN_0051f420();
    uVar15 = 0;
    lVar16 = 0;
    FUN_0051f540("../crypto/pem/pem_lib.c",0x3a5,"PEM_read_bio_ex");
    FUN_0051f8f0(9,0x80106,0);
    local_88 = 0;
    local_a8 = 0;
    local_98 = 0;
LAB_005568d8:
    FUN_005fd160(lVar16);
    if (uVar4 == 0) {
LAB_005569b3:
      FUN_0041ad60(local_88,"../crypto/pem/pem_lib.c",0xe2);
      goto LAB_00556902;
    }
  }
  else {
    if (uVar4 == 0) {
      uVar8 = FUN_005c0c00();
      local_98 = FUN_004ab550(uVar8);
      local_a8 = FUN_004ab550(uVar8);
      if ((local_98 == 0) || (local_a8 == 0)) {
LAB_005569d0:
        FUN_0051f420();
        uVar15 = 0;
        lVar16 = 0;
        FUN_0051f540("../crypto/pem/pem_lib.c",0x3ad,"PEM_read_bio_ex");
        FUN_0051f8f0(9,0xc0100,0);
        local_88 = 0;
        goto LAB_005568d8;
      }
      lVar9 = FUN_0041ad90(0x100,"../crypto/pem/pem_lib.c",0xe8);
    }
    else {
      uVar8 = FUN_005c0c10();
      local_98 = FUN_004ab550(uVar8);
      local_a8 = FUN_004ab550(uVar8);
      if ((local_98 == 0) || (local_a8 == 0)) goto LAB_005569d0;
      lVar9 = FUN_0041bc60(0x100,"../crypto/pem/pem_lib.c",0xe7);
    }
    uVar8 = 1;
    uVar14 = param_6 & 0xfffffffb;
    if (lVar9 == 0) {
      FUN_0051f420();
      uVar15 = 0;
      FUN_0051f540("../crypto/pem/pem_lib.c",0x2f3,"get_name");
      FUN_0051f8f0(9,0xc0100,0);
      local_88 = 0;
      lVar16 = 0;
      goto LAB_005568d8;
    }
    do {
      do {
        iVar5 = FUN_004abaa0(param_1,lVar9,0xff);
        if (iVar5 < 1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pem_lib.c",0x2fb,"get_name");
          FUN_0051f8f0(9,0x6c,0);
          if (uVar4 == 0) goto LAB_00556990;
          goto LAB_005568af;
        }
        uVar17 = 0;
        iVar5 = FUN_00554fc0(lVar9,iVar5,uVar14,uVar8);
        iVar6 = thunk_FUN_00712ab0(lVar9,"-----BEGIN ",0xb);
        uVar8 = uVar17;
      } while ((iVar6 != 0) || (iVar5 < 6));
      puVar1 = (undefined1 *)(lVar9 + -6 + (long)iVar5);
      iVar6 = thunk_FUN_00712ab0(puVar1,"-----\n",6);
    } while (iVar6 != 0);
    *puVar1 = 0;
    lVar16 = (long)(iVar5 + -0x10);
    if (uVar4 == 0) {
      local_88 = FUN_0041ad90(lVar16,"../crypto/pem/pem_lib.c",0xe8);
      if (local_88 != 0) {
        thunk_FUN_00713a50(local_88,lVar9 + 0xb,lVar16);
        FUN_0041ad60(lVar9,"../crypto/pem/pem_lib.c",0xe2);
        pcVar10 = (char *)FUN_0041ad90(0x100,"../crypto/pem/pem_lib.c",0xe8);
        goto LAB_005566d7;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_lib.c",0x30b,"get_name");
      FUN_0051f8f0(9,0xc0100,0);
LAB_00556990:
      uVar15 = 0;
      FUN_0041ad60(lVar9,"../crypto/pem/pem_lib.c",0xe2);
      FUN_005fd160(0);
      local_88 = 0;
      goto LAB_005569b3;
    }
    local_88 = FUN_0041bc60(lVar16,"../crypto/pem/pem_lib.c",0xe7);
    if (local_88 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pem_lib.c",0x30b,"get_name");
      FUN_0051f8f0(9,0xc0100,0);
LAB_005568af:
      uVar15 = 0;
      lVar16 = 0;
      FUN_0041c0b0(lVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
      local_88 = 0;
      goto LAB_005568d8;
    }
    thunk_FUN_00713a50(local_88,lVar9 + 0xb,lVar16);
    FUN_0041c0b0(lVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
    pcVar10 = (char *)FUN_0041bc60(0x100,"../crypto/pem/pem_lib.c",0xe7);
LAB_005566d7:
    lVar9 = local_88;
    if (pcVar10 == (char *)0x0) {
      FUN_0051f420();
      uVar15 = 0;
      FUN_0051f540("../crypto/pem/pem_lib.c",0x337,"get_header_and_data");
      FUN_0051f8f0(9,0xc0100,0);
      lVar16 = 0;
      goto LAB_005568d8;
    }
    iVar5 = 0;
    bVar19 = false;
    local_80 = local_98;
    bVar2 = false;
    while (iVar6 = FUN_004abaa0(param_1,pcVar10,0xff), 0 < iVar6) {
      bVar18 = false;
      if (iVar6 == 0xfe) {
        bVar18 = pcVar10[0xfd] != '\n';
      }
      uVar13 = uVar14;
      if (iVar5 == 0) {
        lVar16 = thunk_FUN_007134f0(pcVar10,0x3a,(long)iVar6);
        if (lVar16 == 0) {
          iVar7 = thunk_FUN_00712ab0(pcVar10,"-----END ",9);
          if (iVar7 != 0) {
            uVar13 = param_6;
          }
        }
        else {
          iVar5 = 1;
        }
      }
      else {
        iVar7 = thunk_FUN_00712ab0(pcVar10,"-----END ",9);
        if ((iVar7 != 0) && (iVar5 != 1)) {
          iVar5 = 2;
          uVar13 = param_6;
        }
      }
      iVar6 = FUN_00554fc0(pcVar10,iVar6,uVar13,0);
      if (*pcVar10 == '\n') {
        bVar3 = !bVar2;
        bVar2 = bVar18;
        if (bVar3) {
          if (iVar5 == 2) {
            FUN_0051f420();
            uVar8 = 0x35c;
            goto LAB_00556b04;
          }
          local_80 = local_a8;
          iVar5 = 2;
        }
      }
      else {
        iVar7 = thunk_FUN_00712ab0(pcVar10,"-----END ",9);
        if (iVar7 == 0) {
          lVar16 = thunk_FUN_007129d0(local_88);
          iVar6 = thunk_FUN_00712ab0(pcVar10 + 9,local_88,lVar16);
          if ((iVar6 != 0) ||
             (iVar6 = thunk_FUN_00712ab0(pcVar10 + 9 + lVar16,"-----\n",6), iVar6 != 0)) {
            FUN_0051f420();
            uVar8 = 0x36b;
            goto LAB_00556b04;
          }
          if (iVar5 == 0) {
            local_98 = local_a8;
            local_a8 = local_80;
          }
          if (uVar4 == 0) {
            FUN_0041ad60(pcVar10,"../crypto/pem/pem_lib.c",0xe2);
            FUN_004abd40(local_a8,0x73,0,&local_48);
            local_50 = (int)*local_48;
            if (local_50 == 0) goto LAB_00556b62;
          }
          else {
            FUN_0041c0b0(pcVar10,0x100,"../crypto/pem/pem_lib.c",0xe0);
            FUN_004abd40(local_a8,0x73,0,&local_48);
            local_50 = (int)*local_48;
            if (local_50 == 0) goto LAB_00556b40;
          }
          lVar16 = FUN_005fd140();
          uVar15 = 0;
          if (lVar16 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_lib.c",0x3bf,"PEM_read_bio_ex");
            FUN_0051f8f0(9,0xc0100,0);
            goto LAB_005568d8;
          }
          FUN_005fd440(lVar16);
          iVar5 = FUN_005fd460(lVar16,local_48[1],&local_50,local_48[1],local_50);
          if ((iVar5 < 0) ||
             (iVar5 = FUN_005fd6c0(lVar16,(long)local_50 + local_48[1],&local_4c), iVar5 < 0)) {
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_lib.c",0x3c8,"PEM_read_bio_ex");
            FUN_0051f8f0(9,100,0);
            goto LAB_005568d8;
          }
          local_50 = local_4c + local_50;
          *local_48 = (long)local_50;
          iVar5 = FUN_004abd40(local_98,3,0,0);
          if (uVar4 == 0) {
            lVar11 = FUN_0041ad90((long)(iVar5 + 1),"../crypto/pem/pem_lib.c",0xe8);
            *param_3 = lVar11;
            lVar12 = FUN_0041ad90((long)local_50,"../crypto/pem/pem_lib.c",0xe8);
            lVar11 = *param_3;
            *param_4 = lVar12;
            if ((lVar11 != 0) && (lVar12 != 0)) goto LAB_00556df2;
LAB_00556fd2:
            FUN_0041ad60(lVar11,"../crypto/pem/pem_lib.c",0xe2);
            *param_3 = 0;
            FUN_0041ad60(*param_4,"../crypto/pem/pem_lib.c",0xe2);
          }
          else {
            lVar11 = FUN_0041bc60((long)(iVar5 + 1),"../crypto/pem/pem_lib.c",0xe7);
            *param_3 = lVar11;
            lVar12 = FUN_0041bc60((long)local_50,"../crypto/pem/pem_lib.c",0xe7);
            lVar11 = *param_3;
            *param_4 = lVar12;
            if ((lVar11 != 0) && (lVar12 != 0)) {
LAB_00556df2:
              if (iVar5 == 0) {
LAB_00556e0f:
                *(undefined1 *)(lVar11 + iVar5) = 0;
                iVar5 = FUN_004ab770(local_a8,*param_4,local_50);
                if (iVar5 == local_50) {
                  uVar15 = 1;
                  *param_5 = (long)iVar5;
                  local_88 = 0;
                  *param_2 = lVar9;
                  goto LAB_005568d8;
                }
              }
              else {
                iVar6 = FUN_004ab770(local_98,lVar11,iVar5);
                if (iVar6 == iVar5) {
                  lVar11 = *param_3;
                  goto LAB_00556e0f;
                }
              }
              lVar11 = *param_3;
              if (uVar4 == 0) goto LAB_00556fd2;
            }
            FUN_0041c0b0(lVar11,0,"../crypto/pem/pem_lib.c",0xe0);
            *param_3 = 0;
            FUN_0041c0b0(*param_4,0,"../crypto/pem/pem_lib.c",0xe0);
          }
          *param_4 = 0;
          goto LAB_005568d8;
        }
        if (bVar19) {
          FUN_0051f420();
          uVar8 = 0x375;
          goto LAB_00556b04;
        }
        iVar7 = FUN_004ab870(local_80,pcVar10);
        if ((iVar7 < 0) || ((bVar2 = bVar18, iVar5 == 2 && (bVar19 = iVar6 != 0x41, 0x41 < iVar6))))
        goto LAB_00556b21;
      }
    }
    FUN_0051f420();
    uVar8 = 0x33f;
LAB_00556b04:
    FUN_0051f540("../crypto/pem/pem_lib.c",uVar8,"get_header_and_data");
    FUN_0051f8f0(9,0x66,0);
LAB_00556b21:
    if (uVar4 == 0) {
      FUN_0041ad60(pcVar10,"../crypto/pem/pem_lib.c",0xe2);
LAB_00556b62:
      uVar15 = 0;
      FUN_005fd160(0);
      goto LAB_005569b3;
    }
    FUN_0041c0b0(pcVar10,0x100,"../crypto/pem/pem_lib.c",0xe0);
LAB_00556b40:
    uVar15 = 0;
    FUN_005fd160(0);
  }
  FUN_0041c0b0(local_88,0,"../crypto/pem/pem_lib.c",0xe0);
LAB_00556902:
  FUN_004ab560(local_98);
  FUN_004ab560(local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar15;
}

