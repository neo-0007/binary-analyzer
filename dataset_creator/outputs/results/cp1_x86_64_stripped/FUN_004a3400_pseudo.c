
int FUN_004a3400(uint *param_1,long *param_2,undefined8 param_3,char *param_4,uint param_5,
                undefined4 param_6,char param_7,undefined1 *param_8)

{
  code *pcVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  int local_9c;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  uint local_8c;
  byte *local_88;
  byte *local_80;
  long local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8e = '\0';
  local_68 = (byte *)0x0;
  local_60 = (byte *)0x0;
  local_58 = 0;
  local_50 = 0;
  if (param_1 == (uint *)0x0) {
    FUN_0051f420();
    iVar4 = 0;
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x2c8,"asn1_d2i_ex_primitive");
    FUN_0051f8f0(0xd,0x7d,0);
    goto LAB_004a35a0;
  }
  if (*param_4 == '\x05') {
    local_8c = param_5;
    if (param_5 != 0xfffffffc) {
LAB_004a36ac:
      param_6 = 0;
      param_5 = local_8c;
      goto LAB_004a349d;
    }
    param_5 = 0xffffffff;
LAB_004a3615:
    if (param_7 == '\0') {
      local_80 = (byte *)*param_2;
      iVar4 = FUN_004a2db0(0,&local_8c,&local_70,0,0,&local_80,param_3,0xffffffffffffffff,0,0,
                           param_8);
      if (iVar4 != 0) {
        if ((char)local_70 != '\0') {
          local_8c = 0xfffffffd;
        }
        goto LAB_004a3494;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x2e1,"asn1_d2i_ex_primitive");
      FUN_0051f8f0(0xd,0x8010a,0);
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x2da,"asn1_d2i_ex_primitive");
      FUN_0051f8f0(0xd,0x7e,0);
    }
LAB_004a3605:
    iVar4 = 0;
    goto LAB_004a35a0;
  }
  local_8c = (uint)*(undefined8 *)(param_4 + 8);
  if (local_8c == 0xfffffffc) {
    if ((int)param_5 < 0) goto LAB_004a3615;
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x2d6,"asn1_d2i_ex_primitive");
    FUN_0051f8f0(0xd,0x7f,0);
    goto LAB_004a3605;
  }
LAB_004a3494:
  if (param_5 == 0xffffffff) goto LAB_004a36ac;
LAB_004a349d:
  local_80 = (byte *)*param_2;
  iVar4 = FUN_004a2db0(&local_88,0,0,&local_8f,&local_90,&local_80,param_3,param_5,param_6,
                       (int)param_7,param_8);
  uVar2 = local_8c;
  if (iVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x2f0,"asn1_d2i_ex_primitive");
    FUN_0051f8f0(0xd,0x8010a,0);
    goto LAB_004a35a0;
  }
  if (iVar4 == -1) goto LAB_004a35a0;
  uVar12 = (ulong)local_8c;
  if (1 < local_8c - 0x10) {
    if (local_8c == 0xfffffffd) {
LAB_004a3830:
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_004a37bd;
    }
    if (local_90 == '\0') {
      pbVar10 = local_80;
      pbVar13 = local_88;
      local_80 = local_80 + (long)local_88;
      goto LAB_004a3534;
    }
    if ((local_8c < 0xb) && ((0x466UL >> (uVar12 & 0x3f) & 1) != 0)) {
      FUN_0051f420();
      iVar4 = 0;
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x313,"asn1_d2i_ex_primitive");
      FUN_0051f8f0(0xd,0xc3,0);
      goto LAB_004a35a0;
    }
    local_8e = '\x01';
    iVar4 = FUN_004a3100(&local_68,&local_80,local_88,(int)local_8f);
    pbVar13 = local_68;
    if (iVar4 != 0) {
      lVar5 = FUN_004c5190(&local_68,local_68 + 1);
      if (lVar5 != 0) {
        local_60[(long)pbVar13] = 0;
        pbVar10 = local_60;
        goto LAB_004a3534;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x325,"asn1_d2i_ex_primitive");
      uVar9 = 0xc0100;
      goto LAB_004a3d51;
    }
    iVar4 = 0;
    goto LAB_004a3585;
  }
  if (local_8c == 0xfffffffd) goto LAB_004a3830;
  if (local_90 == '\0') {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x301,"asn1_d2i_ex_primitive");
    FUN_0051f8f0(0xd,0x9c,0);
    goto LAB_004a3605;
  }
LAB_004a37bd:
  pbVar10 = (byte *)*param_2;
  if (local_8f != '\0') {
    local_8d = local_8f;
    local_70 = local_80;
    if (0 < (long)local_88) {
      local_9c = 1;
      pbVar13 = local_88;
      do {
        pbVar3 = local_70;
        if (((pbVar13 == (byte *)0x1) || (*local_70 != 0)) || (local_70[1] != 0)) {
          iVar4 = FUN_004a2db0(&local_78,0,0,&local_8d,0,&local_70,pbVar13,0xffffffffffffffff,0,0,0)
          ;
          if (iVar4 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/tasn_dec.c",0x3ea,"asn1_find_end");
            FUN_0051f8f0(0xd,0x8010a,0);
            iVar4 = 0;
            goto LAB_004a3585;
          }
          if (local_8d == '\0') {
            local_70 = local_70 + local_78;
          }
          else {
            if (local_9c == -1) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/tasn_dec.c",0x3ef,"asn1_find_end");
              uVar9 = 0x8010a;
              goto LAB_004a3d51;
            }
            local_9c = local_9c + 1;
          }
          lVar5 = -((long)local_70 - (long)pbVar3);
        }
        else {
          local_70 = local_70 + 2;
          local_9c = local_9c + -1;
          if (local_9c == 0) {
            pbVar13 = local_70 + -(long)pbVar10;
            local_80 = local_70;
            goto LAB_004a3534;
          }
          lVar5 = -2;
        }
        pbVar13 = pbVar13 + lVar5;
      } while (0 < (long)pbVar13);
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x3f9,"asn1_find_end");
    uVar9 = 0x89;
LAB_004a3d51:
    FUN_0051f8f0(0xd,uVar9,0);
    goto LAB_004a3b54;
  }
  pbVar13 = local_80 + ((long)local_88 - (long)pbVar10);
  local_80 = local_80 + (long)local_88;
LAB_004a3534:
  iVar4 = (int)pbVar13;
  local_70 = pbVar10;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_4 + 0x20) + 0x28), pcVar1 != (code *)0x0)) {
    iVar4 = (*pcVar1)(param_1,pbVar10,(ulong)pbVar13 & 0xffffffff,uVar12,&local_8e,param_4);
    if (iVar4 == 0) goto LAB_004a3585;
    goto LAB_004a3576;
  }
  puVar6 = (uint *)0x0;
  puVar8 = (uint *)0x0;
  puVar11 = param_1;
  if (*(long *)(param_4 + 8) == -4) {
    puVar6 = *(uint **)param_1;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_004a7f10();
      if (puVar6 == (uint *)0x0) {
        FUN_004a7f30(0);
        goto LAB_004a3b54;
      }
      *(uint **)param_1 = puVar6;
    }
    if (uVar2 != *puVar6) {
      FUN_004a10c0(puVar6,uVar12,0);
    }
    puVar11 = puVar6 + 2;
    puVar8 = param_1;
  }
  switch(uVar12) {
  default:
    if (uVar2 == 0x1e) {
      if (((ulong)pbVar13 & 1) == 0) goto LAB_004a39aa;
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x395,"asn1_ex_c2i");
      FUN_0051f8f0(0xd,0xd6,0);
    }
    else if ((uVar2 == 0x1c) && (((ulong)pbVar13 & 3) != 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x399,"asn1_ex_c2i");
      FUN_0051f8f0(0xd,0xd7,0);
    }
    else {
LAB_004a39aa:
      piVar7 = *(int **)puVar11;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)FUN_004a2180(uVar2);
        if (piVar7 == (int *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_dec.c",0x3a0,"asn1_ex_c2i");
          FUN_0051f8f0(0xd,0xc0100,0);
          break;
        }
        *(int **)puVar11 = piVar7;
      }
      else {
        piVar7[1] = uVar2;
      }
      if (local_8e != '\0') {
        FUN_0041ad60(*(undefined8 *)(piVar7 + 2),"../crypto/asn1/tasn_dec.c",0x3aa);
        *piVar7 = iVar4;
        iVar4 = 1;
        *(byte **)(piVar7 + 2) = local_70;
        *param_2 = (long)local_80;
        goto LAB_004a35a0;
      }
      iVar4 = FUN_004a1fa0(piVar7,local_70,(ulong)pbVar13 & 0xffffffff);
      if (iVar4 != 0) goto LAB_004a3576;
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/tasn_dec.c",0x3b0,"asn1_ex_c2i");
      FUN_0051f8f0(0xd,0xc0100,0);
      FUN_004a2270(piVar7);
      puVar11[0] = 0;
      puVar11[1] = 0;
    }
    break;
  case 1:
    if (iVar4 == 1) {
      *puVar11 = (uint)*local_70;
      goto LAB_004a3576;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x36b,"asn1_ex_c2i");
    FUN_0051f8f0(0xd,0x6a,0);
    break;
  case 2:
  case 10:
    lVar5 = FUN_0049f380(puVar11,&local_70,(long)iVar4);
    if (lVar5 != 0) {
      *(uint *)(*(long *)puVar11 + 4) = *(uint *)(*(long *)puVar11 + 4) & 0x100 | uVar2;
LAB_004a3a33:
      if ((puVar6 != (uint *)0x0) && (uVar2 == 5)) {
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      goto LAB_004a3576;
    }
    break;
  case 3:
    lVar5 = FUN_005b3db0(puVar11,&local_70,(long)iVar4);
    goto joined_r0x004a3b0b;
  case 5:
    if (iVar4 == 0) {
      puVar11[0] = 1;
      puVar11[1] = 0;
      goto LAB_004a3a33;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x363,"asn1_ex_c2i");
    FUN_0051f8f0(0xd,0x90,0);
    break;
  case 6:
    lVar5 = FUN_004a0770(puVar11,&local_70,(long)iVar4);
joined_r0x004a3b0b:
    if (lVar5 == 0) break;
LAB_004a3576:
    iVar4 = 1;
    *param_2 = (long)local_80;
    goto LAB_004a3585;
  }
  FUN_004a7f30(puVar6);
  if (puVar8 != (uint *)0x0) {
    puVar8[0] = 0;
    puVar8[1] = 0;
  }
LAB_004a3b54:
  iVar4 = 0;
LAB_004a3585:
  if (local_8e != '\0') {
    FUN_0041ad60(local_60,"../crypto/asn1/tasn_dec.c",0x339);
  }
LAB_004a35a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

