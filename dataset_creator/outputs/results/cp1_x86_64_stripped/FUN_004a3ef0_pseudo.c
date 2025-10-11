
undefined8
FUN_004a3ef0(long *param_1,long *param_2,char *param_3,undefined1 *param_4,ulong param_5,
            undefined8 param_6,char param_7,undefined8 param_8,int param_9,undefined8 param_10,
            undefined8 param_11)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  code *local_b0;
  ulong local_78;
  char local_69;
  char *local_60 [2];
  char local_4f;
  char local_4e;
  char local_4d;
  uint local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  local_60[0] = param_3;
  if ((param_1 == (long *)0x0) || (param_4 == (undefined1 *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0xb6,"asn1_item_embed_d2i");
    FUN_0051f8f0(0xd,0xc0102,0);
    uVar6 = 0;
    goto LAB_004a3ff2;
  }
  if ((long)param_3 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0xba,"asn1_item_embed_d2i");
    FUN_0051f8f0(0xd,0xe0,0);
    uVar6 = 0;
    goto LAB_004a3ff2;
  }
  lVar9 = *(long *)(param_4 + 0x20);
  local_b0 = (code *)0x0;
  if (lVar9 != 0) {
    local_b0 = *(code **)(lVar9 + 0x18);
  }
  param_9 = param_9 + 1;
  if (0x1e < param_9) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0xc4,"asn1_item_embed_d2i");
    FUN_0051f8f0(0xd,0xc9,0);
    goto LAB_004a4448;
  }
  iVar3 = (int)param_5;
  switch(*param_4) {
  case 0:
    if (*(long *)(param_4 + 0x10) == 0) {
      iVar3 = (int)param_7;
LAB_004a4878:
      uVar6 = FUN_004a3400(param_1,param_2,param_3,param_4,param_5,param_6,iVar3,param_8);
      goto LAB_004a3ff2;
    }
    if ((iVar3 == -1) && (param_7 == '\0')) {
      uVar6 = FUN_004a5130(param_1,param_2,param_3,*(long *)(param_4 + 0x10),0,param_8,param_9,
                           param_10,param_11);
      goto LAB_004a3ff2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0xd2,"asn1_item_embed_d2i");
    FUN_0051f8f0(0xd,0xaa,0);
    break;
  case 1:
  case 6:
    local_48 = (char *)*param_2;
    if (iVar3 == -1) {
      param_6 = 0;
      param_5 = 0x10;
    }
    iVar3 = FUN_004a2db0(local_60,0,0,&local_4e,&local_4d,&local_48,param_3,param_5,param_6,
                         (int)param_7,param_8);
    if (iVar3 == 0) {
      FUN_0051f420();
      uVar6 = 0x15d;
LAB_004a4801:
      FUN_0051f540("../crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
      FUN_0051f8f0(0xd,0x8010a,0);
    }
    else {
      if (iVar3 == -1) goto LAB_004a4bea;
      if ((lVar9 == 0) || ((*(byte *)(lVar9 + 8) & 4) == 0)) {
        local_69 = local_4e;
      }
      else {
        local_69 = '\x01';
        local_60[0] = param_3 + -((long)local_48 - *param_2);
      }
      if (local_4d == '\0') {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/tasn_dec.c",0x169,"asn1_item_embed_d2i");
        FUN_0051f8f0(0xd,0x95,0);
        break;
      }
      if ((*param_1 == 0) && (iVar3 = FUN_004a7560(param_1,param_4,param_10), iVar3 == 0)) {
        FUN_0051f420();
        uVar6 = 0x16f;
        goto LAB_004a4801;
      }
      if ((local_b0 != (code *)0x0) && (iVar3 = (*local_b0)(4,param_1,param_4), iVar3 == 0))
      goto LAB_004a4790;
      lVar9 = 0;
      puVar11 = *(ulong **)(param_4 + 0x10);
      if (*(long *)(param_4 + 0x18) < 1) {
LAB_004a4b1e:
        iVar3 = 0;
      }
      else {
        do {
          if (((*puVar11 & 0x300) != 0) && (lVar5 = FUN_004a8600(*param_1,puVar11,0), lVar5 != 0)) {
            uVar6 = FUN_004a85e0(param_1,lVar5);
            FUN_004a6bd0(uVar6,lVar5);
          }
          lVar9 = lVar9 + 1;
          puVar11 = puVar11 + 5;
        } while (lVar9 < *(long *)(param_4 + 0x18));
        puVar11 = *(ulong **)(param_4 + 0x10);
        if (*(long *)(param_4 + 0x18) < 1) goto LAB_004a4b1e;
        lVar9 = 0;
        iVar3 = 0;
        do {
          puVar7 = (uint *)FUN_004a8600(*param_1,puVar11,1);
          if (puVar7 == (uint *)0x0) goto LAB_004a4448;
          uVar6 = FUN_004a85e0(param_1,puVar7);
          pcVar2 = local_48;
          pcVar1 = local_60[0];
          if (local_60[0] == (char *)0x0) {
            if (local_4e != '\0') goto LAB_004a4b4d;
            goto LAB_004a46c8;
          }
          if (((1 < (long)local_60[0]) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
            local_48 = local_48 + 2;
            if (local_4e != '\0') {
              local_60[0] = local_60[0] + -2;
              local_4e = '\0';
              goto LAB_004a46b5;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/tasn_dec.c",0x191,"asn1_item_embed_d2i");
            FUN_0051f8f0(0xd,0x9f,0);
            goto LAB_004a4448;
          }
          uVar10 = 0;
          if (*(long *)(param_4 + 0x18) + -1 != lVar9) {
            uVar10 = *puVar7 & 1;
          }
          iVar4 = FUN_004a5130(uVar6,&local_48,local_60[0],puVar7,uVar10,param_8,param_9,param_10,
                               param_11);
          if (iVar4 == 0) goto LAB_004a4765;
          if (iVar4 == -1) {
            FUN_004a6bd0(uVar6,puVar7);
          }
          else {
            local_60[0] = pcVar2 + ((long)pcVar1 - (long)local_48);
          }
          iVar3 = iVar3 + 1;
          puVar11 = puVar11 + 5;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(long *)(param_4 + 0x18));
      }
      if (local_4e == '\0') {
LAB_004a46b5:
        if ((local_69 == '\0') && (local_60[0] != (char *)0x0)) {
LAB_004a4c08:
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x1bd,"asn1_item_embed_d2i");
          FUN_0051f8f0(0xd,0x94,0);
          break;
        }
      }
      else {
        if (((long)local_60[0] < 2) || ((*local_48 != '\0' || (local_48[1] != '\0')))) {
LAB_004a4b4d:
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x1b8,"asn1_item_embed_d2i");
          FUN_0051f8f0(0xd,0x89,0);
          break;
        }
        local_48 = local_48 + 2;
        if (local_69 == '\0') goto LAB_004a4c08;
      }
LAB_004a46c8:
      lVar9 = (long)iVar3;
      if (lVar9 < *(long *)(param_4 + 0x18)) {
        do {
          puVar7 = (uint *)FUN_004a8600(*param_1,puVar11,1);
          if (puVar7 == (uint *)0x0) goto LAB_004a4448;
          if ((*puVar7 & 1) == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/tasn_dec.c",0x1d1,"asn1_item_embed_d2i");
            FUN_0051f8f0(0xd,0x79,0);
LAB_004a4765:
            FUN_0051ef40(4,"Field=",*(undefined8 *)(puVar7 + 6),", Type=",
                         *(undefined8 *)(param_4 + 0x30));
            uVar6 = 0;
            goto LAB_004a3ff2;
          }
          puVar11 = puVar11 + 5;
          lVar9 = lVar9 + 1;
          uVar6 = FUN_004a85e0(param_1,puVar7);
          FUN_004a6bd0(uVar6,puVar7);
        } while (lVar9 < *(long *)(param_4 + 0x18));
      }
      pcVar1 = local_48;
      iVar3 = FUN_004a8460(param_1,*param_2,(int)local_48 - (int)*param_2,param_4);
      if ((iVar3 != 0) &&
         ((local_b0 == (code *)0x0 || (iVar3 = (*local_b0)(5,param_1,param_4,0), iVar3 != 0)))) {
        *param_2 = (long)pcVar1;
        uVar6 = 1;
        goto LAB_004a3ff2;
      }
LAB_004a4790:
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x1e1,"asn1_item_embed_d2i");
      FUN_0051f8f0(0xd,100,0);
    }
    break;
  case 2:
    if (iVar3 == -1) {
      if ((local_b0 == (code *)0x0) || (iVar3 = (*local_b0)(4,param_1,param_4,0), iVar3 != 0)) {
        if (*param_1 == 0) {
          iVar3 = FUN_004a7560(param_1,param_4,param_10,param_11);
          if (iVar3 == 0) {
            FUN_0051f420();
            uVar6 = 0x120;
            goto LAB_004a4801;
          }
          uVar8 = *(ulong *)(param_4 + 0x18);
        }
        else {
          iVar3 = FUN_004a8280(param_1,param_4);
          uVar8 = *(ulong *)(param_4 + 0x18);
          if ((-1 < iVar3) && ((long)iVar3 < (long)uVar8)) {
            lVar9 = *(long *)(param_4 + 0x10) + (long)iVar3 * 0x28;
            uVar6 = FUN_004a85e0(param_1,lVar9);
            FUN_004a6bd0(uVar6,lVar9);
            FUN_004a82a0(param_1,0xffffffff,param_4);
            uVar8 = *(ulong *)(param_4 + 0x18);
          }
        }
        local_48 = (char *)*param_2;
        puVar7 = *(uint **)(param_4 + 0x10);
        if ((long)uVar8 < 1) {
          local_78 = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            iVar4 = (int)uVar12;
            local_78 = uVar12 & 0xffffffff;
            uVar6 = FUN_004a85e0(param_1,puVar7);
            iVar3 = FUN_004a5130(uVar6,&local_48,param_3,puVar7,1,param_8,param_9,param_10,param_11)
            ;
            if (iVar3 != -1) {
              if (iVar3 < 1) {
                FUN_004a6bd0(uVar6,puVar7);
                FUN_0051f420();
                FUN_0051f540("../crypto/asn1/tasn_dec.c",0x138,"asn1_item_embed_d2i");
                FUN_0051f8f0(0xd,0x8010a,0);
                if (puVar7 == (uint *)0x0) goto LAB_004a4448;
                goto LAB_004a4765;
              }
              uVar8 = *(ulong *)(param_4 + 0x18);
              break;
            }
            uVar12 = uVar12 + 1;
            puVar7 = puVar7 + 10;
            local_78 = (ulong)(iVar4 + 1);
            uVar8 = *(ulong *)(param_4 + 0x18);
          } while ((long)uVar12 < (long)uVar8);
        }
        if (uVar8 == uVar12) {
          if (param_7 != '\0') {
            FUN_004a6bc0(param_1,param_4);
            goto LAB_004a4bea;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x144,"asn1_item_embed_d2i");
          FUN_0051f8f0(0xd,0x8f,0);
          break;
        }
        FUN_004a82a0(param_1,local_78,param_4);
        if ((local_b0 == (code *)0x0) || (iVar3 = (*local_b0)(5,param_1,param_4,0), iVar3 != 0)) {
          *param_2 = (long)local_48;
          uVar6 = 1;
          goto LAB_004a3ff2;
        }
      }
      goto LAB_004a4790;
    }
    FUN_0051f420();
    uVar6 = 0x110;
LAB_004a44c1:
    FUN_0051f540("../crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
    FUN_0051f8f0(0xd,0xe6,0);
    break;
  default:
    uVar6 = 0;
    goto LAB_004a3ff2;
  case 4:
    if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
      uVar6 = (**(code **)(lVar9 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8);
    }
    else {
      uVar6 = (**(code **)(lVar9 + 0x40))
                        (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8,
                         param_10,param_11);
    }
    goto LAB_004a3ff2;
  case 5:
    if (iVar3 != -1) {
      FUN_0051f420();
      uVar6 = 0xe2;
      goto LAB_004a44c1;
    }
    local_48 = (char *)*param_2;
    iVar3 = FUN_004a2db0(0,&local_4c,&local_4f,0,0,&local_48,param_3,0xffffffffffffffff,0,1,param_8)
    ;
    if (iVar3 == 0) {
      FUN_0051f420();
      uVar6 = 0xeb;
      goto LAB_004a4801;
    }
    if (local_4f == '\0') {
      uVar8 = FUN_004a3ed0(local_4c);
      if ((uVar8 & *(ulong *)(param_4 + 8)) != 0) {
        param_6 = 0;
        param_5 = (ulong)local_4c;
        iVar3 = 0;
        goto LAB_004a4878;
      }
      if (param_7 != '\0') goto LAB_004a4bea;
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0xfd,"asn1_item_embed_d2i");
      FUN_0051f8f0(0xd,0x8c,0);
    }
    else {
      if (param_7 != '\0') {
LAB_004a4bea:
        uVar6 = 0xffffffff;
        goto LAB_004a3ff2;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0xf4,"asn1_item_embed_d2i");
      FUN_0051f8f0(0xd,0x8b,0);
    }
  }
LAB_004a4448:
  FUN_0051ef40(2,"Type=",*(undefined8 *)(param_4 + 0x30));
  uVar6 = 0;
LAB_004a3ff2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

